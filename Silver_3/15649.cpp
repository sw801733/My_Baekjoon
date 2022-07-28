#include <iostream>

using namespace std;

int visited[9] = {0,};
int arr[9] = {0,};

void N_and_M(int n, int N, int M)
{
    if (n == M + 1)
    {
        for(int i = 1; i <= M; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
    for(int i = 1; i <= N; i++)
    {
        if(visited[i] == 1)
            continue;
        visited[i] = 1;
        arr[n] = i;
        N_and_M(n + 1, N, M);
        visited[i] = 0;
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

    return 0;
}