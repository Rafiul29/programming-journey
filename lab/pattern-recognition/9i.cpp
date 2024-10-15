#include <bits/stdc++.h>
#include <dirent.h> // Required for directory handling
using namespace std;

// Function to list files in a directory
void list_dir(const char *path, vector<string> &names) {
    DIR *dir = opendir(path);
    if (dir == nullptr) {
        cerr << "Could not open directory: " << path << endl;
        return;
    }

    struct dirent *entry;
    while ((entry = readdir(dir)) != nullptr) {
        string ss = entry->d_name;
        if (ss != "." && ss != "..") { // Skip "." and ".."
            names.push_back(ss); // Add valid file names to the vector
        }
    }
    closedir(dir); // Close the directory
}

// Global variables for the Perceptron implementation
int p = 0, q = 0, r = 0, aa = 0, bb = 0, cc = 0;
double b_old = 0.15, w1_old = 0.25, w2_old = 0.3, a = 0.1, b_new, w1_new,
       w2_new, dw1, dw2, db;
double e[10], Dw1[10], Dw2[10], Db[10], w1[10], w2[10], b[10], se[10];

// Function to update weights
void update(double e, double x1, double x2) {
    b_new = b_old + a * e;
    w1_new = w1_old + a * e * x1;
    w2_new = w2_old + a * e * x2;
    dw1 = w1_new - w1_old;
    dw2 = w2_new - w2_old;
    db = b_new - b_old;
    b_old = b_new;
    w1_old = w1_new;
    w2_old = w2_new;
}

int main() {
    // Part 1: Perceptron implementation
    int i, j, k, x1[100], x2[100], t[100], g;
    double yin[100];

    for (g = 0; g < 2; g++) {
        cout << "Enter the input values and target value" << endl;
        for (i = 0; i < 4; i++) {
            cout << "x" << i + 1 << ": ";
            cin >> x1[i];
            cout << "y" << i + 1 << ": ";
            cin >> x2[i];
            cout << "target: ";
            cin >> t[i];
            cout << endl;

            // Calculate the output
            yin[i] = b_old + w1_old * x1[i] + w2_old * x2[i];
            e[i] = t[i] - yin[i];
            se[i] = e[i] * e[i];

            // Update weights if there is an error
            if (e[i] != 0) {
                update(e[i], x1[i], x2[i]);
                w1[i] = w1_new;
                w2[i] = w2_new;
                b[i] = b_new;
                Dw1[i] = dw1;
                Dw2[i] = dw2;
                Db[i] = db;
            } else {
                w1[i] = w1_old;
                w2[i] = w2_old;
                b[i] = b_old;
                Dw1[i] = dw1;
                Dw2[i] = dw2;
                Db[i] = db;
            }
        }

        // Displaying the results
        cout << "x1\t" << "x2\t" << "t\t" << "yin\t" << "db\t" << "dw1\t" 
             << "dw2\t" << "b\t" << "w1\t" << "w2\t" << "E\t" << "SE\t " << endl;
        for (k = 0; k < 4; k++)
            printf("%d\t%d\t%d\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n", 
                   x1[k], x2[k], t[k], yin[k], Db[k], Dw1[k], Dw2[k], b[k], w1[k], w2[k], e[k], se[k]);
        cout << endl;
    }

    // Part 2: Listing files in specified directories
    vector<string> file_names; // To hold file names from the "unknown" directory
    vector<string> seed_names; // To hold file names from the "seedpoint" directory

    // List files from the first directory
    const char *unknown_path = "/home/ubuntu/Desktop/Lab/pattern/sample/unknown/";
    list_dir(unknown_path, file_names);
    
    // List files from the second directory
    const char *seedpoint_path = "/home/ubuntu/Desktop/Lab/pattern/sample/seedpoint";
    list_dir(seedpoint_path, seed_names);

    // Displaying the files from the "unknown" directory
    cout << "Files in the 'unknown' directory:" << endl;
    for (const string &file : file_names) {
        cout << file << endl;
    }

    // Displaying the files from the "seedpoint" directory
    cout << "\nFiles in the 'seedpoint' directory:" << endl;
    for (const string &file : seed_names) {
        cout << file << endl;
    }

    return 0;
}
