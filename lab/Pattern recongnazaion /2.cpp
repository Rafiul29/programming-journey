#include <iostream>
#include <dirent.h>
#include <sys/types.h>
#include <vector>
#include <string>
#include <cmath>  // For fabs and pow
#include <cstdio> // For fopen, fscanf, fclose
#include <bits/stdc++.h>
using namespace std;

vector<string> file_name, seed_name;
vector<double> sample[55], seed[10]; // Store up to 55 samples and 10 seeds

void list_dir(const char *path, vector<string> &names)
{
    DIR *dir = opendir(path);
    if (dir == nullptr)
        return;

    struct dirent *entry;
    while ((entry = readdir(dir)) != nullptr)
    {
        string ss = entry->d_name;
        if (ss != "." && ss != "..") // Skip "." and ".."
            names.push_back(ss);
    }
    closedir(dir);
}

double calculate_distance(int a, int b)
{
    double result = 0, x, p = 2;
    for (int ii = 0; ii < sample[a].size(); ii++)
    {
        x = fabs(sample[a][ii] - seed[b][ii]);
        result += x;
    }
    return result;
}

void read_data(const string &path, vector<double> &data)
{
    FILE *file = fopen(path.c_str(), "r");
    if (!file)
    {
        cerr << "Failed to open file: " << path << endl;
        return;
    }
    double value;
    while (fscanf(file, "%lf", &value) != EOF)
    {
        data.push_back(value);
    }
    fclose(file);
}

int main()
{
    // List files in sample and seed directories
    list_dir("/home/ubuntu/Desktop/Lab/pattern/sample/unknown/", file_name);
    list_dir("/home/ubuntu/Desktop/Lab/pattern/sample/seedpoint", seed_name);

    // Load data for samples
    for (size_t i = 0; i < file_name.size(); ++i)
    {
        string path = "sample/unknown/" + file_name[i];
        read_data(path, sample[i]);
    }

    // Load data for seeds
    for (size_t i = 0; i < seed_name.size(); ++i)
    {
        string path = "sample/seedpoint/" + seed_name[i];
        read_data(path, seed[i]);
    }

    vector<string> cls[100];            // Store classified samples
    vector<double> average_factor[100]; // Store distances for averaging

    // Classify samples based on the closest seed
    for (size_t i = 0; i < file_name.size(); ++i)
    {
        double min_dist = 1e9;
        int closest_seed = -1;

        for (size_t j = 0; j < seed_name.size(); ++j)
        {
            double dist = calculate_distance(i, j);
            if (dist < min_dist)
            {
                min_dist = dist;
                closest_seed = j;
            }
        }
        cls[closest_seed].push_back(file_name[i]);
        average_factor[closest_seed].push_back(min_dist);
        cout << file_name[i] << " " << min_dist << " " << closest_seed << endl;
    }

    // Display the results
    cout << "\nEuclidean Distance\n";
    cout << "Classes\t\tClass Members\t\t\t\tAverage Error\n\n";

    for (size_t i = 0; i < seed_name.size(); ++i)
    {
        double total_error = 0.0;

        // Print seed name
        cout << seed_name[i] << "\t";

        // Print class members
        for (size_t j = 0; j < cls[i].size(); ++j)
        {
            if (j > 0)
                cout << ", ";
            cout << cls[i][j].substr(0, cls[i][j].find('.')); // Print name without extension
            total_error += average_factor[i][j];
        }

        // Print average error
        double avg_error = cls[i].empty() ? 0 : total_error / cls[i].size();
        cout << "\t\t\t\t" << fixed << setprecision(2) << avg_error << endl;
    }

    return 0;
}
