#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{

    int T;

    cin >> T;

    bool arr[1000001] = {
        0,
    };

    for (int i = 2; i <= sqrt(1000000); i++)
    {
        if (arr[i] == 1)
            continue;
        for (int j = i + i; j <= 1000000; j += i)
        {
            arr[j] = 1;
        }
    }

    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N;

        int cnt = 0;

        for (int j = 2; j <= N / 2; j++)
        {
            if (arr[N - j] == 0 && arr[j] == 0)
            {
                cnt++;
            }
        }
        cout << cnt << "\n";
    }

    return 0;
}
