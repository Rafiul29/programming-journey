#include<bits/stdc++.h>
using namespace std;

// Function to calculate the Euclidean distance between two points
float dst(float x1, float x2, float y1, float y2) {
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main() {
    FILE *f;
    f = fopen("words_input.txt", "r");

    if (f == NULL) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    float d1, d2;
    int n = 0, a[20], b[20], x1, x2, y1, y2, ck[20] = {0};
    int sumx = 0, sumy = 0, i = 0, j, k, x, y, l = 0;

    // Reading input from file
    while (fscanf(f, "%d %d", &x, &y) != EOF) {
        a[n] = x;
        b[n] = y;
        n++;
    }

    // Assign initial centroids
    x1 = a[0];
    x2 = a[1];
    y1 = b[0];
    y2 = b[1];

    // Partitional clustering
     bool change = true;
    do {
         change = false;
        sumx = sumy = l = 0;

        // Calculating distances and clustering points
        for (i = 0; i < n; i++) {
            d1 = dst(x1, a[i], y1, b[i]);
            d2 = dst(x2, a[i], y2, b[i]);

            if (d1 < d2) {
                if (ck[i] != 1) {
                    ck[i] = 1;
                    change = true;
                }
            } else {
                if (ck[i] != 2) {
                    ck[i] = 2;
                    change = true;
                }
            }
        }

        // Recalculate centroids for cluster 1
        sumx = sumy = l = 0;
        for (i = 0; i < n; i++) {
            if (ck[i] == 1) {
                sumx += a[i];
                sumy += b[i];
                l++;
            }
        }

        if (l > 0) {
            x1 = sumx / l;
            y1 = sumy / l;
        }

        // Recalculate centroids for cluster 2
        sumx = sumy = l = 0;
        for (i = 0; i < n; i++) {
            if (ck[i] == 2) {
                sumx += a[i];
                sumy += b[i];
                l++;
            }
        }

        if (l > 0) {
            x2 = sumx / l;
            y2 = sumy / l;
        }

    } while (change);

    // Printing the clusters
    printf("Partitional clustering for group 1:\n");
    for (i = 0; i < n; i++) {
        if (ck[i] == 1)
            printf("%d %d\n", a[i], b[i]);
    }

    printf("\nPartitional clustering for group 2:\n");
    for (i = 0; i < n; i++) {
        if (ck[i] == 2)
            printf("%d %d\n", a[i], b[i]);
    }

    fclose(f);
    return 0;
}
