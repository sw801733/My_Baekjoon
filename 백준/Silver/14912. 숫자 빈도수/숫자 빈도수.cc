#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, d;
    int res = 0;

    cin >> N >> d;

    for (int i = 1; i <= N; i++)
    {
        string temp = to_string(i);

        for (int j = 0; j < temp.length(); j++)
        {
            if (temp[j] == d + '0')
                res++;
        }
    }

    cout << res;

    return 0;
}