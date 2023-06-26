#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    string str;
    vector<string> my_v;

    while (getline(cin, str))
    {
        my_v.push_back(str);
    }

    for (int i = 0; i < my_v.size(); i++)
    {
        cout << my_v[i] << "\n";
    }
    return 0;
}