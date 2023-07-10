#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <stack>
#include <queue>

using namespace std;

int main()
{

    int N;
    cin >> N;

    vector<int> my_v;
    stack<int> my_s;
    stack<int> my_index;
    vector<int> answer(N);

    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        my_v.push_back(a);
    }

    for (int i = 0; i < N - 1; i++)
    {
        while (!my_s.empty() && my_s.top() < my_v[i + 1])
        {
            answer[my_index.top()] = my_v[i + 1];
            my_s.pop();
            my_index.pop();
        }

        if (my_v[i] < my_v[i + 1])
            answer[i] = my_v[i + 1];

        else
        {
            my_s.push(my_v[i]);
            my_index.push(i);
        }
    }

    for (int i = 0; i < N - 1; i++)
    {
        if (answer[i] == 0)
            cout << -1 << " ";
        else
            cout << answer[i] << " ";
    }
    cout << -1;
    return 0;
}
