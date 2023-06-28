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

    vector<string> my_v;
    for (int i = 0; i < 5; i++)
    {
        string temp;
        cin >> temp;
        my_v.push_back(temp);
    }

    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (my_v[j].length() > i)
                cout << my_v[j][i];
        }
    }

    return 0;
}