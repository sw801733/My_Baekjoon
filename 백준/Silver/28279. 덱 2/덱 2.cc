#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    deque<int> my_d;

    for (int i = 0; i < N; i++)
    {
        int cmd;
        cin >> cmd;

        if (cmd == 1)
        {
            int x;
            cin >> x;
            my_d.push_front(x);
        }
        else if (cmd == 2)
        {
            int x;
            cin >> x;
            my_d.push_back(x);
        }
        else if (cmd == 3)
        {
            if (!my_d.empty())
            {
                cout << my_d.front() << "\n";
                my_d.pop_front();
            }
            else
                cout << -1 << "\n";
        }
        else if (cmd == 4)
        {
            if (!my_d.empty())
            {
                cout << my_d.back() << "\n";
                my_d.pop_back();
            }
            else
                cout << -1 << "\n";
        }
        else if (cmd == 5)
        {
            cout << my_d.size() << "\n";
        }
        else if (cmd == 6)
        {
            if (my_d.empty())
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }
        else if (cmd == 7)
        {
            if (!my_d.empty())
            {
                cout << my_d.front() << "\n";
            }
            else
                cout << -1 << "\n";
        }
        else if (cmd == 8)
        {
            if (!my_d.empty())
            {
                cout << my_d.back() << "\n";
            }
            else
                cout << -1 << "\n";
        }
    }

    return 0;
}
