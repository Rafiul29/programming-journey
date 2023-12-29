Problem Statement

There is an
feet long bamboo that is smeared with oil. A monkey climbs up feet in the first minute and drops down

feet in the second minute. Now, find out how many minutes it will take to reach the ending point of the bamboo. If it is not possible to reach, print Impossible.

image

Input Format

    First line will contain 

, the number of test cases.
Each line of test case will contain
, and

    .

Constraints

Output Format

    Output the ceil value of how many minutes it will take or print Impossible.

Sample Input 0

6
92 12 8
92 12 15
10 12 15
15 12 15
15 12 10
16 12 10

Sample Output 0

41
Impossible
1
Impossible
5
5
// Question - Rahat Khan Pathan
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll h, a, b;
        cin >> h >> a >> b;
        if (h <= a)
        {
            cout << 1 << endl;
        }
        else if (a > b)
        {
            ll ans = ceil((h - a) * 1.0 / (a - b) * 1.0);
            cout << ans * 2 + 1 << endl;
        }
        else
        {
            cout << "Impossible" << endl;
        }
    }
    return 0;
}
