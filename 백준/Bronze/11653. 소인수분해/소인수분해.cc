#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <algorithm>
#include <vector>
#include <ctype.h>
#include <math.h>

using namespace std;

int is_Prime(int n)
{
    if (n == 2 || n == 3)
        return 1;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
            return 1;
    }
    return 0;
}

int main()
{
    int N;
    cin >> N;

    int i = 2;
    while (N != 1)
    {
        if (N % i == 0 && is_Prime(i) == 1)
        {
            cout << i << "\n";
            N /= i;
        }
        else
            i++;
    }

    return 0;
}