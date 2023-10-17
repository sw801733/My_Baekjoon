#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>

using namespace std;

int N;
int arr[1001][4];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int res = 1000 * 1001;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 2; i <= N; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] += min(arr[i - 1][(j + 1) % 3], arr[i - 1][(j + 2) % 3]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        res = min(arr[N][i], res);
    }
    cout << res;

    return 0;
}
