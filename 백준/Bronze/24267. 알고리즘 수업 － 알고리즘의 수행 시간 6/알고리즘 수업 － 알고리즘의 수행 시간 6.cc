#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <algorithm>
#include <vector>
#include <ctype.h>
#include <math.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long sum = 0;
    for (long long i = 1; i <= n - 2; i++)
        sum += (i * (i + 1)) / 2;

    cout << sum << "\n";
    cout << 3 << "\n";

    return 0;
}