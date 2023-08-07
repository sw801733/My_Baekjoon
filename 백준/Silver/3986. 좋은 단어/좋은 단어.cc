#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    int cnt = 0;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string str;
        stack<char> my_s;
        cin >> str;

        my_s.push(str[0]);
        for (int i = 1; i < str.length(); i++)
        {
            if (!my_s.empty() && my_s.top() == str[i])
                my_s.pop();
            else
                my_s.push(str[i]);
        }

        if (my_s.empty())
            cnt++;
    }
    cout << cnt;
    return 0;
}
