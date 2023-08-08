#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;

    while (cin >> n)
    {
        long long dec = 1;
        int cnt = 1;
        while (dec % n != 0)
        {
            dec = (dec * 10) % n + 1;
            cnt++;
        }
        cout << cnt << "\n";
    }

    return 0;
}
