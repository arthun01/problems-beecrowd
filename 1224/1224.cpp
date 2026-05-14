// inacabada

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> cartoes(n);

    int maxCartoes = 0;
    int atual = 0;

    for(int i = 0; i < n; i++){
        cin >> cartoes[i];
    }

    int nn = n - 1;
    for(int i = 0; i < n; i++){
        atual = max(cartoes[i], cartoes[nn]);
        nn--;
        maxCartoes = max(maxCartoes, atual);
    }

    cout << maxCartoes << endl;

    return 0;
}