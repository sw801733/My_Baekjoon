#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map<int, int> m;

    while (1)
    {
        int N;
        cin >> N;

        if (N == -1)
            break;

        if (N == 0)
        {
            int cnt = 0;
            for (auto iter = m.begin(); iter != m.end(); iter++)
            {
                if (m.count(iter->first * 2))
                    cnt++;
            }

            cout << cnt << "\n";
            m.clear();
        }
        else
            m[N]++;
    }

    return 0;
}