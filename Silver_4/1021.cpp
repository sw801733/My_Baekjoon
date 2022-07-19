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
        int cnt1 = 0;
        int cnt2 = 0;

        for(int i = 0; i < my_d.size(); i++)
        {
            if (my_d.front() == a)
                cnt1 = i;
            my_d.push_back(my_d.front());
            my_d.pop_front();
        }

        for(int i = 0; i < my_d.size(); i++)
        {
            if (my_d.front() == a)
                cnt2 = i;
            my_d.push_front(my_d.back());
            my_d.pop_back();
        }

        if (cnt1 < cnt2)
        {  
            min_cnt += cnt1;
            while(cnt1--)
            {
                my_d.push_back(my_d.front());
                my_d.pop_front();
            }
        }
        else
        {
            min_cnt += cnt2;
            while(cnt2--)
            {
                my_d.push_front(my_d.back());
                my_d.pop_back();
            }
            

        }
        my_d.pop_front();
    }
    cout << min_cnt;
    return 0;
}