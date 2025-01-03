#include <bits/stdc++.h>
using namespace std;

struct valor{
    int value;
    int quant;
};

int main(){

    int teste, tam, matriz, aux;
    cin >> teste;
    map<int, valor> mapa;
    for(int caso = 0; caso < teste; caso++){
        cin >> tam;
        matriz = tam - 2;
        mapa.clear();

        for(int i = 0; i < tam; i++){
            cin >> aux;
            if(mapa.find(aux) != mapa.end()){
                valor& repetido = mapa.at(aux);
                repetido.quant++;
            }
            else{
                mapa[aux] = valor{aux, 1};
            }
        }
        
        for(int i = 1; i * i <= matriz; i++){
            if(matriz % i == 0){
                if(mapa.find(i) != mapa.end()){
                    aux = matriz / i;
                    if(mapa.find(aux) != mapa.end()){
                        cout << i << " " << aux << endl;
                        break;
                    }
                }
            }
        }


    }

    return 0;
}