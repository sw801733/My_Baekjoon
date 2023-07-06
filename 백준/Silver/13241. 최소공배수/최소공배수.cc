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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long A, B;
    cin >> A >> B;

    long long temp = min(A, B);
    long long gcd = 1;

    for (int i = 1; i <= temp; i++)
    {
        if (A % i == 0 && B % i == 0)
        {
            gcd = i;
        }
    }

    long long lcm = (A * B) / gcd;

    cout << lcm;

    return 0;
}