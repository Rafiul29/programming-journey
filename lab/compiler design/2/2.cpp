#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

// Function to check for punctuation characters
int punctuation_check(char pre_value) {
    if (pre_value == '+' || pre_value == '-' || pre_value == '*' || 
        pre_value == '/' || pre_value == '%' || 
        pre_value == '[' || pre_value == ']' || 
        pre_value == '{' || pre_value == '}' || 
        pre_value == '(' || pre_value == ')' || 
        pre_value == '"' || pre_value == ';' || 
        pre_value == ':' || pre_value == ',' || 
        pre_value == '.' || pre_value == '\'') {
        return 1;
    }
    return 0;
}

// Function to check for keywords
int keyword(string str) {
    const string keywords[] = {
        "int", "char", "float", "double", "string", "typedef", 
        "long", "while", "do", "for", "if", "else", "switch", 
        "case", "break", "continue", "const", "goto", "static", 
        "union", "return", "default", "short", "signed", 
        "unsigned", "void"
    };
    
    for (const string& kw : keywords) {
        if (str == kw) return 1;
    }
    return 0;
}

// Function to check for signs
int sign_check(char pre_value) {
    return (pre_value == '+' || pre_value == '-' || pre_value == '*' || 
            pre_value == '/' || pre_value == '=');
}

int main() {
    char t;
    int s, len;
    string str, stt;
    FILE *f2;

    // Redirect input to read from a file
    freopen("input.txt", "r", stdin);
    cout << "Token token value as attributes\n";
    cout << "==================================\n";
    
    while (getline(cin, str)) {
        char pre_value = ' ';
        stt = "";
        len = str.size();
        
        for (int i = 0; i < len; i++) {
            if (punctuation_check(str[i])) {
                cout << "Punctuation " << str[i] << "\n";
                pre_value = str[i];
            } else if (str[i] == '<' || str[i] == '>' || str[i] == '=') {
                if (i + 1 < len && str[i + 1] == '=') {
                    cout << "CO " << str[i] << str[i + 1] << endl;
                    i++; // Skip next character
                } else {
                    cout << "RO " << str[i] << endl;
                }
                pre_value = str[i];
            } else if (str[i] == ' ') {
                pre_value = str[i];
            } else if (isdigit(str[i]) && sign_check(pre_value)) {
                s = 0; // Initialize number
                // Build the number
                while (isdigit(str[i])) {
                    s = s * 10 + (str[i] - '0');
                    i++;
                }
                i--; // Adjust index for outer loop
                // Check conditions for number output
                if ((pre_value == '[' && str[i + 1] == ']') || 
                    (sign_check(pre_value) && (i == len - 1 || 
                    sign_check(str[i + 1]) || str[i + 1] == ';'))) {
                    cout << "num " << s << "\n";
                }
            } else {
                stt += str[i]; // Build identifier
                // Check for end of identifier
                if (i + 1 < len && (punctuation_check(str[i + 1]) || 
                                    str[i + 1] == ' ' || 
                                    str[i + 1] == '=' || 
                                    str[i + 1] == '<')) {
                    if (keyword(stt)) {
                        cout << "Keyword " << stt << "\n";
                    } else {
                        cout << "ID " << stt << "\n";
                    }
                    stt = ""; // Reset identifier
                }
                pre_value = str[i]; // Update pre_value
            }
        }
    }
    return 0;
}
