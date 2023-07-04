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
    int a, b, c, d, e, f;
    int x, y;
    cin >> a >> b >> c >> d >> e >> f;

    int temp_b = d * b;
    int temp_e = a * e;
    int temp_c = d * c;
    int temp_f = a * f;

    if (temp_b - temp_e == 0)
        y = 0;
    else
        y = (temp_c - temp_f) / (temp_b - temp_e);

    if (a != 0)
        x = (c - b * y) / a;
    else
        x = (f - e * y) / d;

    cout << x << " " << y;

    return 0;
}