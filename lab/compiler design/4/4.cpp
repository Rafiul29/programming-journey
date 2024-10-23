#include <bits/stdc++.h>
using namespace std;

// Function to check if a string is a keyword
int check(const string& s) {
    if (s == "auto" || s == "int" || s == "char" || s == "long" || 
        s == "float" || s == "double" || s == "struct" || s == "if" || 
        s == "else" || s == "break" || s == "continue" || 
        s == "while" || s == "do" || s == "for" || 
        s == "return" || s == "signed" || s == "unsigned" || 
        s == "default" || s == "goto" || s == "case" || 
        s == "sizeof" || s == "short" || s == "switch" || 
        s == "void" || s == "static" || s == "typedef") {
        return 1;  // Return 1 if it is a keyword
    } else {
        return 0;  // Return 0 if it is not a keyword
    }
}

int main() {
    // Redirect input from the specified file
    freopen("input.txt", "r", stdin);
    string st;

    cout << "Keywords are given below:\n\n";
    
    // Read words from the input file
    while (cin >> st) {
        if (check(st)) {

            cout << st << " is a keyword\n";
        }
    }

    return 0;
}
