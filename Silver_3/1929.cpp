#include <iostream>

using namespace std;

int prime(int n)
{
    if (n == 1)
        return 0;
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    
    cin >> M >> N;

    for(int i = M; i <= N; i++)
    {
        if(prime(i) == 1)
            cout << i << "\n";
    }

}