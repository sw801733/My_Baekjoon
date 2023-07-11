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
    int arr[1000001] = {
        0,
    };
    int answer[1000001] = {
        0,
    };
    stack<int> my_s;
    stack<int> my_index;
    vector<int> my_v;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;

        if (arr[a] == 0)
            arr[a] = 1;
        else
            arr[a]++;

        my_v.push_back(a);
    }

    for (int i = 0; i < N; i++)
    {

        while (!my_s.empty() && arr[my_s.top()] < arr[my_v[i]])
        {
            answer[my_index.top()] = my_v[i];
            my_s.pop();
            my_index.pop();
        }
        my_s.push(my_v[i]);
        my_index.push(i);
    }

    for (int i = 0; i < N; i++)
    {
        if (answer[i] == 0)
            cout << -1 << " ";
        else
            cout << answer[i] << " ";
    }

    return 0;
}
