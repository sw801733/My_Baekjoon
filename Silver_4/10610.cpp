#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string N;
    int sum = 0;
    cin >> N;

    sort(N.begin(), N.end(),
    [](char a, char b)
    {
        return a > b;
    }
    );

    if (*(N.end() - 1) != '0')
    {
        cout << -1;
    }

    else
    {
        for(int i = 0; i < N.size();i++)
        {
            sum += int(N[i]) - 48;
        }
        if (sum % 3 == 0)
            cout << N;
        else
            cout << -1;
    }





    return 0;
}