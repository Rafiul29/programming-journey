#include <bits/stdc++.h>
using namespace std;

int i, q = 1, w[3], j; // Global weight array and variables
                       /// Activation function (Step function)
int activation(int a)
{
  if (a > 0)
    return 1;
  else if (a == 0)
    return 0;
  else
    return -1;
}

/// Weight updating function
void update(int target, int x1, int x2)
{
  w[0] += q * target;      // Bias weight update
  w[1] += q * x1 * target; // Weight update for x1
  w[2] += q * x2 * target; // Weight update for x2

  cout << "[ ";
  for (j = 0; j <= 2; j++)
    cout << w[j] << " ";
  cout << "]" << endl;
}

int main()
{
  int x1[4], x2[4], target, yin, yy;

  // Initialize weights to 0
  for (i = 0; i < 3; i++)
    w[i] = 0;

  // Choose logic function: AND or OR
  cout << "Choose logic function (1 for AND, 2 for OR): ";
  int choice;
  cin >> choice;

  // Input values for AND/OR gates
  vector<vector<int>> inputs = {
      {1, 1},
      {-1, 1},
      {1, -1},
      {-1, -1},
  };

  vector<int> targets;

  if (choice == 1)
  { // AND logic gate
    targets = {1, -1, -1, -1};
    cout << "Training Perceptron for AND Logic\n";
  }
  else
  { // OR logic gate
    targets = {1, 1, 1, -1};
    cout << "Training Perceptron for OR Logic\n";
  }

  // Training the Perceptron
  for (i = 0; i < 4; i++)
  {
    cout << "\nInputs: x1 = " << inputs[i][0] << ", x2 = " << inputs[i][1];
    target = targets[i];

    // Calculate yin (weighted sum)
    yin = w[0] + inputs[i][0] * w[1] + inputs[i][1] * w[2];

    // Apply activation function
    yy = activation(yin);

    cout << ", Target = " << target << ", Predicted = " << yy;

    // If prediction is incorrect, update weights
    if (yy != target)
    {
      cout << "\nUpdating weights... ";
      update(target, inputs[i][0], inputs[i][1]);
    }
    else
    {
      cout << "\nWeights remain the same: [ ";
      for (j = 0; j <= 2; j++)
        cout << w[j] << " ";
      cout << "]" << endl;
    }
  }

  // Display final weights
  cout << "\nFinal Weights: [ ";
  for (j = 0; j <= 2; j++)
    cout << w[j] << " ";
  cout << "]" << endl;

  return 0;
}
