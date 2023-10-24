#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <stack>
#include <set>

using namespace std;

int N;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    set<vector<int>> s;
    cin >> N;

    int res = 0;

    for (int i = 1; i < N; i++)
    {
        for (int j = 1; j < N; j++)
        {
            for (int k = 1; k < N; k++)
            {
                if (k >= j + 2 && i % 2 == 0 && N - i - j - k == 0)
                {
                    res++;
                }
            }
        }
    }

    cout << res;

    return 0;
}
