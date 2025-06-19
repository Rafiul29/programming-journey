#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

// Function to check if the string is a valid type
int check(string str)
{
    if (str == "int" || str == "char" || str == "float" ||
        str == "double" || str == "long" || str == "signed" ||
        str == "unsigned")
    {
        return 1;
    }
    return 0;
}

int main()
{
    // Open the input file
    freopen("input.txt", "r", stdin);
    string str;

    // Read strings from the input file
    while (cin >> str)
    {
        if (check(str))
        {
            cout << str << " variable = ";

            int k = 0; // Flag to check if '=' has been encountered
            while (true)
            {
                char ch = getchar(); // Read character by character

                if (ch == ';') // Stop reading at ';'
                    break;

                if (k == 0 && ch != ' ' && ch != '\n' && ch != '=')
                {
                    // Print the variable name
                    cout << ch;
                }

                if (ch == '=')
                {
                    k = 1; // Set flag to indicate we found '='
                }

                if (ch == ',')
                {
                    k = 0; // Reset flag for next variable
                }
            }
            cout << "." << endl; // Print end of variable declaration
        }
    }

    return 0;
}
