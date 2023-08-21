#include <bits/stdc++.h>
using namespace std;

int main()
{
    char mo[] = {'a', 'e', 'i', 'o', 'u'};

    while (1)
    {
        string str;
        stack<char> my_s;
        int flag = 0;
        cin >> str;

        if (str == "end")
            break;

        for (int i = 0; i < str.length(); i++)
        {
            my_s.push(str[i]);
        }

        for (int i = 0; i < 5; i++)
        {
            if (find(str.begin(), str.end(), mo[i]) != str.end())
            {
                flag = 0;
                break;
            }
            else
                flag = 1;
        }

        int mo_cnt = 0;
        int ja_cnt = 0;

        char prev_s = 0;

        while (!my_s.empty())
        {
            char a = my_s.top();

            if (a == prev_s && a != 'e' && a != 'o')
            {
                flag = 1;
                break;
            }

            if (find(mo, mo + 5, a) != mo + 5)
            {
                ja_cnt = 0;
                mo_cnt++;
            }
            else
            {
                mo_cnt = 0;
                ja_cnt++;
            }

            if (mo_cnt >= 3 || ja_cnt >= 3)
            {
                flag = 1;
                break;
            }

            prev_s = a;
            my_s.pop();
        }

        if (flag == 0)
            cout << "<" << str << ">"
                                  " is acceptable.\n";
        else
            cout << "<" << str << ">"
                 << " is not acceptable.\n";
    }

    return 0;
}
