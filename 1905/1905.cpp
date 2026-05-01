#include <iostream>
#include <vector>
using namespace std;

bool jogar(vector<vector<int>>&matriz, int x, int y){
    if(x < 0 || x >= 5 || y < 0 || y >= 5) return false;
    if(matriz[x][y] == 1) return false;
    if(x == 4 && y == 4) return true;

    matriz[x][y] = 1;
    // return true;
    
    return 
        jogar(matriz, x-1, y) ||
        jogar(matriz, x+1, y) ||
        jogar(matriz, x, y-1) ||
        jogar(matriz, x, y+1);
}

int main(){
    // entrada de casos
    int n;
    cin >> n;


    for(int i = 0; i < n; i++){
        // criação da matriz 5x5
        vector<vector<int>> matriz(5, vector<int>(5));

        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 5; j++){
                cin >> matriz[i][j];
            }
        }

        if(jogar(matriz, 0, 0)){
            cout << "COPS" << endl;
        } else {
            cout << "ROBBERS" << endl;
        }
    }


    return 0;
}