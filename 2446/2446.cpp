#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int valorFinal;
    int numMoedas;
    cin >> valorFinal;
    cin >> numMoedas;

    vector<int> tiposMoedas(numMoedas);
    for(int i = 0; i < numMoedas; i++){
        cin >> tiposMoedas[i];
    }

    vector<bool> dp(valorFinal + 1, false);

    dp[0] = true;

    for(int i = 0; i < numMoedas; i++){
        int moedaAtual = tiposMoedas[i];

        for(int v = valorFinal; v >= moedaAtual; v--){
            if(dp[v - moedaAtual] == true){
                dp[v] = true;
            }
        }
    }

    if(dp[valorFinal]) cout << "S" << endl;
    else cout << "N" << endl;

    return 0;
}
