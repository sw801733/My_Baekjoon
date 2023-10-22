#include <bits/stdc++.h>

using namespace std;

int N, M;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d:%d", &N, &M);

    int min_num = min(N, M);
    int a = 2;

    while (a <= min_num)
    {
        if (N % a == 0 && M % a == 0)
        {
            N = N / a;
            M = M / a;
        }
        else
            a++;
    }

    printf("%d:%d", N, M);

    return 0;
}