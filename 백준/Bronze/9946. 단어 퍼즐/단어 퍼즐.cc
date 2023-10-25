#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 1;

    while (1)
    {
        string a, b;
        cin >> a >> b;

        if (a == "END" && b == "END")
            break;

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        if (a == b)
            cout << "Case " << n << ": same\n";

        else
            cout << "Case " << n << ": different\n";

        n++;
    }
    return 0;
}