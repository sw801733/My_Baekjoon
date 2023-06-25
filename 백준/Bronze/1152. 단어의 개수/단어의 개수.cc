#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string S;
    getline(cin, S);

    if (S[0] == ' ')
    {
        S.erase(0, 1);
    }
    istringstream iss(S);

    string token;
    int cnt = 0;

    while (getline(iss, token, ' '))
    {
        cnt += 1;
    }

    cout << cnt;

    return 0;
}