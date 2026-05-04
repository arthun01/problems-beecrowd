#include <stdio.h>
#include <iostream>
using namespace std;
 
int main() {
    int n[4];
    for(int i = 0; i < 4; i++){
        cin >> n[i];
    }
    
    int counter = 0;
    for(int i = 0; i < 4; i++){
        if(i == 3){
            counter += n[i];
        }else{
            counter = counter + (n[i] - 1);
        }
    }
    cout << counter << endl;
 
    return 0;
}