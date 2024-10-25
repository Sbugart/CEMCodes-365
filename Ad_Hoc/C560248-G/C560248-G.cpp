#include <iostream>
#include <vector>

using namespace std;

struct pintura
{
    int inicio, fim;
};


int main(){

    int tam, quant, pintou = 0, ga = 0, gui = 0, flag;
    cin >> tam >> quant;

    vector<int> muro (tam, 0);
    vector<pintura> vec(quant);

    for(int i = 0; i < quant; i++){
        cin >> vec[i].inicio >> vec[i].fim;
    }    
    
    flag = quant % 2 == 0 ? 1 : 0;
    
    for(int i = quant - 1; i >= 0; i--){
        for(int j = vec[i].inicio; j < (vec[i].fim + vec[i].inicio); j++){
            if(muro[j] == 0){
                muro[j] = vec[i].fim + vec[i].inicio;
                pintou ++;
                if(flag == 1) gui++;
                else ga++;
            }
            else{
                j = muro[j] - 1;
            }
        }   
        flag = !flag;
        if(pintou == tam) break;
    }
    if(gui > ga) cout << "Guilherme" << endl;
    else{
        if(ga == gui) cout << "Empate" << endl;
        else cout << "Gabriela" << endl;
    }

    return 0;
}