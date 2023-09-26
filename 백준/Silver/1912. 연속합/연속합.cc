#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    int sum = 0;
    int res = -1001;
    vector<int> v;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        sum += a;
        res = max(res, sum);
        sum = sum < 0 ? 0 : sum;
    }

    cout << res;

    return 0;
}