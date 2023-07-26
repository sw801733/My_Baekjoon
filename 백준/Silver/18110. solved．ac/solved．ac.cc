#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <stack>
#include <queue>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> my_v;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        my_v.push_back(a);
    }

    sort(my_v.begin(), my_v.end());
    int ex_num = round((float(n) * 0.15));

    my_v.erase(my_v.begin(), my_v.begin() + ex_num);
    my_v.erase(my_v.end() - ex_num, my_v.end());

    if (my_v.empty())
    {
        cout << 0;
        return 0;
    }

    int mean = 0;
    int sum = 0;
    for (int i : my_v)
    {
        sum += i;
    }

    mean = round((float(sum) / my_v.size()));

    cout << mean;

    return 0;
}
