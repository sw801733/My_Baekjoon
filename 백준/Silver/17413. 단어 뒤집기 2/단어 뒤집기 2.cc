#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <stack>

using namespace std;

int main()
{

    string str;
    getline(cin, str, '\n');
    stack<char> my_s;
    str += ' ';

    int flag = 0;
    for (int j = 0; j < str.size(); j++)
    {

        if (str[j] == '<')
        {
            flag = 1;
            while (!my_s.empty())
            {
                cout << my_s.top();
                my_s.pop();
            }
        }
        else if (str[j] == '>')
        {
            flag = 0;
            cout << '>';
            continue;
        }

        if (flag)
        {
            cout << str[j];
        }
        if (flag == 0)
        {
            if (str[j] == ' ')
            {
                while (!my_s.empty())
                {
                    cout << my_s.top();
                    my_s.pop();
                }
                cout << " ";
            }
            else
                my_s.push(str[j]);
        }
    }

    return 0;
}
