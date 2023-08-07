#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, M;
    vector<int> my_v;
    int cnt = 0;
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        my_v.push_back(n);
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (my_v[i] + my_v[j] == M)
                cnt++;
        }
    }

    cout << cnt;
    return 0;
}
