#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    deque<pair<int, int>> my_d;

    for (int i = 0; i < N; i++)
    {
        int ba;
        cin >> ba;

        my_d.push_back(make_pair(ba, i + 1));
    }

    while (!my_d.empty())
    {
        int idx = my_d.front().first;
        cout << my_d.front().second << " ";

        my_d.pop_front();

        if (idx > 0)
        {
            idx--;
            while (idx--)
            {
                my_d.push_back(my_d.front());
                my_d.pop_front();
            }
        }
        else
        {
            idx = abs(idx);
            while (idx--)
            {
                my_d.push_front(my_d.back());
                my_d.pop_back();
            }
        }
    }

    return 0;
}
