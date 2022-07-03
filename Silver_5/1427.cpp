#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(NULL);
	ios::sync_with_stdio(false);

    string str;
    cin >> str;

    sort(str.begin(),str.end(),
    [](int a, int b)
    {
        return a > b;
    }
    );
    cout << str;
    return 0;
}