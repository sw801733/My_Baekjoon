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
    int N;
    cin >> N;

    vector<int> v_x;
    vector<int> v_y;
    for (int i = 0; i < N; i++)
    {
        int x, y;
        cin >> x >> y;
        v_x.push_back(x);
        v_y.push_back(y);
    }

    sort(v_x.begin(), v_x.end());
    sort(v_y.begin(), v_y.end());

    cout << abs((v_x.front() - v_x.back()) * (v_y.front() - v_y.back()));

    return 0;
}