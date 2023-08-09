#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    stack<int> my_s;
    cin >> N;

    while (N--)
    {
        int cmd;
        cin >> cmd;

        if (cmd == 1)
        {
            int X;
            cin >> X;
            my_s.push(X);
        }
        else if (cmd == 2)
        {
            if (!my_s.empty())
            {
                cout << my_s.top() << "\n";
                my_s.pop();
            }
            else
                cout << -1 << "\n";
        }
        else if (cmd == 3)
        {
            cout << my_s.size() << "\n";
        }
        else if (cmd == 4)
        {
            if (my_s.empty())
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }
        else if (cmd == 5)
        {
            if (!my_s.empty())
                cout << my_s.top() << "\n";
            else
                cout << -1 << "\n";
        }
    }

    return 0;
}
