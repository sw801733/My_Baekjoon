#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    map<string, int> m;

    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;

        if (str.length() >= M)
        {
            m[str]++;
        }
    }

    vector<pair<string, int>> v(m.begin(), m.end());

    sort(v.begin(), v.end(),
         [](pair<string, int> &a, pair<string, int> &b)
         {
             if (a.second == b.second)
             {
                 if (a.first.length() == b.first.length())
                     return a.first < b.first;
                 else
                     return a.first.length() > b.first.length();
             }
             else
                 return a.second > b.second;
         });

    for (auto temp : v)
    {
        cout << temp.first << "\n";
    }

    return 0;
}