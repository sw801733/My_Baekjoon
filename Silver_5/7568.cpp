#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(NULL);
	ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<pair<int, int>> my_v;


    for(int i = 0 ; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        my_v.push_back(make_pair(a,b));
    }

    for(int i = 0; i < n; i++)
    {
        int rank = 1;
        for(int j = 0; j < n; j++)
        {
            if (my_v[i].first < my_v[j].first)
            {
                if (my_v[i].second < my_v[j].second)
                {
                    rank++;
                }
            }
        }
        cout << rank << " ";
    }

    

    return 0;
}