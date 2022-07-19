#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    int max = 0;
    vector<int> my_v;
    
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        my_v.push_back(a);
    }
    
    sort(my_v.begin(),my_v.end());

    for(int i = 0; i < N; i++)
    {
        int temp = my_v[i] * (N - i);
        if (max < temp)
            max = temp;

    }

    cout << max;

    return 0;
}