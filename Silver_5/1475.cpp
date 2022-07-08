#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    int arr[10] = {0,};
    int set = 0;

    cin >> N;

    while(N != 0)
    {
        arr[N % 10]++;
        N /= 10;
    }

    for(int i = 0; i < 10; i++)
    {
        if (i == 6 || i == 9)
            continue;
        set = max(set,arr[i]);
    }

    set = max(set,((arr[6] + arr[9]) + 1) / 2);

    cout << set;
    return 0;
}