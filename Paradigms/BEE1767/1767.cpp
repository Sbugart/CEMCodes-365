#include<bits/stdc++.h>
using namespace std;

struct pacote
{
    int quantidade, peso;
};

vector<pacote> sacola;
vector<vector<int>> matriz(51, vector<int>(301, -1));
vector<vector<int>> pesos(51, vector<int>(301, -1));
vector<vector<int>> sacos(51, vector<int>(301, -1));

vector<int> PD_TopDown(int saco, int peso){
    vector<int> saida(3, 0);
    vector<int> vec1(3,0);
    vector<int> vec2(3,0);
    if(peso > 50){
        saida[0] = -1e9;
        return saida;
    }
    if(saco <= 0) return saida;
    if(matriz[peso][saco] != -1){
        saida[0] = matriz[peso][saco];
        saida[1] = pesos[peso][saco];
        saida[2] = sacos[peso][saco];
        return saida;
    }
    vec1 = PD_TopDown(saco - 1, peso + sacola[saco].peso);
    vec2 = PD_TopDown(saco - 1, peso);
    if(vec1[0] + sacola[saco].quantidade >= vec2[0]){
        matriz[peso][saco] = vec1[0] + sacola[saco].quantidade;
        pesos[peso][saco] = vec1[1] + sacola[saco].peso;
        sacos[peso][saco] = vec1[2] + 1;
    }
    else{
        matriz[peso][saco] = vec2[0];
        pesos[peso][saco] = vec2[1];
        sacos[peso][saco] = vec2[2];
    }
    saida[0] = matriz[peso][saco];
    saida[1] = pesos[peso][saco];
    saida[2] = sacos[peso][saco];
    return saida;
}

int main(){

    int casos, quant;
    cin >> casos;
    vector<int> saida(3,0);

    for(int kaso = 0; kaso < casos; kaso ++){
        cin >> quant;

        sacola.clear();
        sacola.resize(quant + 1);
        matriz.assign(51, vector<int>(301, -1));
        pesos.assign(51, vector<int>(301, -1));
        sacos.assign(51, vector<int>(301, -1));
        for(int k = 1; k <= quant; k++){
            cin >> sacola[k].quantidade >> sacola[k].peso;
        }
        saida = PD_TopDown(quant, 0);
        cout << saida[0] << " brinquedos" << endl;
        cout << "Peso: " << saida[1] << " kg" << endl;
        cout << "sobra(m) " << quant - saida[2] << " pacote(s)" << endl << endl;
    }
    return 0;
}