#include <iostream>
#include <cmath>

using namespace std;

int arr[1000001];

void check_primeN()
{
    // 소수 판별
    int number = 1000000;
    for (int i = 1; i <= number; i++)
        arr[i] = 1;

    for (int i = 2; i <= number; i++)
    {
        if (arr[i] == 0)
            continue;
        for (int j = i + i; j <= number; j += i)
        {
            arr[j] = 0;
        }
    }

    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int flag = 0;
    check_primeN();

    while (true)
    {
        int a;
        flag = 0;
        cin >> a;

        if (a == 0)
            break;

        for (int i = 3; i <= a; i += 2)
        {
            if (arr[i])
            {
                if (arr[a - i])
                {
                    cout << a << " = " << i << " + " << a - i << "\n";
                    flag = 1;
                    break;
                }
            }
        }
        if (flag != 1)
            cout << "Goldbach's conjecture is wrong."
                 << "\n";
    }

    return 0;
}