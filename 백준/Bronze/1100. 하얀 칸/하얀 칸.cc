#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt = 0;

    for (int i = 0; i < 8; i++)
    {

        for (int j = 0; j < 8; j++)
        {
            char a;
            cin >> a;
            if (a == 'F')
            {
                if (i % 2 == 0 && j % 2 == 0)
                    cnt++;

                else if (i % 2 == 1 && j % 2 == 1)
                    cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}