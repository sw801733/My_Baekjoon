#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

bool is_prime(unsigned long long n)
{
    for (unsigned long long i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{

    int T;
    cin >> T;

    for (long long i = 0; i < T; i++)
    {
        unsigned long long n;
        cin >> n;

        if (n <= 2)
        {
            cout << 2 << "\n";
            continue;
        }

        for (unsigned long long j = n; j < 4 * 1000000000; j++)
        {
            if (is_prime(j))
            {
                cout << j << "\n";
                break;
            }
        }
    }

    return 0;
}
