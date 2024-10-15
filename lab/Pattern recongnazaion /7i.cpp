#include <iostream>
using namespace std;

int main()
{
    int x[100], w[100], i, y1, y2, sum = 0, n = 9;

    // Initialize all the weights to 0
    for (i = 0; i <= n; i++)
        w[i] = 0;

    // Input for the first pattern (T or C) with bias
    cout << "Enter the first pattern values (3x3 matrix) with bias" << endl;
    for (i = 0; i <= n; i++)
    {
        if (i < n)
            cout << "x" << i + 1 << ": ";
        else
            cout << "Bias: ";
        cin >> x[i];
    }

    cout << "\nEnter the first target value (T = 1, C = -1): ";
    cin >> y1;

    // Updating weights for the first pattern
    for (i = 0; i <= n; i++)
    {
        w[i] = w[i] + x[i] * y1;
        cout<<w[i]<<" ";
    }

    // Input for the second pattern (T or C) with bias
    cout << "\nEnter the second pattern values (3x3 matrix) with bias" << endl;
    for (i = 0; i <= n; i++)
    {
        if (i < n)
            cout << "x" << i + 1 << ": ";
        else
            cout << "Bias: ";
        cin >> x[i];
    }

    cout << "\nEnter the second target value (T = 1, C = -1): ";
    cin >> y2;

    // Updating weights for the second pattern
    for (i = 0; i <= n; i++)
    {
        w[i] = w[i] + x[i] * y2;
        cout<<w[i]<<" ";
    }

    // Printing the final weights
    cout << "\nFinal Weights:\n";
    for (i = 0; i <= n; i++)
    {
        if (i < n)
            cout << "w" << i + 1 << ": " << w[i] << " ";
        else
            cout << "Bias weight: " << w[i] << " ";
    }
    cout << endl;

    // Taking inputs for testing pattern
    cout << "\nEnter the testing pattern values (3x3 matrix) with bias" << endl;
    for (i = 0; i <= n; i++)
    {
        if (i < n)
            cout << "x" << i + 1 << ": ";
        else
            cout << "Bias: ";
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
        cout << "\nThe testing pattern is recognized as 'T'" << endl;
    }
    else
    {
        cout << "\nThe testing pattern is recognized as 'C'" << endl;
    }

    return 0;
}
