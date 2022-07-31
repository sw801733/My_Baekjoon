#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    long long arr[1001];

    arr[1] = 1;
    arr[2] = 3;
    arr[3] = 5;

    for(int i = 4; i <= n; i++)
    {
        arr[i] = (arr[i - 1] + 2 * arr[i -2]) % 10007;
    }

    cout << arr[n];

    return 0;
}