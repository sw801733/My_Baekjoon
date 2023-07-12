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
    int N;
    vector<char> my_v;
    vector<double> num;

    stack<double> my_s;
    string str;

    double answer = 0;
    cin >> N;

    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        my_v.push_back(str[i]);
    }

    for (int i = 0; i < N; i++)
    {
        int b;
        cin >> b;
        num.push_back(b);
    }

    for (int i = 0; i < my_v.size(); i++)
    {
        double a, b;
        // if (!my_s.empty())
        //     cout << my_s.top() << "\n";
        if (my_v[i] == '+')
        {
            a = my_s.top();
            my_s.pop();
            b = my_s.top();
            my_s.pop();
            my_s.push(b + a);
        }
        else if (my_v[i] == '-')
        {
            a = my_s.top();
            my_s.pop();
            b = my_s.top();
            my_s.pop();

            my_s.push(b - a);
        }
        else if (my_v[i] == '*')
        {
            a = my_s.top();
            my_s.pop();
            b = my_s.top();
            my_s.pop();

            my_s.push(b * a);
        }
        else if (my_v[i] == '/')
        {

            a = my_s.top();
            my_s.pop();
            b = my_s.top();
            my_s.pop();

            my_s.push(b / a);
        }
        else
        {
            my_s.push(num[my_v[i] - 'A']);
        }
    }

    cout << fixed;
    cout.precision(2);
    cout << my_s.top();

    return 0;
}
