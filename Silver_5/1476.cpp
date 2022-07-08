#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int E, S, M;
    int year = 1;
    cin >> E >> S >> M;

    while(E != 1 || S != 1 || M != 1)
    {
        year++;
        if (E == 1)
        {
            E = 16;
        }
        if (S == 1)
        {
            S = 29;
        }
        if (M == 1)
        {
            M = 20;
        }
        E--;
        S--;
        M--;

    }
    cout << year;
    return 0;
}