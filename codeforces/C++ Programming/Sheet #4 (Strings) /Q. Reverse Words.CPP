// Q. Reverse Words

#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    if (str.size() < 0)
        return 0;
    stringstream s(str);
    stringstream s1(str);
    string word;
    string word1;
    
    int cnt = 0;
    while (s1 >> word1)
    {
        cnt++;
    }

    int c = 0;
    while (s >> word)
    {
        c++;
        int i = 0;
        int j = word.size() - 1;
        // reverse word
        while (i <= j)
        {
            swap(word[i], word[j]);
            i++;
            j--;
        }

        if (c == cnt)
        {
            cout << word;
        }
        else
        {
            cout << word << " ";
        }
    }
}