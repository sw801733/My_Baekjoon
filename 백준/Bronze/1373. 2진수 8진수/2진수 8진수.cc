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

int gcd(int n, int m)
{
    int temp;

    while (m != 0)
    {
        temp = n % m;
        n = m;
        m = temp;
    }

    return n;
}

int main()
{
    string str;

    string answer = "";
    int cnt = 1;
    stack<int> my_s;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '0')
            my_s.push(0);
        else
            my_s.push(1);
    }

    int temp = 1;
    int dec = 0;
    while (1)
    {
        if (temp == 8)
        {
            answer += to_string(dec);
            dec = 0;
            temp = 1;
        }
        if (my_s.size() == 1)
        {
            dec += my_s.top() * temp;
            answer += to_string(dec);
            break;
        }

        dec += my_s.top() * temp;
        temp *= 2;
        my_s.pop();
    }

    reverse(answer.begin(), answer.end());

    cout << answer;

    return 0;
}
