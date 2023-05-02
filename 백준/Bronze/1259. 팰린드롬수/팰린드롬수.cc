#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    while (1)
    {
        string str;
        cin >> str;

        if (str == "0")
            break;

        string temp = str;
        reverse(temp.begin(), temp.end());

        if (str != temp)
            cout << "no" << endl;
        else
            cout << "yes" << endl;
        }

    return 0;
}