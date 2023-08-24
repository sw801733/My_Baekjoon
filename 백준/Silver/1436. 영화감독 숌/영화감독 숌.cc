#include <iostream>
#include <string>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;

    int number = 0;
    int cnt = 0;

    while(n != cnt)
    {   
        number++;
        int temp = number;
        while (temp != 0)
        {
            if(temp % 1000 == 666)
            {
                cnt++;
                break;
            }

            temp /= 10;
        } 
    }
    cout << number;
    return 0;
}