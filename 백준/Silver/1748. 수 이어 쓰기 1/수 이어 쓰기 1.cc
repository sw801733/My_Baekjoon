#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    int arr[8] = {
        0,
    };
    cin >> N;

    int MAX = 100000000;
    int cnt = 9;
    int result = 0;

    while (N > 10)
    {
        if (N - MAX < 0)
        {
            MAX /= 10;
            cnt--;
        }
        else
        {
            result += cnt * (N - MAX + 1) - (cnt - 1);
            N -= N - MAX;
            MAX /= 10;
            cnt--;
        }
    }

    result += N;

    cout << result;

    return 0;
}