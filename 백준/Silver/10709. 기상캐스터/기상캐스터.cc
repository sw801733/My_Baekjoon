#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    int arr[101][101];
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            char a;
            cin >> a;

            if (a == 'c')
                arr[i][j] = 0;
            else
                arr[i][j] = -1;
        }
    }

    for (int i = 0; i < N; i++)
    {

        int c_flag = 0;
        int next_min = 1;
        for (int j = 0; j < M; j++)
        {
            if (arr[i][j] == 0)
            {
                c_flag = 1;
                next_min = 1;
                continue;
            }

            if (c_flag == 1)
            {
                arr[i][j] = next_min;
                next_min++;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
