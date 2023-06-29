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
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int C;
        cin >> C;
        int arr[4] = {
            0,
        };
        while (C > 0)
        {
            if (C >= 25)
            {
                arr[0] = C / 25;
                C %= 25;
            }
            else if (C >= 10)
            {
                arr[1] = C / 10;
                C %= 10;
            }
            else if (C >= 5)
            {
                arr[2] = C / 5;
                C %= 5;
            }
            else if (C >= 1)
            {
                arr[3] = C / 1;
                C %= 1;
            }
        }

        for (int i = 0; i < 4; i++)
            cout << arr[i] << " ";
    }

    return 0;
}