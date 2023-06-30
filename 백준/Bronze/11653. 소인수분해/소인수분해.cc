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

    for (int i = 2; i <= N; i++)
    {
        while (N % i == 0)
        {
            cout << i << "\n";
            N /= i;
        }
    }
    return 0;
}