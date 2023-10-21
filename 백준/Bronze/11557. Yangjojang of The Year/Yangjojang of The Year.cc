#include <bits/stdc++.h>

using namespace std;

int N;
int arr[10000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--)
    {
        int N;
        map<int, string, greater<int>> m;
        cin >> N;

        for (int i = 0; i < N; i++)
        {
            string S;
            int L;

            cin >> S;
            cin >> L;

            m[L] = S;
        }

        cout << m.begin()->second << "\n";
    }

    return 0;
}