#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    int temp = 1;
    int cnt = 1;

    while (temp < N)
    {
        temp += 6 * cnt;
        cnt++;
    }
    cout << cnt;

    return 0;
}