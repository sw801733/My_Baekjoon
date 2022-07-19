#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N ,M;
    deque<int> my_d;


    int min_cnt = 0;
    cin >> N >> M;

    for(int i = 1; i <= N; i++)
        my_d.push_back(i);

    for(int i = 0; i < M; i++)
    {
        int a;
        cin >> a;
        int idx = 0;
        int cnt = 0;
        for(int i = 0; i < my_d.size(); i++)
        {
            if(my_d[i] == a)
            {
                idx = i;
                break;
            }
        }
        
        if (idx < my_d.size() - idx)
        {  

            while(1)
            {
                if (my_d.front() == a)
                    break;
                my_d.push_back(my_d.front());
                my_d.pop_front();
                cnt++;
            }
            min_cnt += cnt;
        }
        else
        {
            while(1)
            {
                if (my_d.front() == a)
                    break;
                my_d.push_front(my_d.back());
                my_d.pop_back();
                cnt++;
            }
            min_cnt += cnt;
        }
        
        my_d.pop_front();
    }
    cout << min_cnt;
    return 0;
}