#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    vector<long long>my_v;
    vector<long long>my_v2;

    cin >> N;

    for(int i = 0; i < N - 1; i++)
    {
        long long a;
        cin >> a;
        my_v.push_back(a);
    }

    for(int i = 0; i < N; i++)
    {
        long long a;
        cin >> a;
        if (i == N - 1)
            break;
        my_v2.push_back(a);
    }
    long long min_liter = my_v2[0];
    long long min_cost = my_v[0] * my_v2[0];
    for(int i = 1; i < N - 1; i++)
    {
        if (my_v2[i] < min_liter)
        {
            min_liter = my_v2[i];
        }
        min_cost += min_liter * my_v[i];
    }

    cout << min_cost;
    return 0;
}