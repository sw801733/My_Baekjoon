#include <bits/stdc++.h>

using namespace std;

int main()
{

    string str;

    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = (char)((str[i] - 'a' + 13) % 26) + 'a';
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = (char)((str[i] - 'A' + 13) % 26) + 'A';
        }
    }

    cout << str;

    return 0;
}
