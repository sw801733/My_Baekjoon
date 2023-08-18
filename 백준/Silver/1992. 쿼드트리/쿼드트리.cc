#include <bits/stdc++.h>
using namespace std;

int arr[101][101];
int N;

int visited[101][101];

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

string quard(int y, int x, int size)
{
    int b = arr[y][x];
    // cout << to_string(b);
    if (size == 1)
        return to_string(b);

    string ret = "";
    for (int i = y; i < y + size; i++)
    {
        for (int j = x; j < x + size; j++)
        {
            if (b != arr[i][j])
            {
                ret += '(';
                ret += quard(y, x, size / 2);
                ret += quard(y, x + size / 2, size / 2);
                ret += quard(y + size / 2, x, size / 2);
                ret += quard(y + size / 2, x + size / 2, size / 2);
                ret += ')';
                return ret;
            }
        }
    }
    return to_string(b);
}

int main()
{
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%1d", &arr[i][j]);
        }
    }

    string answer = quard(0, 0, N);

    printf("%s", answer.c_str());

    return 0;
}
