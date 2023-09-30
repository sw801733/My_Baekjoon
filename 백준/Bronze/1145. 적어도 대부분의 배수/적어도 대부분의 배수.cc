#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> v;

    for (int i = 0; i < 5; i++)
    {
        int n;
        cin >> n;
        v.push_back(n);
    }
    sort(v.begin(), v.end());

    int start = v[0];
    while (1)
    {
        int cnt = 0;
        for (int i = 0; i < 5; i++)
        {
            if (start % v[i] == 0)
                cnt++;
        }
        if (cnt >= 3)
        {
            cout << start;
            break;
        }
        start++;
    }

    return 0;
}