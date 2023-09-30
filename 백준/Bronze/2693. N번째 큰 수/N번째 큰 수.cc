#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        vector<int> v;
        for (int i = 0; i < 10; i++)
        {
            int n;
            cin >> n;

            v.push_back(n);
        }
        sort(v.begin(), v.end());
        cout << v[10 - 3] << "\n";
    }

    return 0;
}