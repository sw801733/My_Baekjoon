#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long S;
    long long sum = 0;
    int n = 1;
    int idx = 0;
    cin >> S;
    
    while(sum <= S)
    {
        sum += n;
        n++;
        idx++;
    }

    cout << idx - 1;
    return 0;
}