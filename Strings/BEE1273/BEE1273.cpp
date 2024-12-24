#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<string> entradas;
    int casos, max_tam = 0;
    cin >> casos;
    while(casos != 0){

        entradas.clear();
        entradas.resize(casos);
        max_tam = 0;

        for(int i = 0; i < casos; i++){
            cin >> entradas[i];
            if(max_tam < (int)entradas[i].size()) max_tam = (int)entradas[i].size();
        }

        for(int i = 0; i < casos; i++){
            for(int j = 0; j < (int)(max_tam - (int)entradas[i].size()); j++) cout << " ";
            cout << entradas[i] << endl;
        }

        cin >> casos;
        if(casos != 0) cout << endl;
    }


    return 0;
}