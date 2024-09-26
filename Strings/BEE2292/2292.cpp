#include <iostream>
#include <string>
using namespace std;

int main(){

    long long int repeticoes, binario, aux, fim;
    int quantidade;
    cin >> quantidade;
    string pisca;
    
    for(int i = 0; i < quantidade; i++){
        binario = 0;
        cin >> pisca >> repeticoes;
        for(int i = (int) pisca.size(); i >= 0; i--){
            binario = binario << 1;
            if(pisca[i] == 'O') binario++;
        }
        fim = repeticoes + binario;
        binario = 1;
        for(int i = 0; i < (int)pisca.size(); i++){
            aux = fim & binario;
            aux != 0 ? (cout << 'O') : (cout << 'X');
            binario = (binario << 1);
        }
        cout << endl;
    }

    return 0;
}