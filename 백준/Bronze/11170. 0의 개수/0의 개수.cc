#include <bits/stdc++.h>

using namespace std;

int check_zero(int n)
{
    string num = to_string(n);
    int zero_cnt = 0;
    for (int i = 0; i < num.length(); i++)
    {
        if (num[i] == '0')
            zero_cnt++;
    }
    return zero_cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        int a, b;
        int zero_cnt = 0;
        cin >> a >> b;

        for (int i = a; i <= b; i++)
        {
            zero_cnt += check_zero(i);
        }
        cout << zero_cnt << "\n";
    }

    return 0;
}