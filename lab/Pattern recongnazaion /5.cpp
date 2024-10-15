#include <bits/stdc++.h>
using namespace std;

struct ra
{
  double a, b; // Coordinates of the data point
  int c;       // Cluster label (1 or 2)
} p[100];

int main()
{
  bool check = true;
  int n, i, j;
  double x, y, s1, s2, m1, m2, sr1, sr2;

  cout << "How many samples are: ";
  cin >> n;
  cout << "Enter the samples\n\nX Y\n"; // Input from keyboard
  for (i = 0; i < n; i++)
  {
    cin >> x >> y;
    p[i].a = x;
    p[i].b = y;
    p[i].c = 0; // Initialize cluster label to 0
  }

  // Considering the first two samples are the seed points
  s1 = p[0].a; // Use '=' instead of '-'
  s2 = p[0].b;
  m1 = p[1].a; // Use '=' instead of '-'
  m2 = p[1].b;

  //  Clustering Process
  do
  {
    check = false;

    double w1 = 0, w2 = 0, r1 = 0, r2 = 0;
    int c1 = 0, c2 = 0;

    // Calculating the nearest cluster centroid
    for (i = 0; i < n; i++)
    {
      sr1 = sqrt(((s1 - p[i].a) * (s1 - p[i].a)) + ((s2 - p[i].b) * (s2 - p[i].b)));
      sr2 = sqrt(((m1 - p[i].a) * (m1 - p[i].a)) + ((m2 - p[i].b) * (m2 - p[i].b)));

      if (sr1 < sr2)
      {
        if (p[i].c != 1)
        {
          p[i].c = 1;   // Assign to cluster 1
          check = true; // Mark as changed
        }
        w1 += p[i].a; // Update centroid sum for cluster 1
        w2 += p[i].b;
        c1++;
      }
      else
      {
        if (p[i].c != 2)
        {
          p[i].c = 2;   // Assign to cluster 2
          check = true; // Mark as changed
        }
        r1 += p[i].a; // Update centroid sum for cluster 2
        r2 += p[i].b;
        c2++;
      }
    }

    // Update centroids after all points are assigned
    if (c1 > 0)
    { // Avoid division by zero
      s1 = w1 / c1;
      s2 = w2 / c1;
    }
    if (c2 > 0)
    { // Avoid division by zero
      m1 = r1 / c2;
      m2 = r2 / c2;
    }

  } while (check); // Repeat until no changes occur

  // Printing the clusters
  cout << "\n================The resultant clusters will be================\n";
  
  cout << "The first cluster:\n\nX\tY\n";
  for (i = 0; i < n; i++)
  {
    if (p[i].c == 1)
    {
      cout << p[i].a << "\t" << p[i].b << endl;
    }
  }

  cout << "\nThe second cluster:\nX\tY\n";
  for (i = 0; i < n; i++)
  {
    if (p[i].c == 2)
    {
      cout << p[i].a << "\t" << p[i].b << endl;
    }
  }

  return 0;
}
