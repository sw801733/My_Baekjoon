#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    vector<string> my_v;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        string temp = "";
        for (int j = 0; j < str.length(); j++)
        {

            if (str[j] >= '0' && str[j] <= '9')
            {
                if (str[j] == '0' && j == 0)
                {
                    continue;
                }
                temp += str[j];
            }
            else if (temp != "")
            {
                while (temp[0] == '0')
                {
                    temp = temp.substr(1, temp.length());
                }
                if (temp == "")
                    temp = '0';
                my_v.push_back(temp);
                temp = "";
            }
        }
        if (temp != "")
        {
            while (temp[0] == '0')
            {
                temp = temp.substr(1, temp.length());
            }
            if (temp == "")
                temp = '0';
            my_v.push_back(temp);
        }
    }

    sort(my_v.begin(), my_v.end(), [](string &a, string &b)
         {
        if (a.length() == b.length())
        {
            return a < b;
        }
        return a.length() < b.length(); });

    for (string n : my_v)
        cout << n << "\n";

    return 0;
}
