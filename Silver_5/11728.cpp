#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    vector<int> my_v;
    cin >> N >> M;

    for(int i = 0; i < N; i++)
    {
        int A;
        cin >> A;
        my_v.push_back(A);
    }

    for(int i = 0; i < M; i++)
    {
        int B;
        cin >> B;
        my_v.push_back(B);
    }

    sort(my_v.begin(), my_v.end());

    for(int i = 0; i < my_v.size(); i++)
    {
        cout << my_v[i] << " ";
    }

}