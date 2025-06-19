#include <iostream>
#include <vector>
#include <cmath>
#include <limits>
#include <algorithm>

using namespace std;

// Define a struct to represent a 2D point
struct Point
{
    int x;
    int y;
};

// Function to calculate Euclidean distance between two points
double euclideanDistance(const Point &p1, const Point &p2)
{
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

// Function to calculate the centroid of a cluster
Point calculateCentroid(const vector<Point> &cluster)
{
    double xSum = 0, ySum = 0;
    for (const auto &point : cluster)
    {
        xSum += point.x;
        ySum += point.y;
    }
    int size = cluster.size();
    return {static_cast<int>(xSum / size), static_cast<int>(ySum / size)};
}

// Function to calculate Ward's distance (squared Euclidean) between two clusters
double wardDistance(const vector<Point> &cluster1, const vector<Point> &cluster2)
{
    Point centroid1 = calculateCentroid(cluster1);
    Point centroid2 = calculateCentroid(cluster2);
    return pow(euclideanDistance(centroid1, centroid2), 2);
}

// Function to merge two clusters
vector<Point> mergeClusters(const vector<Point> &cluster1, const vector<Point> &cluster2)
{
    vector<Point> mergedCluster = cluster1;
    mergedCluster.insert(mergedCluster.end(), cluster2.begin(), cluster2.end());
    return mergedCluster;
}

// Display a cluster
void displayCluster(const vector<Point> &cluster)
{
    cout << "{ ";
    for (const auto &point : cluster)
    {
        cout << "(" << point.x << ", " << point.y << ") ";
    }
    cout << "}";
}

// Perform hierarchical clustering using Ward's method
void hierarchicalClustering(vector<Point> &data)
{
    // Initial clusters: each point is its own cluster
    vector<vector<Point>> clusters;
    for (const auto &point : data)
    {
        clusters.push_back({point});
    }

    while (clusters.size() > 1)
    {
        double minDistance = numeric_limits<double>::max();
        pair<int, int> clustersToMerge;

        // Find the closest pair of clusters based on Ward's distance
        for (int i = 0; i < clusters.size(); ++i)
        {
            for (int j = i + 1; j < clusters.size(); ++j)
            {
                double distance = wardDistance(clusters[i], clusters[j]);
                if (distance < minDistance)
                {
                    minDistance = distance;
                    clustersToMerge = {i, j};
                }
            }
        }

        // Display the clusters to be merged and the distance between them
        cout << "Merging clusters: ";
        displayCluster(clusters[clustersToMerge.first]);
        cout << " and ";
        displayCluster(clusters[clustersToMerge.second]);
        cout << "\nDifference (Ward's distance): "
             << wardDistance(clusters[clustersToMerge.first], clusters[clustersToMerge.second])
             << endl;

        // Merge the closest pair of clusters
        clusters[clustersToMerge.first] =
            mergeClusters(clusters[clustersToMerge.first], clusters[clustersToMerge.second]);
        clusters.erase(clusters.begin() + clustersToMerge.second);

        // Display the clusters after merging
        cout << "Clusters after merging: " << endl;
        for (const auto &cluster : clusters)
        {
            displayCluster(cluster);
            cout << endl;
        }
        cout << "-----------------------------" << endl;
    }
}

int main()
{
    FILE *f = fopen("words_input.txt", "r");

    if (f == NULL)
    {
        cout << "Error opening file!" << endl;
        return 1;
    }

    vector<Point> data;
    int x, y;

    // Reading data from the file
    while (fscanf(f, "%d %d", &x, &y) != EOF)
    {
        data.push_back({x, y});
    }
    fclose(f);
    



    // Perform hierarchical clustering
    hierarchicalClustering(data);

    return 0;
}
