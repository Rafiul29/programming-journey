#include <iostream>
#include <fstream>
#include <dirent.h>
#include <sys/types.h>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

// Activation function: Binary Step Function
int activation(int yin) {
    if (yin > 0)
        return 1;
    else if (yin == 0)
        return 0;
    else
        return -1;
}

// Weight update function
void updateWeights(vector<int> &weights, int q, int t, int x1, int x2) {
    weights[0] += q * t;      // Update bias weight
    weights[1] += q * t * x1; // Update weight for x1
    weights[2] += q * t * x2; // Update weight for x2

    cout << "Updated Weights: [ ";
    for (int w : weights) {
        cout << w << " ";
    }
    cout << "]" << endl;
}

// Function to read input data from a file
vector<int> readInputData(const string &path) {
    vector<int> data;
 FILE *file = fopen(path.c_str(), "r");
    if (!file)
    {
        cout << "Failed to open file: " << path << endl;
        return data;
    }

    double value;
    while (fscanf(file, "%lf", &value) != EOF)
    {
        data.push_back(value);
    }
    fclose(file);
    return data;
}

// Function to list files in a directory
void list_dir(const char *path, vector<string> &names) {
    DIR *dir = opendir(path);
    if (dir == nullptr)
        return;

    struct dirent *entry;
    while ((entry = readdir(dir)) != nullptr) {
        string ss = entry->d_name;
        if (ss != "." && ss != "..") // Skip "." and ".."
            names.push_back(ss);
    }
    closedir(dir);
}

int main() {
    // File paths for input data directories
    const char *dataDir = "/home/ubuntu/Desktop/code/programming-journey/lab/pattern-recognition/sample/seedpoint/";

    // List input files in the directory
    vector<string> fileNames;
    list_dir(dataDir, fileNames);

    // Read input data from files
    vector<vector<int>> inputs; // Store inputs from multiple files
    for (const string &fileName : fileNames) {
        string path = string(dataDir) + fileName;
        inputs.push_back(readInputData(path));
    }

    // Initialize weights and learning parameters
    vector<int> weights(3, 0); // Weights: [bias, w1, w2]
    int learningRate = 1;      // Learning rate (q)
    
    // Use the minimum size of inputs for processing
    int numSamples = inputs.empty() ? 0 : inputs[0].size();
    vector<int> targets = {1, -1}; // Example target values, extend as needed

    // Process each sample
    for (int i = 0; i < numSamples; ++i) {
        cout << "Sample " << i + 1 << ": ";

        // Combine inputs from each file for x1 and x2
        int x1 = inputs[0][i]; // You can adjust how to combine inputs if needed
        int x2 = inputs.size() > 1 ? inputs[1][i] : 0; // Safe access

        cout << "x1=" << x1 << ", x2=" << x2 << endl;

        // Calculate yin
        int yin = weights[0] + (x1 * weights[1]) + (x2 * weights[2]);

        // Apply activation function
        int predicted = activation(yin);

        // If prediction is incorrect, update weights
        if (predicted != targets[i % targets.size()]) {
            cout << "Mismatch detected. Updating weights..." << endl;
            updateWeights(weights, learningRate, targets[i % targets.size()], x1, x2);
        } else {
            cout << "Weights remain unchanged: [ ";
            for (int w : weights) {
                cout << w << " ";
            }
            cout << "]" << endl;
        }

        cout << endl;
    }

    // Output final results
    cout << "Final Weights: [ ";
    for (int w : weights) {
        cout << w << " ";
    }
    cout << "]" << endl;

    return 0;
}
