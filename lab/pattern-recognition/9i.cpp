#include <bits/stdc++.h>
#include <dirent.h> // For directory operations
using namespace std;

// Global variables for weights and biases
double b_old = 0.15, w1_old = 0.25, w2_old = 0.3, a = 0.1;

// Define a struct to store data points
struct DataPoint
{
    double x1;
    double x2;
    double target;
};

// Weight updates
void update(double &b_new, double &w1_new, double &w2_new, double e, double x1, double x2)
{
    b_new += a * e;
    w1_new += a * e * x1;
    w2_new += a * e * x2;
}

// Function to read input data from file and store in a vector of DataPoint
vector<DataPoint> readInputData(const string &filePath) {
    vector<DataPoint> data; // To store (x1, x2, target)
    FILE *file = fopen(filePath.c_str(), "r"); // Open the file in read mode
    if (!file) {
        cerr << "Error: Could not open the file " << filePath << endl;
        exit(1);
    }

    DataPoint point;
    // Read data from the file using fscanf
    while (fscanf(file, "%lf %lf %lf", &point.x1, &point.x2, &point.target) == 3) {
        data.push_back(point);
    }

    fclose(file); // Close the file
    return data;
}

// Function to list files in a directory
void list_dir(const char *path, vector<string> &names)
{
    DIR *dir = opendir(path);
    if (dir == nullptr)
    {
        cerr << "Error: Could not open directory " << path << endl;
        return;
    }

    struct dirent *entry;
    while ((entry = readdir(dir)) != nullptr)
    {
        string ss = entry->d_name;
        if (ss != "." && ss != "..") // Skip "." and ".."
            names.push_back(ss);
    }
    closedir(dir);
}

int main()
{
    vector<string> files;
    const char *dataDir = "/home/ubuntu/Desktop/code/programming-journey/lab/pattern-recognition/sample/seedpoint/"; // Replace with your actual path
    list_dir(dataDir, files);

    if (files.empty())
    {
        cerr << "No data files found in the directory." << endl;
        return 1;
    }

    for (const string &fileName : files)
    {
        string filePath = string(dataDir) + fileName;
        cout << "Processing file: " << filePath << endl;

        // Read input data from the file
        auto inputData = readInputData(filePath);
        int dataSize = inputData.size();

        // Initialize vectors to store results
        vector<double> e(dataSize), yin(dataSize), se(dataSize);
        vector<double> w1(dataSize), w2(dataSize), b(dataSize);
        vector<double> Dw1(dataSize), Dw2(dataSize), Db(dataSize);

        double b_new = b_old, w1_new = w1_old, w2_new = w2_old; // Initialize new weights and bias

        for (int i = 0; i < dataSize; i++)
        {
            const auto &point = inputData[i]; // Access DataPoint directly
            double x1 = point.x1;
            double x2 = point.x2;
            double target = point.target;

            // Calculate yin and error
            yin[i] = b_old + w1_old * x1 + w2_old * x2;
            e[i] = target - yin[i];
            se[i] = e[i] * e[i];

            // Update weights and bias if error is not zero
            if (e[i] != 0)
            {
                update(b_new, w1_new, w2_new, e[i], x1, x2);
                w1[i] = w1_new;
                w2[i] = w2_new;
                b[i] = b_new;
                Dw1[i] = w1_new - w1_old;
                Dw2[i] = w2_new - w2_old;
                Db[i] = b_new - b_old;
            }
            else
            {
                w1[i] = w1_old;
                w2[i] = w2_old;
                b[i] = b_old;
                Dw1[i] = 0.0;
                Dw2[i] = 0.0;
                Db[i] = 0.0;
            }
        }

        // Output results
        cout << "x1\t" << "x2\t" << "target\t" << "yin\t" << "db\t" << "dw1\t" << "dw2\t" << "b\t" << "w1\t" << "w2\t" << "E\t" << "SE\t" << endl;
        for (int k = 0; k < dataSize; k++)
        {
            printf("%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n",
                   inputData[k].x1, inputData[k].x2, inputData[k].target,
                   yin[k], Db[k], Dw1[k], Dw2[k], b[k], w1[k], w2[k], e[k], se[k]);
        }
        cout << endl;
    }

    return 0;
}
