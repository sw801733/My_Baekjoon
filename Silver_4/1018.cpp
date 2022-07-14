    #include <iostream>
    #include <algorithm>

    using namespace std;

    int arr[50][50];
    int a[8] = {'B','W','B','W','B','W','B','W'};
    int b[8] = {'W','B','W','B','W','B','W','B'};

    int B_first(int n, int m)
    {
        int cnt = 0;

        for(int i = 0; i < 8; i++)
        {
            for(int j = 0; j < 8;j++)
            {
                if (i % 2 == 0)
                {
                    if (arr[n + i][m + j] != a[j])
                        cnt++;
                }
                else
                {
                    if (arr[n + i][m + j] != b[j])
                        cnt++;
                }
            }
        }

        return cnt;
    }

    int W_first(int n, int m)
    {
        int cnt = 0;

        for(int i = 0; i < 8; i++)
        {
            for(int j = 0; j < 8;j++)
            {
                if (i % 2 == 0)
                {
                    if (arr[n + i][m + j] != b[j])
                        cnt++;
                }
                else
                {
                    if (arr[n + i][m + j] != a[j])
                        cnt++;
                }
            }
        }

        return cnt;
    }

    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        int N, M;
        int cnt = 33;
        cin >> N >> M;

        for(int i = 0; i < N; i++)
        {   
            for(int j = 0; j < M; j++)
            {
                char k;
                cin >> k;
                arr[i][j] = k;
            }
        }


        for(int i = 0; i + 7 < N; i++)
        {
            for(int j = 0; j + 7 < M ; j++)
            {
                int temp = min(B_first(i,j),W_first(i,j));
                if (cnt > temp)
                {
                    cnt = temp;
                }
            }
        }
        cout << cnt;
        return 0;
    }