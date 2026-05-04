#include <iostream>
using namespace std;

int main(){
    int n;

    while(cin >> n){
        int custoPorDia;
        cin >> custoPorDia;

        int maxLucro = 0;
        int atual = 0;

        for(int i = 0; i < n; i++){
            int receita;
            cin >> receita;

            int valor = receita - custoPorDia;

            atual = max(0, atual + valor);
            maxLucro = max(maxLucro, atual);
        }

        cout << maxLucro << endl;
    }


    return 0;
}