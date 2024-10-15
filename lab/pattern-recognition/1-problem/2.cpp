#include <iostream>
#include <dirent.h>
#include <sys/types.h>
#include <vector>
#include <cmath>
#include <cstdio>
#include <string>
#include <bits/stdc++.h>
using namespace std;

vector<string> file_name, seed_name; 
vector<vector<double>> sample; 
vector<vector<double>> seed; 
vector<string> cls[100]; 
vector<double> average_factor[100]; 

void list_dir(const char *path) {
    struct dirent *entry;
    DIR *dir = opendir(path);
    if (dir == NULL) {
        return;
    }

    while ((entry = readdir(dir)) != NULL) {
        if (entry->d_type == DT_REG) { // Check if entry is a regular file
            file_name.push_back(entry->d_name);
        }
    }
    closedir(dir); 
}

void list_seed(const char *path) {
    struct dirent *entry;
    DIR *dir = opendir(path);
    if (dir == NULL) {
        return;
    }

    while ((entry = readdir(dir)) != NULL) {
        if (entry->d_type == DT_REG) { // Check if entry is a regular file
            seed_name.push_back(entry->d_name);
        }
    }
    closedir(dir);
}

double distance(int a, int b) {
    double result = 0, x;
    for (size_t ii = 0; ii < sample[a].size(); ii++) {
        x = fabs(sample[a][ii] - seed[b][ii]);
        result += pow(x, 2.0);
    }
    return sqrt(result);
}

int main() {
    list_dir("/home/ubuntu/Desktop/Lab/pattern/1-problem/sample/unknown/");
    list_seed("/home/ubuntu/Desktop/Lab/pattern/1-problem/sample/seedpint/");

    // Resize the sample and seed vectors based on the number of files found
    sample.resize(file_name.size());
    seed.resize(seed_name.size());

    cout << "Sample list" << endl;

    for (size_t i = 0; i < file_name.size(); i++) {
        FILE *f2;
        double v;
        string str = "sample/unknown/" + file_name[i];
        f2 = fopen(str.c_str(), "r");
        if (f2 != NULL) {
            while (fscanf(f2, "%lf", &v) != EOF) {
                sample[i].push_back(v);
            }
            fclose(f2);
        }
    }

    for (size_t i = 0; i < seed_name.size(); i++) {
        FILE *f3;
        double v;
        string str = "sample/seedpint/" + seed_name[i];
        f3 = fopen(str.c_str(), "r");
        if (f3 != NULL) {
            while (fscanf(f3, "%lf", &v) != EOF) {
                seed[i].push_back(v);
            }
            fclose(f3);
        }
    }

    for (size_t i = 0; i < file_name.size(); i++) {
        double ans = numeric_limits<double>::max();
        int pos = -1;
        
        for (size_t j = 0; j < seed_name.size(); j++) {
            double dist = distance(i, j);
            if (dist < ans) {
                ans = dist;
                pos = j;
            }
        }
        
        if (pos != -1) {
            cls[pos].push_back(file_name[i]);
            average_factor[pos].push_back(ans);
            cout << file_name[i] << " " << ans << " " << pos << endl;
        }
    }

    printf("\nClasses-- Error\n\n");
    printf("Euclidean Distance --Class Members---\n---Average\n");
    
    for (size_t i = 0; i < seed_name.size(); i++) {
        double ans = 0.0;
        
        for (size_t j = 0; j < cls[i].size(); j++) {
            if (j > 0) {
                cout << ",";
            }
            ans += average_factor[i][j];
            cout << cls[i][j];
        }
        
        printf("\t\t\t\t");
        if (!cls[i].empty()) {
            printf("%.2f\n", ans / cls[i].size());
        } else {
            printf("N/A\n");
        }
    }

    return 0;
}
