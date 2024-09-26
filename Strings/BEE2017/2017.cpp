#include <iostream>
#include <string>
using namespace std;

int main(){

    string original;
    cin >> original;
    int k;
    cin >> k;

    int vec[5], posicao, tamanho, menor;
    char entrada;
    for(int i = 0; i < 5; i++) vec[i] = 0;
    tamanho = original.size();
    getchar();
    for(int i = 0; i < 5; i++){
        posicao = 0;
        entrada = getchar();
        while ((entrada != '\n') && (entrada != '\0'))
        {
            if(entrada != original[posicao]) vec[i]++;
            posicao++;
            entrada = getchar();
        }
        vec[i] += tamanho - posicao;
    }
    tamanho += 2;
    for(int i =0; i < 5; i++){
        if(vec[i] < tamanho){
            tamanho = vec[i];
            menor = i + 1;
        }
    }
    if(tamanho <= k) cout <<  menor << endl << tamanho << endl;
    
    else cout << -1 << endl;

    return 0;
}