#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;

    while (T--)
    {
        int N;
        int result = 0;
        int five = 5;

        cin >> N;

        while (N >= five)
        {
            result += N / five;
            five *= 5;
        }

        cout << result << "\n";
    }

    return 0;
}
