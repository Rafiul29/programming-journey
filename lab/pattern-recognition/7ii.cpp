#include <iostream>
using namespace std;

int main() {
    int x[10], w[10], i, y1, y2, sum = 0, n = 9;

    // Initialize all the weights to 0
    for (i = 0; i <= n; i++)
        w[i] = 0;

    // Input for the first pattern (L pattern) with bias
    cout << "Enter the first pattern values (3x3 matrix) with bias (L pattern):\n";
    for (i = 0; i <= n; i++) {
        if (i < n)
            cout << "x" << i + 1 << ": ";
        else
            cout << "Bias: ";
        cin >> x[i];
    }

    cout << "\nEnter the first target value (L = 1): ";
    cin >> y1;

    // Update weights for the L pattern
    for (i = 0; i <= n; i++) {
        w[i] = w[i] + x[i] * y1;
    }

    // Input for the second pattern (Non-L pattern) with bias
    cout << "\nEnter the second pattern values (3x3 matrix) with bias (Non-L pattern):\n";
    for (i = 0; i <= n; i++) {
        if (i < n)
            cout << "x" << i + 1 << ": ";
        else
            cout << "Bias: ";
        cin >> x[i];
    }

    cout << "\nEnter the second target value (Non-L = -1): ";
    cin >> y2;

    // Update weights for the non-L pattern
    for (i = 0; i <= n; i++) {
        w[i] = w[i] + x[i] * y2;
    }

    // Print the final weights
    cout << "\nFinal Weights:\n";
    for (i = 0; i <= n; i++) {
        if (i < n)
            cout << "w" << i + 1 << ": " << w[i] << " ";
        else
            cout << "Bias weight: " << w[i] << " ";
    }
    cout << endl;

    // Input for testing pattern
    cout << "\nEnter the testing pattern values (3x3 matrix) with bias:\n";
    for (i = 0; i <= n; i++) {
        if (i < n)
            cout << "x" << i + 1 << ": ";
        else
            cout << "Bias: ";
        cin >> x[i];
    }

    // Calculate the weighted sum for testing
    sum = 0; // Reset sum
    for (i = 0; i <= n; i++) {
        sum += x[i] * w[i];
    }

    // Recognize the pattern based on the sum
    if (sum > 0) {
        cout << "\nThe testing pattern is recognized as 'L'\n";
    } else {
        cout << "\nThe testing pattern is recognized as 'Non-L'\n";
    }

    return 0;
}
