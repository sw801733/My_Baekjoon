#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    map<string, int> m;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;

        int idx = str.find('.') + 1;

        string temp = str.substr(idx);
        m[temp]++;
    }

    for (auto n : m)
    {
        cout << n.first << " " << n.second << "\n";
    }

    return 0;
}