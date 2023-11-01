#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    char game;

    cin >> N >> game;

    set<string> s;

    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;

        s.insert(str);
    }

    if (game == 'Y')
        cout << s.size();
    else if (game == 'F')
        cout << s.size() / 2;
    else if (game == 'O')
        cout << s.size() / 3;

    return 0;
}