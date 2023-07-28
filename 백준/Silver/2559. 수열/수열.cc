#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    int arr[100001] = {
        0,
    };

    int sum[100001] = {
        0,
    };
    int max = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < K; i++)
    {
        sum[K - 1] += arr[i];
    }
    max = sum[K - 1];
    for (int i = K; i < N; i++)
    {
        sum[i] = sum[i - 1] - arr[i - K] + arr[i];
        if (max < sum[i])
            max = sum[i];
    }

    cout << max;

    return 0;
}
