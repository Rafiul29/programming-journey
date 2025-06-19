
#include <bits/stdc++.h>
using namespace std;

const int MATRIX_SIZE = 26; // 5x5 matrix flattened

// Sample 5x5 letter representations (T, D, F, C, H, Z)
vector<vector<int>> training_patterns = {
    vector<int>{1, 1, 1, 1, 1,
                -1, -1, 1, -1, -1,
                -1, -1, 1, -1, -1,
                -1, -1, 1, -1, -1,
                -1, -1, 1, -1, -1}, // T

    vector<int>{1, 1, 1, -1, -1,
                1, -1, -1, 1, -1,
                1, -1, -1, 1, -1,
                1, -1, -1, 1, -1,
                1, 1, 1, -1, -1}, // D

    vector<int>{1, 1, 1, 1, -1,
                1, -1, -1, -1, -1,
                1, 1, 1, -1, -1,
                1, -1, -1, -1, -1,
                1, -1, -1, -1, -1}, // F

    vector<int>{-1, 1, 1, 1, -1,
                1, -1, -1, -1, -1,
                1, -1, -1, -1, -1,
                1, -1, -1, -1, -1,
                -1, 1, 1, 1, -1}, // C

    vector<int>{1, -1, -1, -1, 1,
                1, -1, -1, -1, 1,
                1, 1, 1, 1, 1,
                1, -1, -1, -1, 1,
                1, -1, -1, -1, 1}, // H

    vector<int>{1, 1, 1, 1, 1,
                -1, -1, -1, -1, 1,
                -1, -1, 1, 1, -1,
                1, -1, -1, -1, -1,
                1, 1, 1, 1, 1} // Z
};

// Targets for the above patterns: 1 = Group 1, -1 = Group 2
vector<int> targets = {1, 1, -1, -1, 1, -1};
vector<int> bias = {1, 1, 1, 1, 1, 1};

// Weight vector initialized to 0
vector<int> weights(MATRIX_SIZE, 0);

// Hebbian learning rule to train weights
void train()
{
  for (int i = 0; i < training_patterns.size(); ++i)
  {
    for (int j = 0; j <= MATRIX_SIZE; ++j)
    {
      if (j < MATRIX_SIZE)
      {
        weights[j] += training_patterns[i][j] * targets[i];
      }
      else
      {
        bias[i] += targets[i] * bias[i];
      }
    }
  }
}

// Function to classify a given pattern using the trained weights
int classify(vector<int> &pattern)
{
  int index = 0;
  int sum = 0;
  for (int i = 0; i < MATRIX_SIZE; ++i)
  {
    sum += pattern[i] * weights[i];
  }

  sum += bias[index++];
  return (sum >= 0) ? 1 : -1;
}

// Test function to display classification results
void test(vector<int> &pattern)
{
  int result = classify(pattern);
  cout << "Classified as: " << (result == 1 ? "Group 1" : "Group 2") << endl;
}

// Function to get user input for a custom 5x5 pattern
vector<int> getUserPattern()
{
  cout << "Enter a 5x5 binary matrix (1s and -1s):" << endl;
  vector<int> pattern(MATRIX_SIZE);
  for (int i = 0; i < 5; ++i)
  {
    for (int j = 0; j < 5; ++j)
    {
      cin >> pattern[i * 5 + j];
    }
  }
  return pattern;
}

int main()
{
  // Train the model
  train();

  vector<string> pattern_labels = {"T", "D", "F", "C", "H", "Z"};

  // // Loop to test all patterns
  for (int i = 0; i < training_patterns.size(); ++i) {
      cout << "Testing pattern " << pattern_labels[i] << ": ";
      test(training_patterns[i]);
  }

  // Final weight and bias display
  cout << "Final weights: ";
  for (int i = 0; i < weights.size(); ++i)
  {
    cout << weights[i] << " ";
  }
  cout << endl;

  cout << "Final Bias: ";
  for (int i = 0; i < bias.size(); ++i)
  {
    cout << bias[i] << " ";
  }
  cout << endl;

  // Allow user to input a custom pattern
  vector<int> userPattern = getUserPattern();
  cout << "Testing user input pattern: ";
  test(userPattern);

  return 0;
}
