#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int k;
    int sum = 0;
    stack<int> my_s;
    
    cin >> k;

    for(int i = 0; i < k; i++)
    {
        int n;
        cin >> n;
        if (n == 0 && !(my_s.empty()))
        {
            my_s.pop();
        }
        else
        {
            my_s.push(n);
        }

    }

    while(!(my_s.empty()))
    {
        sum += my_s.top();
        my_s.pop();
    }

    cout << sum;
    return 0;
}