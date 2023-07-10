#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <stack>

using namespace std;

int main()
{

    int T;
    cin >> T;

    cin.ignore();

    for (int i = 0; i < T; i++)
    {
        string str;
        getline(cin, str, '\n');
        stack<char> my_s;

        for (int j = 0; j < str.size(); j++)
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
        while (!my_s.empty())
        {
            cout << my_s.top();
            my_s.pop();
        }
        cout << "\n";
    }

    return 0;
}
