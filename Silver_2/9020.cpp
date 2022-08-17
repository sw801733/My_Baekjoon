#include <iostream>

using namespace std;

int isPrime(int n)
{
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}


int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[10000];
    int T;
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        int n;
        cin >> n;

        for(int i = n / 2; i >= 2; i--)
        {
            if ((isPrime(i) == 1) && (isPrime(n - i) == 1))
            {
                cout << i << " " << n - i << "\n";
                break;
            }
        }
         
    }


    return 0;
}