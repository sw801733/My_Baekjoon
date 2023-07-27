#include <bits/stdc++.h>

using namespace std;

int main()
{

    int A, B, C;
    cin >> A >> B >> C;

    int arr[101] = {
        0,
    };
    for (int i = 0; i < 3; i++)
    {
        int n, m;
        cin >> n >> m;
        for (int j = n; j < m; j++)
            arr[j]++;
    }

    int sum = 0;

    for (int i = 1; i < 101; i++)
    {
        if (arr[i] == 1)
            sum += A;
        else if (arr[i] == 2)
            sum += 2 * B;
        else if (arr[i] == 3)
            sum += 3 * C;
    }

    cout << sum;

    return 0;
}
