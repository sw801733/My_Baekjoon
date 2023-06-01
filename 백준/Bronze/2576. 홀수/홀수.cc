#include <iostream>

using namespace std;

int main(){
    int n, sum = 0, small = 999;
    for(int i = 0; i < 7; i++){
        cin >> n;
        if(n % 2 == 1){
            if(n < small) small = n;
            sum += n;
        }
    }
    if(sum == 0) cout << -1;
    else cout << sum << '\n' << small;
}