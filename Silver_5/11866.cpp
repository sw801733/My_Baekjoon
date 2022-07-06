#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    queue<int> my_q;
    
    cin >> n >> k;

    int temp = k;

    for(int i = 1; i <= n; i++)
    {
        my_q.push(i);
    
    }
    int cnt = 1;
    cout << "<";
    while(my_q.size() != 1)
    {
        if(cnt == k)
        {
            cout << my_q.front() << ", ";
            my_q.pop();
            cnt = 1;
        }
        else
        {
            int temp = my_q.front();
            my_q.pop();
            my_q.push(temp);
            cnt += 1;
        }


    }
    cout << my_q.front() << ">";

    return 0;
}