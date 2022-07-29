#include <iostream>

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    
    long long arr[101];
    arr[1] = 1;
    arr[2] = 1;
    arr[3] = 1;
    
    for(int i = 0; i < T; i++)
    {
        int N;
        cin >> N;
        for(int j = 4; j <= N; j++)
        {
            arr[j] = arr[j - 2]  + arr[j - 3];
        }

        cout << arr[N] << "\n";
        
    }

    return 0;
}