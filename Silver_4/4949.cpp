#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while(1)
    {
        string str;
        stack<int> my_s;
        getline(cin, str);
        int flag = 0;

        if (str == ".")
            break;
        
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] == '[' || str[i] == '(')
                my_s.push(str[i]);
            
            else if (str[i] == ']')
            {
                if (my_s.empty())
                {
                    flag = 1;
                    break;
                }
                if (my_s.top() == '(')
                {
                    flag = 1;
                    break;
                }
                else    
                    my_s.pop();

            }
            else if (str[i] == ')')
            {
                if (my_s.empty())
                {
                    flag = 1;
                    break;
                }
                if (my_s.top() == '[')
                {
                    flag = 1;
                    break;
                }
                else
                    my_s.pop();
            }

        }
        if (my_s.size() == 0 && flag == 0)
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';

    }

    return 0;
}