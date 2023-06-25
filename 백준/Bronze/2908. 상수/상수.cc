#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <algorithm>

using namespace std;

int main()
{
    string A, B;
    cin >> A >> B;

    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());

    int n_A = stoi(A);
    int n_B = stoi(B);
    int answer = (n_A < n_B) ? n_B : n_A;
    cout << answer;
    return 0;
}