#include <bits/stdc++.h>

using namespace std;

int N;
int arr[130][130];

int one_cnt = 0;
int zero_cnt = 0;

void divide(int n, int m, int size)
{
    int zone = arr[n][m];
    bool same = true;

    for (int i = n; i < n + size; i++)
    {
        for (int j = m; j < m + size; j++)
        {
            if (arr[i][j] != zone)
            {
                same = false;
                break;
            }
        }
        if (same == false)
            break;
    }

    if (same == false)
    {
        divide(n, m, size / 2);
        divide(n, m + size / 2, size / 2);
        divide(n + size / 2, m, size / 2);
        divide(n + size / 2, m + size / 2, size / 2);
    }
    else
    {
        if (zone == 1)
            one_cnt++;
        else
            zero_cnt++;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cin >> arr[i][j];
    }

    divide(0, 0, N);

    cout << zero_cnt << "\n"
         << one_cnt;

    return 0;
}