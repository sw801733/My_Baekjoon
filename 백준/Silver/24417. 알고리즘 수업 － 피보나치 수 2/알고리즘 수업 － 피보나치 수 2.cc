#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long N;
    int arr[2 * 1000];

    cin >> N;

    arr[3] = 2;
    arr[4] = 3;
    int idx = 5;
    int over_cnt = 0;
    for (int i = 5; i <= N; i++)
    {

        if (idx > 2 * 1000)
        {
            over_cnt++;
            arr[1] = (arr[idx - 1] + arr[idx - 2]) % 1000000007;
            arr[2] = (arr[1] + arr[idx - 1]) % 1000000007;
            i += 2;
            idx = 3;
        }

        arr[idx] = (arr[idx - 1] + arr[idx - 2]) % 1000000007;
        idx++;
    }

    cout << arr[N - over_cnt * 2 * 1000] << " " << N - 2;

    return 0;
}
