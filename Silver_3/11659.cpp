#include <iostream>
#include <vector>


using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[100001];
    int dp[100001];

    int N, M, i, j;
    cin >> N >> M;

    for(int m = 0; m < N; m++)
    {
        int a;
        cin >> a;
        arr[m] = a;
    }

    dp[0] = arr[0];

    for(int e = 1; e < N; e++)
    {
        dp[e] = dp[e - 1] + arr[e];
    }

    for(int k = 0; k < M; k++)
    {
        cin >> i >> j;
        if (i == 1)
            cout << dp[j - 1] << "\n";
        else
            cout << dp[j - 1] - dp[i - 2] << "\n";
    }


    return 0;
}