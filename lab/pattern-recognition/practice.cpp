#include <bits/stdc++.h>
using namespace std;
int i, q = 1, j, w[3];

int activation(int a)
{
  if (a > 0)
  {
    return 1;
  }
  else if (a == 0)
  {
    return 0;
  }
  else
  {
    return -1;
  }
}

void update(int target, int x1, int x2)
{
  w[0] += q * target;      // Bias weight update
  w[1] += q * x1 * target; // Weight update for x1
  w[2] += q * x2 * target; //
  for (i = 0; i < 3; i++)
  {
    cout << w[i] << " ";
  }
  cout << endl;
}

int main()
{
  int x1[4], x2[4], yin, yy, target;

  for (i = 0; i < 3; i++)
    w[i] = 0;

  vector<vector<int>> inputs = {
      {1, 1},
      {-1, 1},
      {1, -1},
      {-1, -1},
  };
  vector<int> targets;

  int choice;
  cout << "Choose logic function (1 for AND, 2 for OR): ";
  cin >> choice;

  if (choice == 1)
  {
    targets = {1, -1, -1, -1};
    cout << "Training Perceptron for AND Logic\n";
  }
  else
  { // OR logic gate
    targets = {1, 1, 1, -1};
    cout << "Training Perceptron for OR Logic\n";
  }

  for (int i = 0; i < 4; i++)
  {
    target = targets[i];
    yin = w[0] + w[1] * inputs[i][0] + inputs[i][1] * w[2];
    yy = activation(yin);

    if (yy != target)
    {
      cout << "Remaining change : ";
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

  cout << "\nFinal Weights: [ ";
  for (j = 0; j <= 2; j++)
    cout << w[j] << " ";
  cout << "]" << endl;
  return 0;
}