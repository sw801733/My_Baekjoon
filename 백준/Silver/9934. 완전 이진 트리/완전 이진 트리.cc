#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>

using namespace std;

int K;

int arr[1024];

vector<int> res[11];

void go(int s, int e, int level)
{
    if (s > e)
        return;
    if (s == e)
    {
        res[level].push_back(arr[s]);
        return;
    }

    int mid = (s + e) / 2;
    res[level].push_back(arr[mid]);
    go(s, mid - 1, level + 1);
    go(mid + 1, e, level + 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> K;

    int _end = pow(2, K) - 1;

    for (int i = 0; i < _end; i++)
        cin >> arr[i];

    go(0, _end, 0);

    for (int i = 0; i < K; i++)
    {
        for (int n : res[i])
            cout << n << " ";
        cout << "\n";
    }
    return 0;
}
