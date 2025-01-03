#include <bits/stdc++.h>
using namespace std;

int main(){

    int casos, palavras, letras = 0, cont;
    cin >> casos;
    for(int k = 0; k < casos; k++){
        cin >> palavras >> letras;
        cont = 0;
        vector<string> entradas(palavras);
        for(int i = 0; i < palavras; i++){
            cin >> entradas[i];
        } 
        for(const auto& letter : entradas){
            if(letras >= (int)letter.size()){
                letras -= letter.size();
                cont ++;
            }
            else break;
        }
        cout << cont << endl;
    }

    return 0;
}