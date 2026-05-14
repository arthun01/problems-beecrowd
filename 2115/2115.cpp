#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Tarefa{
    int tempoDisponivel;
    int tempoProcessamento;
};

int main(){
    int n;
    while(cin >> n){
        vector<Tarefa> tarefas(n);

        for(int i = 0; i < n; i++){
            cin >> tarefas[i].tempoDisponivel;
            cin >> tarefas[i].tempoProcessamento;
        }

        sort(tarefas.begin(), tarefas.end(), [](const Tarefa &x, const Tarefa &y) {
            if(x.tempoDisponivel != y.tempoDisponivel) return x.tempoDisponivel < y.tempoDisponivel;
            return x.tempoProcessamento < y.tempoProcessamento;
        });

        int c = 1;
        for(int i = 0; i < n; i++){
            c = max(c, tarefas[i].tempoDisponivel);
            c += tarefas[i].tempoProcessamento;
        }

        cout << c << endl;
    }

    return 0;
}