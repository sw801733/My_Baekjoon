#include <iostream>

using namespace std;

int visited[9][9] = {0,};
int arr[9][9] = {0,};

void N_and_M(int n, int N, int M)
{
    if (n == M + 1)
    {
        return;
    }
    for(int i = 1; i <= N; i++)
    {
        if(visited[n][i] == 1 || visited[i][n] == 1)
            continue;
        visited[n][i] = 1;
        visited[i][n] = 1;
        arr[n][i] = i;
        arr[i][n] = i;
        N_and_M(n + 1, N, M);
    }
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    N_and_M(1, N, M);

    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
            if (arr[i][j])
                cout << i << " " << j << "\n";
    }

    return 0;
}