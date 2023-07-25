#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <stack>
#include <queue>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int arr[11] = {
        0,
    };

    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 2;

    for (int i = 3; i <= 10; i++)
    {
        arr[i] = arr[i - 1] * i;
    }

    int answer = arr[n] / (arr[n - k] * arr[k]);

    cout << answer;

    return 0;
}
