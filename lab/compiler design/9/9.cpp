#include <bits/stdc++.h>
using namespace std;
// E   -> T Eds
// Eds -> + T Eds | ε
// T   -> F Tds
// Tds -> * F Tds | ε
// F   -> (E) | a | b | c

int i = 0, error = 0;
string str;

void E();
void Eds();
void T();
void Tds();
void F();

int main() {
    cout << "Enter the input string: ";
    cin >> str;

    E();

    if (i == str.size() && error == 0)
        cout << endl << "String is accepted" << endl;
    else
        cout << endl << "String is rejected" << endl;

    return 0;
}

void E() {
    T();
    Eds();
}

void Eds() {
    if (str[i] == '+') {
        i++;
        T();
        Eds();
    }
}

void T() {
    F();
    Tds();
}

void Tds() {
    if (str[i] == '*') {
        i++;
        F();
        Tds();
    }
}

void F() {
    if (str[i] == 'a' || str[i] == 'b' || str[i] == 'c') {
        i++;
    } else if (str[i] == '(') {  // Fixed the assignment operator to equality
        i++;
        E();
        if (str[i] == ')') {
            i++;
        } else {
            error = 1;
        }
    } else {
        error = 1;
    }
}
// E() → T() → F() → 'a'
// Tds() → '*' → F() → 'b'
// Eds() → '+' → T() → F() → 'c'