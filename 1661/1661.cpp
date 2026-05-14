#include <iostream>
using namespace std;

int main(){
    int n;

    while(cin >> n && n != 0){

        long long x;
        long long acumulador = 0;
        long long trabalho = 0;

        for(int i = 0; i < n; i++){
            cin >> x;
            acumulador += x;
            trabalho += abs(acumulador);
        }

        cout << trabalho << endl;
    }

    return 0;
}