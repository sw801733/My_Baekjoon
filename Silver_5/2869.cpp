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

    cout << days;


    return 0;
}