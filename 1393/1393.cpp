#include <iostream>
using namespace std;

int main(){
    int n;
    while(cin >> n && n != 0){

        if(n == 1){
            cout << 1 << endl;
            continue;
        }

        if(n == 2){
            cout << 2 << endl;
            continue;
        }

        long long prev2 = 1;
        long long prev1 = 2;
        long long atual = 0;

        for(int i = 3; i <= n; i++){
            atual = prev1 + prev2;
            prev2 = prev1;
            prev1 = atual;
        }

        cout << atual << endl;
    }

    return 0;
}