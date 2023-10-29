#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    map<int, int, greater<int>> m;
    cin >> n;

    while (n--)
    {
        int a;
        cin >> a;

        if (a != 0)
        {
            while (a--)
            {
                int gift;
                cin >> gift;

                m[gift]++;
            }
        }
        else
        {
            if (m.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                auto it = m.begin();
                cout << it->first << "\n";

                m[it->first]--;
                if (m[it->first] == 0)
                    m.erase(it->first);
            }
        }
    }

    return 0;
}