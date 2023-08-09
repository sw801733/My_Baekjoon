#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    queue<int> my_q;
    stack<int> my_s;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int order;
        cin >> order;

        my_q.push(order);
    }

    int start = 1;
    for (int i = 0; i < N; i++)
    {
        if (my_q.front() == start)
        {
            my_q.pop();
            start++;
            int size = my_s.size();
            for (int i = 0; i < size; i++)
            {
                if (my_s.top() == start)
                {
                    my_s.pop();
                    start++;
                }
            }
        }
        else
        {
            my_s.push(my_q.front());
            my_q.pop();
        }
    }

    if (my_s.empty())
        cout << "Nice";
    else
        cout << "Sad";

    return 0;
}
