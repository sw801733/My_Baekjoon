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
        if(S[i] == '1' && f1 == 0)
        {
            cnt1++;
            f1 = 1;
            f2 = 0;
        }


        if(S[i] == '0' && f2 == 0)
        {
            cnt2++;
            f1 = 0;
            f2 = 1;
        }


    }

    if (cnt1 < cnt2)
        cout << cnt1;
    else if (cnt1 >= cnt2)
        cout << cnt2;

    return 0;
}