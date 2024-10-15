#include<bits/stdc++.h>

using namespace std;

int main() {
    string str;
    
    while (true) {
        cout << "Enter the string (or type 'exit' to quit): ";
        cin >> str;

        // Exit condition
        if (str == "exit") {
            break;
        }

        int len = str.size();
        int i, j, k;
        bool check = false; // Use boolean for clarity

        // Find the position of the first '|'
        for (i = 0; i < len; i++) {
            if (str[i] == '|') {
                break;
            }
        }

        j = i; // Position of '|'
        if (j == len) { // If '|' is not found
            cout << "Invalid input: '|' not found." << endl;
            continue;
        }

        // Check for left factoring
        for (k = 0; k < j && (k + j + 1) < len; k++) {
            if (str[k] != str[k + j + 1]) {
                check = true;
                break;
            }
        }

        // Left factoring
        if (check && k != 0) {
            cout << "A -> ";
            for (i = 0; i < k; i++)
                cout << str[i];
            cout << "A'" << endl;

            cout << "A' -> ";
            // Check if there's a common prefix
            if (k == j) {
                cout << "#"; // If k equals j, output epsilon
            }
            for (i = k; i < j; i++)
                cout << str[i];
            cout << "|";
            for (i = j + k + 1; i < len; i++)
                cout << str[i];
            cout << endl;
        } else {
            cout << "A -> ";
            for (i = 0; i < j + 1; i++)
                cout << str[i];
            cout << "A'" << endl;

            cout << "A' -> ";
            for (i = j + 1; i < len; i++)
                cout << str[i];
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
