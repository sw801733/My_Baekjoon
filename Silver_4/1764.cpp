#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, M;
    int cnt = 0;
    map<string, int> my_m;
    vector<string> v2;

    cin >> N >> M;

    for(int i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        my_m[str] = true;
    }

    for(int i = 0; i < M; i++)
    {
        string str;
        cin >> str;
        
        if (my_m[str])
        {
            cnt++;
            v2.push_back(str);
        }
    }
    cout << cnt << '\n';

    sort(v2.begin(),v2.end()); // for output format

    for(int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << '\n';
    }
    

    
    return 0;
}