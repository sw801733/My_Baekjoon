#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

int N;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    string temp = "";
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        temp += str[i];

        if (temp.length() == 2)
        {
            if (temp == "pi" || temp == "ka")
                temp = "";
        }
        if (temp.length() == 3)
        {
            if (temp == "chu")
                temp = "";
        }
    }

    if (temp == "")
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
