#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, M;
    int cnt = 0;
    vector<string> my_v;
    vector<string> v2;

    cin >> N >> M;

    for(int i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        my_v.push_back(str);
    }
    sort(my_v.begin(),my_v.end());
    for(int i = 0; i < M; i++)
    {
        string str;
        cin >> str;
        auto f = binary_search(my_v.begin(),my_v.end(),str);
        if (f == true)
        {
            cnt++;
            v2.push_back(str);
        }

    }
    sort(v2.begin(),v2.end());
    cout << cnt << '\n';

    for(int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << '\n';
    }
    

    
    return 0;
}