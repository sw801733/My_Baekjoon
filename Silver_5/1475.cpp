#include <iostream>


using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    int arr[10] = {0,0,0,0,0,0,0,0,0,0};
    int set = 0;

    cin >> N;

    while(N != 0)
    {
        if (arr[N % 10] == 0)
        {
            if (N % 10 == 6 && arr[9] != 0)
                arr[9]--;
            else if (N % 10 == 9 && arr[6] != 0)
                arr[6]--;
            else
            {
                set++;
                for(int i = 0; i < 10; i++)
                    if (i != N % 10)
                        arr[i]++;
            }

        }   
        else
            arr[N % 10]--;
        N /= 10;
    }
    cout << set;
    return 0;
}