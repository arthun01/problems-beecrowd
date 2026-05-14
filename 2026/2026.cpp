#include <iostream>
#include <vector>
using namespace std;

int main(){
    int g;
    cin >> g;

    for(int i = 0; i < g; i++){
        int numPacotes;
        cin >> numPacotes;
        int pesoGalho;
        cin >> pesoGalho;

        vector<int> dp(pesoGalho + 1, 0);
        dp[0] = 0;

        for(int j = 0; j < numPacotes; j++){
            int enfeitesPorPac;
            cin >> enfeitesPorPac;

            int pesoCadaPac;
            cin >> pesoCadaPac;

            for(int k = pesoGalho; k >= pesoCadaPac; k--){
                dp[k] = max(dp[k], dp[k - pesoCadaPac] + enfeitesPorPac);
            }
        }

        cout << "Galho " << i + 1 << ":" << endl;
        cout << "Numero total de enfeites: " << dp[pesoGalho] << endl << endl;

    }

    return 0;
}