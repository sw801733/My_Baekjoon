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
    cin >> str;

    set<string> my_s;

    int N = str.length();
    for (int i = 0; i < N; i++)
    {
        my_s.insert(str);
        str.erase(0, 1);
    }

    for (auto iter = my_s.begin(); iter != my_s.end(); iter++)
    {
        cout << *iter << "\n";
    }

    return 0;
}
