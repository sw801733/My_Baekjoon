#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    queue<int> my_q;

    cin >> N;

    for(int i = 1; i <=N;i++)
    {
        my_q.push(i);
    }

    while(my_q.size() != 1)
    {
        my_q.pop();
        my_q.push(my_q.front());
        my_q.pop();
    }
    cout << my_q.front();
    return 0;
}