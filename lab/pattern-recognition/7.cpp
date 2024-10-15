#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x2[100], x[100], w[100], i, j, y1, y2, n = 9, sum = 0;

    // Initialize all the weights to 0
    for (i = 0; i <= n; i++)
        w[i] = 0;

    // Input for the first pattern
    cout << "Enter the first pattern values with bias" << endl
         << endl;
    for (i = 0; i <= n; i++)
    {
        j = i;
        cout << "x" << j + 1 << ": ";
        cin >> x[i];
    }

    cout << "\nEnter the first target value: ";
    cin >> y1;

    // Updating weights for the first pattern
    for (i = 0; i <= n; i++)
    {
        w[i] = w[i] + x[i] * y1;
    }

    // Input for the second pattern
    cout << "\nEnter the second pattern values with bias" << endl
         << endl;
    for (i = 0; i <= n; i++)
    {
        j = i;
        cout << "x" << j + 1 << ": ";
        cin >> x[i];
    }

    cout << "\nEnter the second target value: ";
    cin >> y2;

    // Updating weights for the second pattern
    for (i = 0; i <= n; i++)
    {
        w[i] = w[i] + x[i] * y2;
    }

    // Printing the final weights
    cout << "\nFinal Weights:\n";
    for (i = 0; i <= n; i++)
    {
        cout << "w" << i + 1 << ": " << w[i] << " ";
    }
    cout << endl;

    // Taking inputs for testing
    cout << endl
         << "Enter the testing pattern values" << endl
         << endl;
    for (i = 0; i <= n; i++)
    {
        j = i;
        cout << "x" << j + 1 << ": ";
        cin >> x[i];
    }

    // Testing input calculation
    sum = 0; // Reset sum
    for (i = 0; i <= n; i++)
    {
        sum += x[i] * w[i];
    }

    // Final printing for recognizing the pattern
    if (sum > 0)
    {
        cout << endl
             << "The testing pattern is 'T'" << endl;
    }
    else
    {
        cout << endl
             << "The testing pattern is 'C'" << endl;
    }

    return 0;
}
