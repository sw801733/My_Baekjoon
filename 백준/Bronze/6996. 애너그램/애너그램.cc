#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map<int, int> m;

    int T;

    cin >> T;

    while (T--)
    {
        string a, b;

        cin >> a >> b;

        string temp_a = a;
        string temp_b = b;

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        if (a == b)
            cout << temp_a << " & " << temp_b << " are anagrams.\n";
        else
            cout << temp_a << " & " << temp_b << " are NOT anagrams.\n";
    }

    return 0;
}