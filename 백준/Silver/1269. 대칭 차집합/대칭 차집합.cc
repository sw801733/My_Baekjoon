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

    int N, M;
    cin >> N >> M;
    int cnt = 0;

    map<int, bool> A;

    for (int i = 0; i < N + M; i++)
    {
        int a;
        cin >> a;
        if (A[a] == true)
        {
            A.erase(a);
        }
        else
            A[a] = true;
    }

    cout << A.size();

    return 0;
}