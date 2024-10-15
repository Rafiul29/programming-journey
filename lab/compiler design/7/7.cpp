#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cout << "The grammar is:\nS -> aS\nS -> Sb\nS -> ab\n";
    cout << "Enter the string to check: ";
    cin >> str;

    int len = str.size();
    int flag = 0, a = -1, b = len; // Initialize a and b appropriately

    // Find the position of the first character that is not 'a'
    for (int i = 0; i < len; i++) {
        if (str[i] != 'a') {
            a = i - 1; // The last 'a' position
            break;
        }
    }

    // Find the position of the first character that is not 'b' from the end
    for (int i = len - 1; i >= 0; i--) {
        if (str[i] != 'b') {
            b = i + 1; // The first character that is not 'b'
            break;
        }
    }

    // Check the conditions based on grammar rules
    if (a >= 0 && b < len && a + 1 == b) {
        flag = 1; // Valid string according to the grammar
    }

    // Output the result
    if (flag == 1) {
        cout << endl << str << " is accepted." << endl;
    } else {
        cout << endl << str << " is not accepted." << endl;
    }

    return 0;
}
