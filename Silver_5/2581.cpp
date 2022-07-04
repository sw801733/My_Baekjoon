#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cin.tie(NULL);
	ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    if(n == 1)
        n += 1;

    int sum = 0;
    int min_prime;
    int min_flag = 0;

    for(int i = n; i <= m; i++)
    {
        int prime_check = 0;
        for (int j = 1; j * j <= i; j++)
        {
            if(i % j == 0)
            {
                prime_check += 1;
                if (prime_check == 2)
                    break;
            }
                
        }
        if (prime_check == 1)
        {
            if (min_flag == 0)
            {
                min_prime = i;
                min_flag = 1;
            }
            sum += i;
        }

    }
    if (min_flag == 1)
    {
        cout << sum << "\n";
        cout << min_prime;

    }
    else
        cout << "-1";

    return 0;
}