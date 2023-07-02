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
    while (1)
    {
        int arr[3];
        int max = 0;
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
            if (max < arr[i])
            {
                max = arr[i];
            }
            sum += arr[i];
        }

        if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0)
            break;

        if (max >= sum - max)
            cout << "Invalid"
                 << "\n";

        else if (arr[0] == arr[1] && arr[1] == arr[2])
            cout << "Equilateral"
                 << "\n";
        else if (arr[0] == arr[1] || arr[1] == arr[2] || arr[0] == arr[2])
            cout << "Isosceles"
                 << "\n";
        else
            cout << "Scalene"
                 << "\n";
    }

    return 0;
}