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
    int result = 0;

    for (int i = 1; i <= N; i *= 10)
    {
        result += N - i + 1;
    }

    cout << result;

    return 0;
}