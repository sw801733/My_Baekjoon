#include <iostream>
#include <stack>

using namespace std;

int main()
{

    string parenthesisStr;
    stack<char> my_s;
    cin >> parenthesisStr;

    int ironbarNum = 0;
    int flag = 0;
    int cuttedNum = 0;

    for(int i = 0; i < parenthesisStr.size(); i++)
    {
        if (parenthesisStr[i] == '(')
        {
            my_s.push(parenthesisStr[i]);
        }
        else
        {
            my_s.pop();
            if (parenthesisStr[i - 1] == '(')
                cuttedNum += my_s.size();
            else
            {
                cuttedNum++;
            }
        }
    }

    cout << cuttedNum;
    return 0;
}