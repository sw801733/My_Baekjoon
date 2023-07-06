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

    map<int, bool> A;
    map<int, bool> B;

    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        A[a] = true;
    }
    for (int i = 0; i < M; i++)
    {
        int b;
        cin >> b;
        B[b] = true;
    }

    int cnt = 0;
    for (auto iter = B.begin(); iter != B.end(); iter++)
    {
        if (A[iter->first] == false)
            cnt++;
    }
    for (auto iter = A.begin(); iter != A.end(); iter++)
    {
        if (B[iter->first] == false)
            cnt++;
    }

    cout << cnt;

    return 0;
}