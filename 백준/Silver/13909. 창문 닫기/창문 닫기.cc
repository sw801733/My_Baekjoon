#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{

    int N;
    int cnt = 0;

    cin >> N;

    for (int i = 1; i <= sqrt(N); i++)
    {
        cnt++;
    }

    cout << cnt;

    return 0;
}
