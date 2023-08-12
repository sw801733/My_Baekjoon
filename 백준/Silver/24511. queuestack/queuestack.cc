#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    deque<int> my_q;
    vector<int> my_v;
    for (int i = 0; i < N; i++)
    {
        int stct;
        cin >> stct;
        my_v.push_back(stct);
    }

    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        if (my_v[i] == 0)
        {

            my_q.push_back(a);
        }
    }

    int M;
    cin >> M;

    for (int i = 0; i < M; i++)
    {
        int a;
        cin >> a;

        if (!my_q.empty())
        {
            cout << my_q.back() << " ";
            my_q.pop_back();
            my_q.push_front(a);
        }
        else
            cout << a << " ";
    }

    return 0;
}
