#include <iostream>
#include <map>

using namespace std;

int main(){
    int n;
    while(cin >> n && n != 0){
        map<long long, int> mapaFreqs;
        
        for(int i = 0; i < n; i++){
            long long numero;
            cin >> numero;

            mapaFreqs[numero]++;
        }
        
        bool primeiro = true;
        for(auto par : mapaFreqs){
            if(par.second % 2 != 0){
                if(!primeiro) cout << " ";
                cout << par.first;
                primeiro = false;
            }
        }
        cout << endl;
    }

    return 0;
}