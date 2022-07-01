#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
    
    double a,b,v;
    int days;

    cin >> a >> b >> v;

    days = ceil((v - b) / (a - b));
    // days = (v - b - 1) / (a - b) + 1; // 아예 목표에 도달하기 직전까지로 날짜를 계산 후 하루를 더해줌
    

    cout << days;


    return 0;
}