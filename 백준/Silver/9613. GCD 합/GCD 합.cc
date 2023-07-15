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

int gcd(int a, int b)
{
    int temp;
    while (b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

long long two_pair(vector<int> my_v)
{
    long long sum = 0;
    for (int i = 0; i < my_v.size(); i++)
    {
        for (int j = i + 1; j < my_v.size(); j++)
        {
            sum += gcd(my_v[i], my_v[j]);
        }
    }
    return sum;
}

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        vector<int> my_v;
        long long sum = 0;

        cin >> n;

        for (int j = 0; j < n; j++)
        {
            int a;
            cin >> a;
            my_v.push_back(a);
        }
        sum = two_pair(my_v);
        cout << sum << "\n";
    }

    return 0;
}
