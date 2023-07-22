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
    int N;
    cin >> N;

    int arr[1001] = {
        0,
    };

    int answer[1001] = {
        0,
    };

    arr[0] = 10001;
    answer[0] = 10001;
    for (int i = 1; i <= N; i++)
    {
        cin >> arr[i];
        answer[i] = arr[i];
    }

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
            answer[i] = min(answer[i], answer[j] + arr[i - j]);
    }

    cout << answer[N];

    return 0;
}
