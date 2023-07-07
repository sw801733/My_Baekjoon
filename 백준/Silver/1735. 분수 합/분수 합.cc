#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <algorithm>
#include <vector>
#include <ctype.h>
#include <math.h>
#include <map>

using namespace std;

long long gcd(long long a, long long b)
{
    long long temp;
    while (b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;

    long long temp;
    long long gcd_n = 1;

    gcd_n = gcd(b, d);

    long long lcm = (b * d) / gcd_n;

    long long dem = a * (lcm / b) + c * (lcm / d);
    long long num = lcm;

    gcd_n = gcd(dem, num);
    dem /= gcd_n;
    num /= gcd_n;

    cout << dem << " " << num;

    return 0;
}