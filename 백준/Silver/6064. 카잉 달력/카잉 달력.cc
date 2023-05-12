#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    int r = a % b;
    while (r != 0)
    {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}

int main(void)
{

    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int M, N, x, y;
        cin >> M >> N >> x >> y;
        int max_num = (M * N) / gcd(M, N);
        int result = -1;
        for (int j = x; j <= max_num; j += M)
        {
            if ((j - 1) % N + 1 == y)
            {
                result = j;
                break;
            }
        }
        if (result != -1)
            cout << result << "\n";
        else
            cout << -1 << "\n";
    }
    return 0;
}