#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(NULL);
	ios::sync_with_stdio(false);

    int n;
    vector<int> my_v;
    cin >> n;

    while(n > 0)
    {
        my_v.push_back(n % 10);
        n = n / 10;
    }

    sort(my_v.begin(),my_v.end(),
    [](int a, int b){
        return a > b;
    });

    for(int i = 0; i < my_v.size(); i++)
    {
        cout << my_v[i];
    }
    return 0;
}