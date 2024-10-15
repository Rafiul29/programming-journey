#include <iostream>
#include <dirent.h> // For directory traversal
#include <sys/types.h>
#include <cstdio> // For FILE handling
#include <vector>
#include <cmath> // For fabs
#include <string>
#include <bits/stdc++.h>
using namespace std;

vector<string> file_name, seed_name;
vector<double> sample[55], seed[10];
vector<string> cls[100];
vector<double> average_factor[100];

// Function to list files in a given directory
void list_dir(const char *path, vector<string> &names)
{
    struct dirent *entry;
    DIR *dir = opendir(path); // Open directory
    if (dir == NULL)
    {
        cerr << "Unable to open directory: " << path << endl;
        return;
    }
    while ((entry = readdir(dir)) != NULL)
    {
        string name = entry->d_name;
        // Skip "." and ".."
        if (name != "." && name != "..")
        {
            names.push_back(name);
        }
    }
    closedir(dir); // Close directory
}

// Calculate Maximum (Chebyshev) distance between two vectors
double max_distance(int a, int b)
{
    double max_diff = 0;
    for (size_t i = 0; i < sample[a].size(); ++i)
    {
        double diff = fabs(sample[a][i] - seed[b][i]);
        max_diff = max(max_diff, diff); // Keep track of the largest difference
    }
    return max_diff;
}

int main()
{
  // List files in sample and seed directories
    list_dir("/home/ubuntu/Desktop/code/programming-journey/lab/pattern-recognition/sample/unknown/", file_name);
    list_dir("/home/ubuntu/Desktop/code/programming-journey/lab/pattern-recognition/sample/seedpoint", seed_name);


    // Load sample data from files
    for (int i = 0; i < file_name.size(); ++i)
    {
        string path = "sample/unknown/" + file_name[i];
        FILE *f = fopen(path.c_str(), "r");
        if (!f)
        {
            cerr << "Error opening file: " << path << endl;
            continue;
        }
        double value;
        while (fscanf(f, "%lf", &value) != EOF)
        {
            sample[i].push_back(value);
        }
        fclose(f); // Close the file
    }

    // Load seed data from files
    for (int i = 0; i < seed_name.size(); ++i)
    {
        string path = "sample/seedpoint/" + seed_name[i];
        FILE *f = fopen(path.c_str(), "r");
        if (!f)
        {
            cerr << "Error opening file: " << path << endl;
            continue;
        }
        double value;
        while (fscanf(f, "%lf", &value) != EOF)
        {
            seed[i].push_back(value);
        }
        fclose(f); // Close the file
    }

    // Perform classification based on Maximum Distance
    for (int i = 0; i < file_name.size(); ++i)
    {
        double max_dist = -1;
        int best_seed = -1;
        for (int j = 0; j < seed_name.size(); ++j)
        {
            double dist = max_distance(i, j);
            if (dist > max_dist)
            {
                max_dist = dist;
                best_seed = j;
            }
        }
        cls[best_seed].push_back(file_name[i]);
        average_factor[best_seed].push_back(max_dist);
    }

    // Display Results
    cout << "\nMaximum Distance Classification\n";
    cout << "Classes--------Class Members--------Average Error\n\n";

    for (int i = 0; i < seed_name.size(); ++i)
    {
        double total_error = 0.0;

        // Print seed name
        for (char ch : seed_name[i])
        {
            if (isdigit(ch))
                break;
            cout << ch;
        }
        cout << "\t";

        // Print classified members and compute average error
        for (int j = 0; j < cls[i].size(); ++j)
        {
            if (j > 0)
                cout << ", ";
            string member = cls[i][j];
            for (char ch : member)
            {
                if (ch == '.')
                    break;
                cout << ch;
            }
            total_error += average_factor[i][j];
        }

        cout << "\t\t\t";
        if (!cls[i].empty())
        {
            printf("%.2f\n", total_error / cls[i].size());
        }
        else
        {
            cout << "N/A\n";
        }
    }

    return 0;
}
