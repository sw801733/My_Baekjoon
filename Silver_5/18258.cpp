#include <iostream>
#include <deque>

using namespace std;

deque<int> my_q;

void queue_2(string str)
{
    if(str == "push")
    {
        int n;
        cin >> n;
        my_q.push_back(n);
    }
    else if(str == "pop")
    {
        if (my_q.empty())
        {
            cout << "-1\n";
            return;
        }
        cout << my_q.front() << '\n';
        my_q.pop_front();
    }
    else if(str == "size")
    {
        cout << my_q.size() << '\n';
    }
    else if(str == "empty")
    {
        if(my_q.empty())
            cout << "1\n";
        else
            cout << "0\n";
    }
    else if(str == "front")
    {
        if (my_q.empty())
        {
            cout << "-1\n";
            return;
        }
        cout << my_q.front() << '\n';
    }
    else if(str == "back")
    {
        if (my_q.empty())
        {
            cout << "-1\n";
            return;
        }
        cout << my_q.back() << '\n';
    }
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;


    cin >> N;

    for(int i = 0; i < N; i++)
    {
        string str;
        cin >> str;

        queue_2(str);
    }

    return 0;
}