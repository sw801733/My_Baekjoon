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
    int A, B, m;
    stack<int> my_s;

    cin >> A >> B;
    cin >> m;

    int dec = 0;
    for (int i = 0; i < m; i++)
    {
        int n;
        cin >> n;
        dec += pow(A, m - i - 1) * n;
    }

    while (dec != 0)
    {

        my_s.push(dec % B);
        dec /= B;
    }

    while (!my_s.empty())
    {
        cout << my_s.top() << " ";
        my_s.pop();
    }

    return 0;
}
