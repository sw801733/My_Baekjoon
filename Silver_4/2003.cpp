#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    int cnt = 0;
    vector<int>my_v;

    cin >> N >> M;

    for(int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        my_v.push_back(a);
    }

    for(int i = 0; i < N; i++)
    {
        int sum = 0;
        for(int j = i; j < N;j++)
        {
            sum += my_v[j];
            if (sum == M)
            {
                cnt++;
                break;
            }
            else if (sum > M)
            {
                break;
            }
            
        }
    }

    cout << cnt; 
    return 0;
}