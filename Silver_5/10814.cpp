#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    int a;
    string str;
    vector<pair<int, string>> my_v;
    
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> a >> str;
        my_v.push_back(make_pair(a,str));
    }

    stable_sort(my_v.begin(), my_v.end(),
    [](auto a, auto b)
    {
        return a.first < b.first;
    }
    );

    for(int i = 0; i < my_v.size(); i++)
    {
        cout << my_v[i].first << " " << my_v[i].second << "\n";
    }

    return 0;
}