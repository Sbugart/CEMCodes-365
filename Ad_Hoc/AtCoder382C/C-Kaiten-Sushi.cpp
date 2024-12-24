#include <bits/stdc++.h>
using namespace std;

struct pessoa
{
    int id;
    int deli;
};

int main(){

    int n, m, menor;
    cin >> n >> m;
    vector<int> bs(m);
    vector<int>come(m, 0);
    vector<pessoa> as(n);
    vector<vector<pessoa>> blocos(300);
    vector<int> ids;

    for(int i = 0; i < n; i++){
        cin >> as[i].deli;
        as[i].id = i + 1;
    }

    for(int i = 0; i < m; i++){
        cin >> bs[i];
    }

    sort(as.begin(), as.end(), [](pessoa a, pessoa b){
        return a.deli < b.deli;
    });

    int tam = 1;
    for(int i = 0; i < n; i++){
        if(as[i].deli < tam * 1000){
            blocos[tam - 1].push_back(as[i]);
        }
        else{
            tam ++;
            i--;
        }
    }

    for(int i = 0; i < tam; i++){
        menor = 3*1e5;
        sort(blocos[i].begin(), blocos[i].end(), [](pessoa a, pessoa b){
            return a.id < b.id;
        });
        for(const auto& valor : blocos[i]){
            if(valor.id < menor) menor = valor.id;
        }
        ids.push_back(menor);
    }

    for(int i = 0; i < m; i++){
        int bloco, menor = 3e5, aux = -1;
        bloco = bs[i] / 1000;
        for(int j = 0; j < bloco; j++){
            if(ids[j] < menor) menor = ids[j];
        }
        if(bloco < tam){
            for(const auto& value : blocos[bloco]){
                if(value.deli <= bs[i]){
                    aux = value.id;
                    break;
                }
            }
        }
        if(aux == -1 && menor == 3e5) cout << -1 << endl;
        else{
            if(aux == -1) cout << menor << endl;
            else if(menor == 3e5) cout << aux << endl;
            else{
                cout << (menor < aux ? menor : aux) << endl;  
            }
        }
    }

    return 0;
}