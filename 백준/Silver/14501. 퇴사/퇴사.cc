#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>

using namespace std;

int N;
int max_pay = 0;
int day[16];
int pay[16];
int dp[16];

void solution(int d, int sum)
{
    if (d > N)
        return;

    max_pay = max(sum, max_pay);
    for (int i = d; i < N; i++)
        solution(day[i] + i, sum + pay[i]);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> day[i] >> pay[i];

    solution(0, 0);

    cout << max_pay;

    return 0;
}
