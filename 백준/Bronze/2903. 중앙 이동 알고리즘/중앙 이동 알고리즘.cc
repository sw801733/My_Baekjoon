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

    int N;
    cin >> N;

    int temp = pow(2, N) + 1;

    int dot_n = temp * temp;

    cout << dot_n;

    return 0;
}