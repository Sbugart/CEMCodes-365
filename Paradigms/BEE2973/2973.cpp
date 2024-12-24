#include <iostream>
#include <vector>
using namespace std;

int main(){

    int quant, comp, temp, aux;
    cin >> quant >> comp >> temp;

    vector<int> pipocas;
    for(int i = 0; i < quant; i++){
        cin >> aux;
        pipocas.push_back(aux);
    }

    

    return 0;
}