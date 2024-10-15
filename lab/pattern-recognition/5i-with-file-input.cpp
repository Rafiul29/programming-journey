#include <bits/stdc++.h>
using namespace std;

struct ra {
    double a, b;  // Coordinates of the data point
    int c;        // Cluster label (1 or 2)
} p[100];

int main() {
    FILE *f = fopen("words_input.txt", "r");
    if (f == NULL) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    bool check = true;
    int n = 0;
    double x, y, s1, s2, m1, m2, sr1, sr2;

    // Reading input from the file and storing it into the structure array
    while (fscanf(f, "%lf %lf", &x, &y) != EOF) {
        p[n].a = x;
        p[n].b = y;
        p[n].c = 0;  // Initialize with no cluster assigned
        n++;
    }
    fclose(f);  // Close the file after reading

    // Considering the first two samples as seed points (initial centroids)
    s1 = p[0].a;
    s2 = p[0].b;
    m1 = p[1].a;
    m2 = p[1].b;

    // Clustering process
    do {
        check = false;

        double w1 = 0, w2 = 0, r1 = 0, r2 = 0;
        int c1 = 0, c2 = 0;

        // Calculate the nearest cluster centroid for each point
        for (int i = 0; i < n; i++) {
            sr1 = sqrt((s1 - p[i].a) * (s1 - p[i].a) + (s2 - p[i].b) * (s2 - p[i].b));
            sr2 = sqrt((m1 - p[i].a) * (m1 - p[i].a) + (m2 - p[i].b) * (m2 - p[i].b));

            if (sr1 < sr2) {
                if (p[i].c != 1) {
                    p[i].c = 1;   // Assign to cluster 1
                    check = true; // Mark as changed
                }
                w1 += p[i].a;  // Update sum of coordinates for cluster 1
                w2 += p[i].b;
                c1++;
            } else {
                if (p[i].c != 2) {
                    p[i].c = 2;   // Assign to cluster 2
                    check = true; // Mark as changed
                }
                r1 += p[i].a;  // Update sum of coordinates for cluster 2
                r2 += p[i].b;
                c2++;
            }
        }

        // Update centroids after all points are assigned
        if (c1 > 0) {  // Avoid division by zero
            s1 = w1 / c1;
            s2 = w2 / c1;
        }
        if (c2 > 0) {  // Avoid division by zero
            m1 = r1 / c2;
            m2 = r2 / c2;
        }

    } while (check);  // Repeat until no changes occur

    // Printing the clusters
    cout << "\n================The resultant clusters================\n";

    cout << "The first cluster:\n\nX\tY\n";
    for (int i = 0; i < n; i++) {
        if (p[i].c == 1) {
            cout << p[i].a << "\t" << p[i].b << endl;
        }
    }

    cout << "\nThe second cluster:\nX\tY\n";
    for (int i = 0; i < n; i++) {
        if (p[i].c == 2) {
            cout << p[i].a << "\t" << p[i].b << endl;
        }
    }

    return 0;
}
