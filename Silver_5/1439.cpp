#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string S;
    int cnt1 = 0;
    int cnt2 = 0;
    int f1 = 0;
    int f2 = 0;


    cin >> S;


    for(int i = 0; i < S.size(); i++)
    {
        if(S[i] != S[i+1])
        {
            cnt1++;
        }
    }

    if(!cnt1)
        cout << cnt1;
    else
        cout << cnt1 /2;
    return 0;
}