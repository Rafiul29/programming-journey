#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    sort(arr.begin(), arr.end());

    while (q--)
    {
        int p;
        cin >> p;
        int l = 0;
        int r = n - 1;
        bool flag = false;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (arr[mid] == p)
            {
                flag = true;
                break;
            }
            else if (arr[mid] < p)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (flag == true)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }

    return 0;
}