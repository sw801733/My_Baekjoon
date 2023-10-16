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

    int N;
    long long arr[40];

    cin >> N;

    arr[3] = 2;
    arr[4] = 3;

    for (int i = 5; i <= 40; i++)
    {

        arr[i] = arr[i - 1] + arr[i - 2];
    }

    cout << arr[N] << " " << N - 2;

    return 0;
}
