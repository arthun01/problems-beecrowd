#include <iostream>
#include <vector>
using namespace std;

struct Pedido{
    int tempo;
    int pizzas;
};

int main(){
    int n = -1;

    while(n != 0){
        cin >> n;
        if(n == 0) break;

        int p;
        cin >> p;

        vector<int> dp(p + 1, 0);
        vector<Pedido> pedidos(n);

        for(int i = 0; i < n; i++){
            cin >> pedidos[i].tempo;
            cin >> pedidos[i].pizzas;
        }

        for(int i = 0; i < n; i++){
            int tempo = pedidos[i].tempo;
            int pizzas = pedidos[i].pizzas;

            for(int j = p; j >= pizzas; j--){
                dp[j] = max(dp[j], dp[j - pizzas] + tempo);
            }
        }

        cout << dp[p] << " min." << endl;
    }

    return 0;
}