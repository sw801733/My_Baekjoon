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
    string s;
    stack<char> my_s;

    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            cout << s[i];
        }
        else
        {
            if (s[i] == '(')
                my_s.push(s[i]);
            else if (s[i] == ')')
            {
                while (my_s.top() != '(' && !my_s.empty())
                {
                    cout << my_s.top();
                    my_s.pop();
                }
                my_s.pop();
            }
            else
            {
                if (my_s.empty())
                    my_s.push(s[i]);

                else
                {
                    if (my_s.top() == '(')
                        my_s.push(s[i]);
                    else
                    {
                        if (s[i] == '+' || s[i] == '-')
                        {
                            while (!my_s.empty())
                            {
                                if (my_s.top() == '(')
                                    break;
                                cout << my_s.top();
                                my_s.pop();
                            }
                            my_s.push(s[i]);
                        }
                        else
                        {
                            if (my_s.top() == '*' || my_s.top() == '/')
                            {
                                cout << my_s.top();
                                my_s.pop();
                            }
                            my_s.push(s[i]);
                        }
                    }
                }
            }
        }
    }

    while (!my_s.empty())
    {
        cout << my_s.top();
        my_s.pop();
    }

    return 0;
}
