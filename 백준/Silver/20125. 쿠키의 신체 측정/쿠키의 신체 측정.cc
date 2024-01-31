#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

int N;
char arr[1001][1001];
int cnt[5] = {
    0,
};

int solve(int i, int j, int dir)
{
    if (dir == 1)
    {
        while (j >= 1 && arr[i][j] == '*')
        {
            cnt[0]++;
            j -= 1;
        }
    }
    if (dir == 2)
    {
        while (j <= N && arr[i][j] == '*')
        {
            cnt[1]++;
            j += 1;
        }
    }
    if (dir == 3)
    {
        while (i <= N && arr[i][j] == '*')
        {
            cnt[2]++;
            i += 1;
        }

        int temp = i;
        while (temp <= N && arr[temp][j - 1] == '*')
        {
            cnt[3]++;
            temp += 1;
        }

        temp = i;
        while (temp <= N && arr[temp][j + 1] == '*')
        {
            cnt[4]++;
            temp += 1;
        }
    }
    return 0;
}

int main()
{
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
            cin >> arr[i][j];
    }

    for (int i = 2; i <= N - 1; i++)
    {
        for (int j = 2; j <= N - 1; j++)
        {

            if (arr[i][j] == '*' && arr[i - 1][j] == '*' && arr[i + 1][j] && arr[i][j - 1] && arr[i][j + 1])
            {
                cout << i << " " << j << "\n";
                solve(i, j - 1, 1);
                solve(i, j + 1, 2);
                solve(i + 1, j, 3);
                for (int k = 0; k < 5; k++)
                {
                    cout << cnt[k] << " ";
                }
                return 0;
            }
        }
    }

    return 0;
}