#include <bits/stdc++.h>
using namespace std;

int main(){

    int testes, tam, score, pos;
    vector<int> vetor;
    cin >> testes;
    for(int caso = 0; caso < testes; caso++){
        cin >> tam;
        score = 0;
        vetor.clear();
        vetor.resize(tam);
        for(int i = 0; i < tam; i++){
            cin >> vetor[i];
        }
        sort(vetor.begin(), vetor.end());
        pos = 0;
        while(pos <= tam - 2){
            if(vetor[pos] == vetor[pos + 1]){
                score++;
                pos += 2;
            }
            else{
                pos++;
            }
        }
        cout << score << endl;
    }


    return 0;
}