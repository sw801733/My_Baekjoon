#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    int n;
    int answer = 0;
    vector<pair<int, int>> my_v;
    priority_queue<int, vector<int>, greater<int>> pq;

    cin >> n;

    for(int i = 0; i < n; i++) 
    {
        int a, b;
        cin >> a >> b;
        my_v.push_back({b, a});
    }

    sort(my_v.begin(), my_v.end());

    for(pair<int, int> p : my_v)
    {
        pq.push(p.second);
        if (pq.size() > p.first)
        {
            pq.pop();

        }
    }

    while(pq.size() != 0)
    {
        answer += pq.top();
        pq.pop();
    }

    cout << answer;

    return 0;
}