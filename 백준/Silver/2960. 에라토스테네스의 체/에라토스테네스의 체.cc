#include <bits/stdc++.h>

using namespace std;

int arr[1001];

bool check_prime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K;
    int cnt = 0;
    int res = 0;
    cin >> N >> K;

    for (int i = 2; i <= N; i++)
    {
        if (check_prime(i) == true && arr[i] == 0)
        {
            arr[i] = 1;
            cnt++;

            if (cnt == K)
            {
                res = i;
                break;
            }
            for (int j = i; j <= N; j += i)
            {
                if (arr[j] == 0)
                {
                    arr[j] = 1;
                    cnt++;
                    if (cnt == K)
                    {
                        res = j;
                        break;
                    }
                }
            }
            if (res != 0)
                break;
        }
    }
    cout << res;

    return 0;
}