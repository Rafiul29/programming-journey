// {{4,4}, {8,4}, {15,8}, {24,4}, {24,12}};
#include <iostream>
#include <vector>
#include <cmath>
#include <limits>
#include <algorithm>

using namespace std;

// Function to calculate Euclidean distance between two points
double euclideanDistance(pair<int, int> p1, pair<int, int> p2) {
    return sqrt(pow(p1.first - p2.first, 2) + pow(p1.second - p2.second, 2));
}

// Function to calculate the centroid of a cluster
pair<double, double> calculateCentroid(const vector<pair<int, int>>& cluster) {
    double xSum = 0, ySum = 0;
    for (auto& point : cluster) {
        xSum += point.first;
        ySum += point.second;
    }
    int size = cluster.size();
    return {xSum / size, ySum / size};
}

// Function to calculate Ward's distance between two clusters
double wardDistance(const vector<pair<int, int>>& cluster1, const vector<pair<int, int>>& cluster2) {
    pair<double, double> centroid1 = calculateCentroid(cluster1);
    pair<double, double> centroid2 = calculateCentroid(cluster2);
    return pow(euclideanDistance(centroid1, centroid2), 2);
}

// Function to merge two clusters
vector<pair<int, int>> mergeClusters(const vector<pair<int, int>>& cluster1, const vector<pair<int, int>>& cluster2) {
    vector<pair<int, int>> mergedCluster = cluster1;
    mergedCluster.insert(mergedCluster.end(), cluster2.begin(), cluster2.end());
    return mergedCluster;
}

// Perform hierarchical clustering using Ward's method
void hierarchicalClustering(vector<pair<int, int>>& data) {
    // Initial clusters: each point is its own cluster
    vector<vector<pair<int, int>>> clusters;
    for (const auto& point : data) {
        clusters.push_back({point});
    }

    while (clusters.size() > 1) {
        double minDistance = numeric_limits<double>::max();
        pair<int, int> clustersToMerge;

        // Find the closest pair of clusters based on Ward's distance
        for (size_t i = 0; i < clusters.size(); ++i) {
            for (size_t j = i + 1; j < clusters.size(); ++j) {
                double distance = wardDistance(clusters[i], clusters[j]);
                if (distance < minDistance) {
                    minDistance = distance;
                    clustersToMerge = {i, j};
                }
            }
        }

        // Merge the closest pair of clusters
        clusters[clustersToMerge.first] = mergeClusters(clusters[clustersToMerge.first], clusters[clustersToMerge.second]);
        clusters.erase(clusters.begin() + clustersToMerge.second);

        // Display the clusters after each merge
        cout << "Clusters after merging: " << endl;
        for (const auto& cluster : clusters) {
            cout << "{ ";
            for (const auto& point : cluster) {
                cout << "(" << point.first << ", " << point.second << ") ";
            }
            cout << "}" << endl;
        }
        cout << "-----------------------------" << endl;
    }
}

int main() {
    FILE *f;
    f = fopen("words_input.txt", "r");

    if (f == NULL) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    vector<pair<int, int>> data;
    int x, y;

    // Reading data from the file
    while (fscanf(f, "%d %d", &x, &y) != EOF) {
        data.push_back({x, y});
    }
    fclose(f);

    // Perform hierarchical clustering
    hierarchicalClustering(data);

    return 0;
}