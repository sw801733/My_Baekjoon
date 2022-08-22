#include <iostream>
#include <queue>

using namespace std;

int main()
{
    
    int N;
    queue<int> my_q;
    cin >> N;

    for(int i = 1; i <= N; i++)
    {
        my_q.push(i);
    }

    for(int i = 1; i <= N; i++)
    {
        cout << my_q.front() << " ";
        my_q.pop();
        my_q.push(my_q.front());
        my_q.pop();

    }
    return 0;
    
}