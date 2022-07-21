#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int dp[1001];

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 1;

    for(int i = 4; i <= N; i++)
    {
        dp[i] = min((dp[i - 1] + 1), (dp[i -3] + 1)); 
    }    
    if (dp[N] % 2 == 1)
        cout << "SK";
    else
        cout << "CY";

    return 0;
}