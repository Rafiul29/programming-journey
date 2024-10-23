#include <bits/stdc++.h>
using namespace std;

// Function to return the precedence of operators
int precedence(char op)
{
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    if (op == '^')
        return 3; // Higher precedence for exponentiation
    return 0;     // For non-operators
}

// Function to convert infix expression to postfix notation
void infixToPostfix(const string &str)
{
    stack<char> stack_string;
    string result;
    string exp = '(' + str + ')'; // Add parentheses around the expression
    int len = exp.size();

    for (int i = 0; i < len; i++)
    {
        char current = exp[i];

        // If the character is an operand (a-z), append it to the result
        if (isalpha(current))
        {
            result += current;
        }
        // If the character is '(', push it to the stack
        else if (current == '(')
        {
            stack_string.push(current);
        }
        // If the character is ')', pop from the stack until '(' is found
        else if (current == ')')
        {
            while (!stack_string.empty() && stack_string.top() != '(')
            {
                result += stack_string.top();
                stack_string.pop();
            }
            stack_string.pop(); // Pop the '(' from the stack
        }
        // If the character is an operator
        else
        {
            while (!stack_string.empty() && precedence(stack_string.top()) >= precedence(current))
            {
                result += stack_string.top();
                stack_string.pop();
            }
            stack_string.push(current); // Push the current operator to the stack
        }
    }

    cout << result; // Output the final postfix expression
}

int main()
{

    freopen("input.txt", "r", stdin);
    string str;
    // cout << "Enter the expression: ";
    cout << "\n========= The expression in postfix notation =========\n\n";
    while (cin >> str)
    {
        infixToPostfix(str); // Convert to postfix notation
        cout << endl;
    }
    // while (true)
    // {
    //     string str;
    //     cout<<"Enter Expresstion : ";
    //     cin >> str;
    //     if (str =="exit")
    //     {
    //         break;
    //     }
    //     infixToPostfix(str);
    //     cout<<endl;
    // }
    return 0;
}
