#include <bits/stdc++.h>
using namespace std;

struct ra
{
  double a, b; // Coordinates
  int c;       // Cluster assignment
} p[100];

int main()
{
  bool check = true;
  int n, i, j;
  double x, y, s1, s2, m1, m2, sr1, sr2;
  double w1, w2, r1, r2;
  int c1 = 0, c2 = 0; // Initialize cluster counters

  cout << "How many samples are: ";
  cin >> n;
  cout << "Enter the samples\n\nX Y\n"; // Input from keyboard
  for (i = 0; i < n; i++)
  {
    cin >> x >> y;
    p[i].a = x; // Store x-coordinate
    p[i].b = y; // Store y-coordinate
    p[i].c = 0; // Initialize cluster as 0
  }

  // Considering the first two samples as the seed points
  s1 = p[0].a; // X value of first sample
  s2 = p[0].b; // Y value of first sample
  m1 = p[1].a; // X value of second sample
  m2 = p[1].b; // Y value of second sample

  // Assign initial clusters
  p[0].c = 1; // Assign first sample to cluster 1
  p[1].c = 2; // Assign second sample to cluster 2

  do
  {
    check = false;
    w1 = 0; // Sum of x coordinates for cluster 1
    w2 = 0; // Sum of y coordinates for cluster 1
    r1 = 0; // Sum of x coordinates for cluster 2
    r2 = 0; // Sum of y coordinates for cluster 2
    c1 = 0; // Count of points in cluster 1
    c2 = 0; // Count of points in cluster 2

    // Calculating the nearest cluster centroid
    for (i = 0; i < n; i++)
    {
      if (i >= 2)
      { // Start from the third point
        sr1 = sqrt(((s1 - p[i].a) * (s1 - p[i].a)) + ((s2 - p[i].b) * (s2 - p[i].b)));
        sr2 = sqrt(((m1 - p[i].a) * (m1 - p[i].a)) + ((m2 - p[i].b) * (m2 - p[i].b)));

        // Check distance to the first centroid
        if (sr1 < sr2)
        {
          if (p[i].c != 1)
          {
            p[i].c = 1;   // Assign to cluster 1
            check = true; // Mark as changed
          }
          w1 += p[i].a; // Add to cluster 1 sums
          w2 += p[i].b;
          c1++; // Increment cluster 1 count
        }
        else
        {
          if (p[i].c != 2)
          {
            p[i].c = 2;   // Assign to cluster 2
            check = true; // Mark as changed
          }
          r1 += p[i].a; // Add to cluster 2 sums
          r2 += p[i].b;
          c2++; // Increment cluster 2 count
        }
      }
    }

    // Recalculate centroids
    if (c1 > 0)
    {
      s1 = w1 / c1;
      s2 = w2 / c1;
    }
    if (c2 > 0)
    {
      m1 = r1 / c2;
      m2 = r2 / c2;
    }
  } while (check);

  // Printing the clusters
  cout << "\n\n================ The resultant clusters will be ==================\n\n";
  cout << "The first cluster\n\nX\tY\n";
  for (i = 0; i < n; i++)
  {
    if (p[i].c == 1) // Print points in cluster 1
      cout << p[i].a << "\t" << p[i].b << endl;
  }

  cout << "\n\nThe second cluster\n\nX\tY\n";
  for (i = 0; i < n; i++)
  {
    if (p[i].c == 2) // Print points in cluster 2
      cout << p[i].a << "\t" << p[i].b << endl;
  }

  cout << "========================================================\n";
  return 0;
}
