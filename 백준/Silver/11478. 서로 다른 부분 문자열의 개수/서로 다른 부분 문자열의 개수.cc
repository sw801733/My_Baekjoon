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

    string S;
    map<string, bool> map_S;

    cin >> S;

    for (int i = 1; i <= S.length(); i++)
    {
        string temp = "";
        for (int j = 0; j < S.length(); j++)
        {
            if (j + i <= S.length())
            {
                temp = S.substr(j, i);
                map_S[temp] = true;
            }
        }
    }
    cout << map_S.size();
    return 0;
}