#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int arr[1001];

    arr[1] = 0;
    arr[2] = 1;
    arr[3] = 0;

    for(int i = 4; i <= N; i++)
    {
        if (arr[i - 1] || arr[i - 3])
            arr[i] = 0;
        else
            arr[i] = 1;
    }

    if (arr[N] == 0)
        cout << "CY";
    else
        cout << "SK";
    
    return 0;
}