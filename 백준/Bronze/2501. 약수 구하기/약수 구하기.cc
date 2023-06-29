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

    int N, K;
    cin >> N >> K;
    int cnt = 0;
    if (N == 1)
    {
        if (K == 1)
        {
            cout << 1;
            return 0;
        }
        else
        {
            cout << 0;
            return 0;
        }
    }
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            cnt++;
            if (cnt == K)
            {
                cout << i;
                return 0;
            }
        }
    }

    cout << 0;
    return 0;
}