#include <bits/stdc++.h>

using namespace std;

int main()
{

    string str;
    cin >> str;

    string temp = str;

    reverse(str.begin(), str.end());

    if (str == temp)
        cout << 1;
    else
        cout << 0;

    return 0;
}
