#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <algorithm>
#include <vector>
#include <ctype.h>
#include <math.h>

using namespace std;

int main()
{
    while (1)
    {
        int n;
        cin >> n;
        if (n == -1)
            break;
        vector<int> my_v;

        int sum = 0;

        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                my_v.push_back(i);
                sum += i;
            }
        }
        // cout << sum << endl;
        if (sum == n)
        {
            cout << n << " "
                 << "="
                 << " ";
            for (int i = 0; i < my_v.size() - 1; i++)
            {
                cout << my_v[i] << " "
                     << "+"
                     << " ";
            }
            cout << my_v.back() << "\n";
        }
        else
        {
            cout << n << " is NOT perfect."
                 << "\n";
        }
    }

    return 0;
}