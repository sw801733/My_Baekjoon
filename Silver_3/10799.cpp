#include <iostream>


using namespace std;

int main()
{

    string parenthesisStr;
    cin >> parenthesisStr;

    int ironbarNum = 0;
    int flag = 0;
    int cuttedNum = 0;

    for(int i = 0; i < parenthesisStr.size(); i++)
    {
        if (flag == 1 && parenthesisStr[i] == '(')
        {
            ironbarNum++;
        }

        if (parenthesisStr[i] == '(')
        {  
            flag = 1;
        }
        else
        {
            if (flag == 1)
                cuttedNum += ironbarNum;
            else if (flag == 0)
            {
                cuttedNum++;
                ironbarNum--;
            }
            flag = 0;
        }
    }

    cout << cuttedNum;
    return 0;
}