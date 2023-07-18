#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <stack>
#include <queue>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

long long divide_a(long long n, int a)
{
    long long cnt = 0;
    for (long long i = 1; i <= n; i *= a)
    {
        cnt += (n / i);
    }
    return cnt;
}

int main()
{
    long long n, m;
    cin >> n >> m;

    long long cnt1 = divide_a(n, 2) - divide_a(n - m, 2) - divide_a(m, 2);
    long long cnt2 = divide_a(n, 5) - divide_a(n - m, 5) - divide_a(m, 5);

    cout << min(cnt1, cnt2);

    return 0;
}
