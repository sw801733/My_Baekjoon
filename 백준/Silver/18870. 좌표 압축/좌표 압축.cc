#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <algorithm>
#include <vector>
#include <ctype.h>
#include <math.h>
#include <map>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;

    cin >> N;
    vector<long long> my_v;
    vector<long long> temp;

    for (int i = 0; i < N; i++)
    {
        long long a;
        cin >> a;
        temp.push_back(a);

        my_v.push_back(a);
    }

    sort(my_v.begin(), my_v.end());
    my_v.erase(unique(my_v.begin(), my_v.end()), my_v.end());

    for (int i = 0; i < N; i++)
    {
        cout << lower_bound(my_v.begin(), my_v.end(), temp[i]) - my_v.begin() << " ";
    }

    return 0;
}