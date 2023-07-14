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

    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = (str[i] + 13 - 'a') % 26 + 'a';
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = (str[i] + 13 - 'A') % 26 + 'A';
        }
        cout << str[i];
    }

    return 0;
}
