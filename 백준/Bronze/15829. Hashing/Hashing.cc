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

int main()
{
    long long L;
    string str;

    cin >> L;
    cin >> str;

    long long b = 1;
    long long sum = 0;

    for (int i = 0; i < str.length(); i++)
    {
        sum += ((str[i] - 'a' + 1) * b) % 1234567891;
        b *= 31;
    }

    cout << sum;

    return 0;
}
