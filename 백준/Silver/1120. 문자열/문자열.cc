#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string a, b;
    int cnt = 51;
    cin >> a >> b;

    for (int i = 0; i < b.length() - a.length() + 1; i++)
    {
        int temp = 0;
        for (int j = 0; j < a.length(); j++)
        {
            if (a[j] != b[i + j])
            {
                temp++;
            }
        }
        cnt = min(temp, cnt);
    }

    cout << cnt;
    return 0;
}