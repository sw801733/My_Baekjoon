#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <algorithm>
#include <vector>
#include <ctype.h>
#include <math.h>
#include <map>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    map<string, bool> name;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string _name, entrance;
        cin >> _name >> entrance;

        if (entrance == "enter")
        {
            name[_name] = true;
        }
        else
        {
            name[_name] = false;
        }
    }

    for (auto iter = name.rbegin(); iter != name.rend(); iter++)
    {
        if (iter->second)
        {
            cout << iter->first << "\n";
        }
    }

    return 0;
}