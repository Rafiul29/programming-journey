#include <iostream>
#include <cstdio>
#include <string>
#include <cctype> // Include cctype for isdigit

using namespace std;

// Function to check for punctuation characters
bool punctuation_check(char pre_value)
{
    return (pre_value == '+' || pre_value == '-' || pre_value == '*' ||
            pre_value == '/' || pre_value == '%' ||
            pre_value == '[' || pre_value == ']' ||
            pre_value == '{' || pre_value == '}' ||
            pre_value == '(' || pre_value == ')' ||
            pre_value == '"' || pre_value == ';' ||
            pre_value == ':' || pre_value == ',' ||
            pre_value == '.' || pre_value == '\'');
}

// Function to check for keywords
bool is_keyword(const string &str)
{
    const string keywords[] = {
        "int", "char", "float", "double", "string", "typedef",
        "long", "while", "do", "for", "if", "else", "switch",
        "case", "break", "continue", "const", "goto", "static",
        "union", "return", "default", "short", "signed",
        "unsigned", "void"};

    for (const string &kw : keywords)
    {
        if (str == kw)
            return true;
    }
    return false;
}

// Function to check for signs
bool sign_check(char pre_value)
{
    return (pre_value == '+' || pre_value == '-' || pre_value == '*' || pre_value == '/' || pre_value == '=');
}

int main()
{
    string str;
    
    // Redirect input to read from a file
    freopen("input.txt", "r", stdin);
    cout << "Token token value as attributes\n";
    cout << "==================================\n";

    while (getline(cin, str))
    {
     
        char pre_value = ' ';
        string stt;
        int len = str.size();
        //int n;
        // cout<<"String "<<str<<endl;
        for (int i = 0; i < len; i++)
        {
            // cout<<"stirng "<<str[i]<<endl;
            if (punctuation_check(str[i]))
            {
                cout << "Punctuation " << str[i] << "\n";
                pre_value = str[i];
            }
            else if (str[i] == '<' || str[i] == '>' || str[i] == '=')
            {
                if (i + 1 < len && str[i + 1] == '=')
                {
                    cout << "CO " << str[i] << str[i + 1] << endl;
                    i++; // Skip next character
                }
                else
                {
                    cout << "RO " << str[i] << endl;
                }
                pre_value = str[i];
            }
            else if (isspace(str[i]))
            {
                pre_value = str[i];
            }
            else if (isdigit(str[i]) && sign_check(pre_value))
            {
                int s = 0; // Initialize number
                // Build the number
                while (i < len && isdigit(str[i]))
                {
                    s = s * 10 + (str[i] - '0');
                    i++;
                }
                i--; // Adjust index for outer loop
                // Check conditions for number output
                if ((pre_value == '[' && i + 1 < len && str[i + 1] == ']') ||
                    (sign_check(pre_value) && (i == len - 1 ||
                                               sign_check(str[i + 1]) || str[i + 1] == ';')))
                {
                    cout << "num " << s << "\n";
                }
            }
            else
            {
                stt += str[i]; // Build identifier
                // Check for end of identifier
                if (i + 1 < len && (punctuation_check(str[i + 1]) ||
                                    isspace(str[i + 1]) ||
                                    str[i + 1] == '=' ||
                                    str[i + 1] == '<'))
                {
                    // cout<<i+1<<len;
                    if (is_keyword(stt))
                    {
                        cout << "Keyword " << stt << "\n";
                    }
                    else
                    {
                        cout << "ID " << stt << "\n";
                    }
                    stt.clear(); // Reset identifier
                }
                pre_value = str[i]; // Update pre_value
                // cout<<"Prev Value "<<str[i]<<endl;
                // cout<<"String Value "<<stt<<endl;
                
            }
        }
    }
    return 0;
}
