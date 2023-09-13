#include <bits/stdc++.h>
using namespace std;

int N;

int arr[8];

main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        arr[i - 1] = i;
    }

    do
    {
        for (int i = 0; i < N; i++)
            cout << arr[i] << " ";
        cout << "\n";
    } while (next_permutation(arr, arr + N));

    return 0;
}