#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(NULL);
	ios::sync_with_stdio(false);

    int n;
    cin >> n;
    pair<int,int> my_p[51];


    for(int i = 0 ; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        my_p[i] = {a,b};
    }

    for(int i = 0; i < n; i++)
    {
        int rank = 1;
        for(int j = 0; j < n; j++)
        {
            if ((my_p[i].first < my_p[j].first) && (my_p[i].second < my_p[j].second))
            {
                rank++;
            }
        }
        cout << rank << " ";
    }

    

    return 0;
}