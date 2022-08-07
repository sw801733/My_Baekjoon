#include <iostream>

using namespace std;

int arr[246913] = {0,};

void is_Prime(int n)
{
    if (n == 1)
        return;
    
    if (arr[n] == -1 || arr[n] == 1)
    {
        return;
    }
    else
    {
        for(int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                arr[n] = 1;
                return;
            } 
        }
        arr[n] = -1;
        return;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while(1)
    {
        int n;
        cin >> n;

        if(n == 0)
            break;

        for(int i = n + 1; i <= 2 * n; i++)
            is_Prime(i);

        int cnt = 0;
        for(int i = n + 1; i <= 2 * n; i++)
        {
            if (arr[i] == -1)
                cnt++;
        }
        cout << cnt << "\n";

    }

    return 0;
}