#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <algorithm>
#include <vector>
#include <ctype.h>

using namespace std;

int main()
{
    string N;
    int B;
    cin >> N >> B;

    long long decimal = 0;
    long long temp = 1;

    for (int i = N.length() - 1; i >= 0; i--)
    {
        if (N[i] >= 'A' && N[i] <= 'Z')
        {
            decimal += (N[i] - 'A' + 10) * temp;
        }
        else
        {
            decimal += (N[i] - '0') * temp;
        }
        temp *= B;
    }

    cout << decimal;

    return 0;
}