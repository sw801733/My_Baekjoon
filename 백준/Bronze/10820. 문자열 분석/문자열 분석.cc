#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <stack>
#include <queue>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int main()
{
    string str;
    while (getline(cin, str))
    {

        int arr[4] = {
            0,
        };

        for (int j = 0; j < str.length(); j++)
        {
            if (str[j] >= 'a' && str[j] <= 'z')
                arr[0]++;
            else if (str[j] >= 'A' && str[j] <= 'Z')
                arr[1]++;
            else if (str[j] >= '0' && str[j] <= '9')
                arr[2]++;
            else if (str[j] == ' ')
                arr[3]++;
        }

        for (int k = 0; k < 4; k++)
        {
            cout << arr[k] << " ";
        }
        cout << "\n";
    }
    return 0;
}
