#include <iostream>



using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    int cnt = 0;


    cin >> N;


    for(int i = 100; i <= N; i++)
    {
        int a = i / 100;
        int b = (i / 10) % 10;
        int c = i % 10;

        if (a - b == b - c)
            cnt++;
    }
    if (N < 100)
        cout << N;
    else
    {
        cout << 99 + cnt;
    }

    
}