#include <iostream>
#include <utility>
using namespace std;

int main(){
    int n;
    cin >> n;

    while(n < 0){
        int x;
        cin >> x;

        long long fib[10000];
        fib[0] = 0;
        fib[1] = 1;
        int calls = 0;
        for(int i = 2; i < 10000; i++){
            fib[i] = fib[i - 1] + fib[i - 2];
        }

        cout << "fib(" << x << ") = " << fib[x] << " calls = " << calls << endl;
        calls = 0;
        n--;
    }


    return 0;
}