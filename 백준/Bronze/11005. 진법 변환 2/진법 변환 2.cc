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
    long long N;
    int B;
    cin >> N >> B;

    string B_number = "";

    while (N > 0)
    {
        char temp = N % B;
        if (temp >= 10 && temp <= 36)
        {
            B_number += (temp - 10) + 'A';
        }
        else
        {
            B_number += temp + '0';
        }

        N /= B;
    }
    reverse(B_number.begin(), B_number.end());

    cout << B_number;

    return 0;
}