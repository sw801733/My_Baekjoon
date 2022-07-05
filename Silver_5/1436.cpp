#include <iostream>
#include <string>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;

    string end_number = "666";
    int number = 666;
    int end_flag = 0;
    int cnt = 0;
    while(1)
    {
        string temp = to_string(number);
        if (temp.find(end_number) != string::npos)
            cnt += 1;

        if(cnt == n)
        {
            cout << number;
            break;
        }
        number += 1;

    }
    return 0;
}