#include <iostream>
#include <string>

using namespace std;

// Function to check if the string belongs to the grammar
bool isAccepted(const string& str) {
    int aCount = 0;  // Count of 'a's
    int bCount = 0;  // Count of 'b's
    int len = str.size();

    // Iterate through the string to count 'a's and 'b's
    for (int i = 0; i < len; i++) {
        if (str[i] == 'a') {
            aCount++;
        } else if (str[i] == 'b') {
            bCount++;
        } else {
            // Invalid character found
            return false;
        }
    }

    // The number of 'b's must be equal to or greater than the number of 'a's
    return (bCount >= aCount && (aCount > 0 && bCount > 0));
}

int main() {
    string str;

    cout << "The grammar is:\n";
    cout << "S -> aS\n";
    cout << "S -> Sb\n";
    cout << "S -> ab\n\n";

    cout << "Enter the string to check: ";
    cin >> str;

    if (isAccepted(str)) {
        cout << "\n" << str << " is accepted." << endl;
    } else {
        cout << "\n" << str << " is not accepted." << endl;
    }

    return 0;
}
