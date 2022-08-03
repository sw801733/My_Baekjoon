#include <iostream>

using namespace std;

int main()
{

    int N;
    long long arr[1000000];
    cin >> N;

    arr[0] = 1;
    arr[1] = 2;


    for(int i = 2; i < N; i++)
    {
        arr[i] = (arr[i - 1] + arr[i - 2]) % 15746;
    }

    cout << arr[N - 1];

    return 0;
}