#include <bits/stdc++.h>
using namespace std;

int main(){

    int casos;
    vector<int> letras(26, 0);
    char aux;
    while(cin >> casos){
        getchar();
        for(int k = 0; k < casos; k++){
            letras.clear();
            letras.resize(26, 0);
            aux = getchar();
            while(aux != '\n'){
                if((aux >= 'a' && aux <= 'z')) letras[aux - 'a']++;
                if((aux >= 'A' && aux <= 'Z')) letras[aux - 'A']++;
                aux = getchar();
            }

            int maior = 0;
            vector<int> pos;
            for(int i = 0; i < 26; i++){
                if(maior < letras[i]){
                    maior = letras[i];
                    pos.clear();
                    pos.push_back(i);
                }
                else if(maior == letras[i]){
                    pos.push_back(i);
                }
            }
            for(int i = 0; i < (int)pos.size();i++){
                cout << (char)('a' + pos[i]);
            }
            cout << endl;
        }
    }

    return 0;
}