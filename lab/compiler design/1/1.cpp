#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int sign_check(char pre_value)
{
  if (pre_value == '+' || pre_value == '-' || pre_value == '*' ||
      pre_value == '/' || pre_value == '%' || pre_value == '=')
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int main()
{
  int s, i;
  char pre_value = ' ';
  string str;
  FILE *f2;

  // Redirect stdin and create output file
  freopen("input.txt", "r", stdin);
  f2 = fopen("output.txt", "w");

  printf("Collect no. given below\n");

  while (getline(cin, str))
  {
    int len = str.size();

    // Write the original line to output file, removing spaces
    for (i = 0; i < len; i++)
    {
      if (str[i] != ' ')
      {
        putc(str[i], f2);
      }
    }
    putc('\n', f2);

    // Process the line to extract numbers
    for (i = 0; i < len; i++)
    {
      if (str[i] >= '0' && str[i] <= '9')
      {
        s = str[i] - '0'; // Convert char to int

        // Read the entire number
        for (i = i + 1; i < len; i++)
        {
          if (str[i] >= '0' && str[i] <= '9')
          {
            s = s * 10 + (str[i] - '0');
          }
          else
          {
            break; // Exit loop if not a digit
          }
        }
        i--; // Adjust index to account for the outer loop

        // Check conditions for printing
        if ((pre_value == '[' && str[i + 1] == ']') ||
            (sign_check(pre_value) || pre_value == '\n') &&
                (sign_check(str[i + 1]) || str[i + 1] == ';' || i == len))
        {
          cout << s << endl;
        }
      }
      else
      {
        pre_value = str[i]; // Update pre_value
      }
    }
  }

  fclose(f2); // Close the output file
  return 0;
}
