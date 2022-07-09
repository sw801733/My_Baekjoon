#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int arr[7] = {0,};
    arr[6] = 1;
    
    int X;
    int sum = 0;
    int cnt = 0;
    int temp;

    cin >> X;
    while(1)
    {
        sum = 0;
        for(int i = 0; i < 7; i++)
            if (arr[i])
                sum += pow(2, i);
        if (sum == X)
            break;
        else
        {            
            for(int i = 0; i < 7; i++)
            {
                temp = i;
                if (arr[i])
                    break;
            }
            arr[temp]--;
            if (temp > 0)
                arr[temp - 1] += 2;
        }
    }

    for(int i = 0; i < 7; i++)
    {
        if (arr[i])
            cnt++;
    }
    cout << cnt;

    return 0;
}