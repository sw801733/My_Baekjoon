#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>

using namespace std;

int N;
int max_pay = 0;
int day[1500001];
int pay[1500001];
int dp[1500001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;

    for (int i = 1; i <= N; i++)
        cin >> day[i] >> pay[i];

    for (int i = N; i >= 1; i--)
    {
        if (i + day[i] > N + 1)
            dp[i] = dp[i + 1];
        else
        {
            dp[i] = max(dp[i + 1], dp[i + day[i]] + pay[i]);
        }
    }

    cout << dp[1];

    return 0;
}
