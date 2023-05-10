#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    int arr[15][15] = {
        0,
    };
    cin >> T;

    for (int i = 1; i <= 14; i++)
        arr[0][i] = i;

    for (int i = 1; i <= 14; i++)
    {
        for (int j = 1; j <= 14; j++)
            for (int k = 1; k <= j; k++)
                arr[i][j] += arr[i - 1][k];
    }

    for (int i = 0; i < T; i++)
    {
        int k, n;
        cin >> k >> n;
        cout << arr[k][n] << "\n";
    }

    return 0;
}