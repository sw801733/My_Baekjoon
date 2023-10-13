#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    map<string, string> m;

    for (int i = 0; i < N; i++)
    {
        string str, pwd;
        cin >> str >> pwd;

        m[str] = pwd;
    }

    for (int i = 0; i < M; i++)
    {
        string site;
        cin >> site;
        cout << m[site] << "\n";
    }

    return 0;
}