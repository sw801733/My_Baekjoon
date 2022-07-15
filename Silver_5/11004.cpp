#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, K;
    vector<int> my_v;

    cin >> N >> K;

    for(int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        my_v.push_back(n);
    } 

    sort(my_v.begin(),my_v.end());

    cout << my_v[K - 1];
    

    return 0;
}