#include <iostream>

using namespace std;

char arr[50][50];

int checkCandy(int N ,int a, int b)
{
    int cnt1 = 1;
    int cnt2 = 1;
    int max = 1;
    for(int i = 0; i < N - 1; i++)
    {
        if (arr[a][i] == arr[a][i + 1])
        {
            cnt1++;
        }
        else
            cnt1 = 1;
        if(arr[i][b] == arr[i + 1][b])
        {
            cnt2++;
        }
        else
            cnt2 = 1;
        
        if (max < cnt1)
            max = cnt1;
        if (max < cnt2)
            max = cnt2;
    }
    return max;
}


int findMaxCandy(int N, int n, int m)
{
    int maxCandy = 1;
    int temp;

    // 왼쪽
    if (n >= 1)
    {
        temp = arr[n - 1][m];
        arr[n - 1][m] = arr[n][m];
        arr[n][m] = temp;

        int cnt = checkCandy(N, n, m);
        if (maxCandy < cnt)
            maxCandy = cnt;

        temp = arr[n - 1][m];
        arr[n - 1][m] = arr[n][m];
        arr[n][m] = temp;

    }

    // 오른쪽
    if (n < N - 1)
    {
        temp = arr[n + 1][m];
        arr[n + 1][m] = arr[n][m];
        arr[n][m] = temp;

        int cnt = checkCandy(N, n, m);
        if (maxCandy < cnt)
            maxCandy = cnt;

        temp = arr[n + 1][m];
        arr[n + 1][m] = arr[n][m];
        arr[n][m] = temp;

    }

    // 위
    if (m >= 1)
    {
        temp = arr[n][m - 1];
        arr[n][m - 1] = arr[n][m];
        arr[n][m] = temp;

        int cnt = checkCandy(N, n, m);
        if (maxCandy < cnt)
            maxCandy = cnt;

        temp = arr[n][m - 1];
        arr[n][m - 1] = arr[n][m];
        arr[n][m] = temp;
    }
    // 아래
    if (m < N -1)
    {
        temp = arr[n][m + 1];
        arr[n][m + 1] = arr[n][m];
        arr[n][m] = temp;

        int cnt = checkCandy(N, n, m);
        if (maxCandy < cnt)
            maxCandy = cnt;

        temp = arr[n][m + 1];
        arr[n][m + 1] = arr[n][m];
        arr[n][m] = temp;
    }


    return maxCandy;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    int maxCandy = 1;
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {            
            cin >> arr[i][j];
        }

    }

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            int temp = findMaxCandy(N, i, j);
            if (maxCandy < temp)
                maxCandy = temp;
        }
    }
    cout << maxCandy;
    

    return 0;
}