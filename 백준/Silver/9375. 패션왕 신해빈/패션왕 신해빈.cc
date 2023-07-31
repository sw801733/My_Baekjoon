#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        int answer = 1;
        map<string, int> my_m;

        cin >> n;

        for (int i = 0; i < n; i++)
        {
            string a, b;
            cin >> a >> b;

            my_m[b]++;
        }

        if (my_m.empty())
        {
            cout << 0 << "\n";
            continue;
        }

        for (auto iter = my_m.begin(); iter != my_m.end(); iter++)
        {
            answer *= iter->second + 1;
        }
        cout << answer - 1 << "\n";
    }
    return 0;
}
