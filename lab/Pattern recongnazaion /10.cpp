#include <bits/stdc++.h>
using namespace std;
int i, q = 1, w[1000], x[100], y, j;
/// Activation function
int activation(int a)
{
  if (a > 0)
    return 1;
  else if (a == 0)
    return 0;
  else
    return -1;
}
/// Weigth updating
void update(int t, int x1, int x2)
{
  w[0] += q * t;
  w[1] = w[1] + q * x1 * t;
  w[2] = w[2] + q * x2 * t;
  for (j = 0; j <= 2; j++)
    cout << w[j] << " ";
}
int main()
{
  int x0[100], x1[100], x2[100], t, k, yin, yy, target;
  /// Weight initialization
  for (i = 0; i < 3; i++)
    w[i] = 0;
  // Taking input
  for (i = 0; i < 4; i++)
  {
    cout << "Enter the inputs and target value" << endl;
    k = 0;
    // cout<<"Bias value"<<": ";
    // cin>>x0[i];
    cout << "x" << k + 1 << ": ";
    cin >> x1[i];
    cout << "x" << k + 2 << ": ";
    cin >> x2[i];
    cout << "target: ";
    cin >> target;
    /// Calculation of yin
    yin = w[0] + x1[i] * w[1] + x2[i] * w[2];
    /// Calculate with activation function
    yy = activation(yin);
    /// For unequal between the output and target update weights
    if (yy != target)
    {
      cout << endl
           << "The updated weight W= [ ";
      update(target, x1[i], x2[i]);
      cout << "]" << endl;
    }
    else
    {
      cout << endl
           << "The updated weight W= [ ";
      for (j = 0; j <= 2; j++)
        cout << w[j] << " ";
      cout << "]" << endl;
    }
    cout << endl;
  }
  return 0;
}