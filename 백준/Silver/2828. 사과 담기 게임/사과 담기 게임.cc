#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    int J;
    int idx = 1;
    int cnt = 0;
    cin >> N >> M;
    cin >> J;

    for (int i = 0; i < J; i++)
    {
        int n;
        cin >> n;

        if (n > idx)
        {
            while (n > idx + M - 1)
            {
                idx++;
                cnt++;
            }
        }
        else
        {
            while (n < idx)
            {
                idx--;
                cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}
