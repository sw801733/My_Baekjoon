#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;

    int arr[1000004];
    int result[1000004];

    stack<int> my_s;

    cin >> N;
    memset(result, -1, sizeof(result));
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        while (my_s.size() && arr[my_s.top()] < arr[i])
        {
            result[my_s.top()] = arr[i];
            my_s.pop();
        }

        my_s.push(i);
    }

    for (int i = 0; i < N; i++)
        cout << result[i] << " ";

    return 0;
}
