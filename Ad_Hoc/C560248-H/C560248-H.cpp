#include <stdio.h>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <algorithm>
using namespace std;


struct item
{
    long double peso, values, VP;
};


int main(){
    long double quant, peso;
    long double valores = 0;
    cin >> quant >> peso;
    vector<item> itens;
    item aux;
    for(int i = 0; i < quant; i++){
        cin >> aux.peso >> aux.values;
        aux.VP = aux.values / aux.peso;
        itens.push_back(aux);
    }

    sort(itens.begin(), itens.end(), [](item a, item b) {return a.VP < b.VP;});

    for(int i = 0; i < quant; i++){
        if(peso == 0) break;

        if(peso >= itens.back().peso){
            peso -= itens.back().peso;
            valores += itens.back().values;
            itens.pop_back();
        }
        else{
            valores += (itens.back().values * peso) / itens.back().peso;
            break;
        }
    }
    printf("%.2Lf\n", valores);


    return 0;
}
