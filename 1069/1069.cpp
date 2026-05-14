#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    
    while(n > 0){
        string entrada;
        getline(cin, entrada);
        int count = 0;
        
        int tam = entrada.length();

        stack<char> pilha;
        for(int i = 0; i < tam; i++){
            if(entrada[i] == '<'){
                pilha.push('<');
            }else if(entrada[i] == '>'){
                if(!pilha.empty()){
                    pilha.pop();
                    count++;
                }
            }
        }

        cout << count << endl;
        n--;
    }

    return 0;
}