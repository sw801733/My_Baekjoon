#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    int arr[11] = {
        0,
    };

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int a;
        int cnt = -1;
        int idx;
        cin >> a;

        for (int j = 0; j < N; j++)
        {

            if (arr[j] == 0)
                cnt++;

            if (cnt == a)
            {
                idx = j;
                break;
            }
        }

        arr[idx] = i + 1;
    }

    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";

    return 0;
}