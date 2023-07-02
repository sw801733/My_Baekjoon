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
    int a, b, c;
    cin >> a >> b >> c;

    int sum = a + b + c;
    if (sum == 180)
    {
        if (a == b && b == c)
        {
            cout << "Equilateral";
        }
        else if (a == b || a == c || b == c)
        {
            cout << "Isosceles";
        }
        else
            cout << "Scalene";
    }
    else
    {
        cout << "Error";
    }

    return 0;
}