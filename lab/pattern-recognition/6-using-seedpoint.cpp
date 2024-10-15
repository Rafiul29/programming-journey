#include <iostream>
#include <dirent.h>
#include <sys/types.h>
#include <cmath>
#include <vector>
#include <cstdio>
#include <string>
#include<bits/stdc++.h>

using namespace std;

// Global variables
vector<string> file_name, seed_name, cls[10];
vector<double> sample[35], seed[10], cen[10];

// Function to list files from a given directory (seed points)
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
  // for(int i=0;i<file_name.size();i++){
  //   cout<<file_name[0]<<endl;
  // }
  closedir(dir);
}
// Euclidean distance calculation between sample and centroid
double distance(int sampleIdx, int centroidIdx)
{
  double result = 0;
  for (int i = 0; i < sample[sampleIdx].size(); i++)
  {
    double diff = fabs(sample[sampleIdx][i] - cen[centroidIdx][i]);
    result += pow(diff, 2.0);
  }
  return sqrt(result);
}

int main()
{
 // List files in sample and seed directories
    list_dir("/home/ubuntu/Desktop/code/programming-journey/lab/pattern-recognition/sample/unknown/", file_name);
    list_dir("/home/ubuntu/Desktop/code/programming-journey/lab/pattern-recognition/sample/seedpoint", seed_name);


  // Reading seed data into vectors
  for (int i = 0; i < seed_name.size(); i++)
  {
    string filePath = "sample/seedpoint/" + seed_name[i];
    FILE *f = fopen(filePath.c_str(), "r");
    if (f == NULL)
    {
      cerr << "Error: Unable to open file " << filePath << endl;
      continue;
    }

    double value;
    while (fscanf(f, "%lf", &value) != EOF)
    {
      seed[i].push_back(value);
      cen[i].push_back(value); // Initialize centroids with seed points
    }
    fclose(f);
  }

  // Reading test sample data into vectors
  for (int i = 0; i < file_name.size(); i++)
  {
    string filePath = "sample/unknown/" + file_name[i];
    FILE *f = fopen(filePath.c_str(), "r");
    if (f == NULL)
    {
      cerr << "Error: Unable to open file " << filePath << endl;
      continue;
    }

    double value;
    while (fscanf(f, "%lf", &value) != EOF)
    {
      sample[i].push_back(value);
    }
    fclose(f);
  }

  // Assigning test samples to the closest centroid and updating centroids
  for (int i = 0; i < file_name.size(); i++)
  {
    double minDistance = 1e9;
    int closestCentroid = -1;

    // Find the nearest centroid for the current sample
    for (int j = 0; j < seed_name.size(); j++)
    {
      double dist = distance(i, j);
      if (dist < minDistance)
      {
        minDistance = dist;
        closestCentroid = j;
      }
    }

    // Assign the sample to the closest centroid's cluster
    cls[closestCentroid].push_back(file_name[i]);

    // Update the centroid with the new sample data
    for (int k = 0; k < cen[closestCentroid].size(); k++)
    {
      cen[closestCentroid][k] =
          (cen[closestCentroid][k] * (cls[closestCentroid].size() - 1) +
           sample[i][k]) /
          cls[closestCentroid].size();
    }
  }

  // Display the clusters and their members
  cout << "Classes---------------Class Members\n\n";
  for (int i = 0; i < seed_name.size(); i++)
  {
    cout << "Cluster " << i + 1 << " (" << seed_name[i] << "):\t";

    for (int j = 0; j < cls[i].size(); j++)
    {
      if (j > 0)
        cout << ", ";
      string fileName = cls[i][j];
      size_t dotPos = fileName.find('.');
      if (dotPos != string::npos)
        cout << fileName.substr(0, dotPos);
      else
        cout << fileName;
    }
    cout << endl;
  }
  return 0;
}
