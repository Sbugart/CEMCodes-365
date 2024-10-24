#include <bits/stdc++.h>

using namespace std;

struct cavalo
{
    string name;
    vector<cavalo*> pai;
    int id;
};

int pertence(string nome, vector<cavalo> &cavalos){
    for(int i = 0; i < (int)cavalos.size(); i++){
        if(!nome.compare(cavalos[i].name)) return i;
    }
    return -1;
}

vector<int> BFS(vector<cavalo> &cavalos, string origem){
    vector<int> explorados (cavalos.size(), 0);
    int pos = pertence(origem, cavalos);

    queue<cavalo*> fila;
    fila.push(&cavalos[pos]);

    while(!fila.empty()){
        cavalo *atual = fila.front();
        fila.pop();
        //cout << atual->name << " " << fila.size() << " ";
        explorados[atual->id] = 1;
        for(int i = 0; i < (int)atual->pai.size(); i++){
            if(explorados[atual->pai[i]->id] == 0){
                fila.push(atual->pai[i]);
            }
        }
    }
    //cout << endl;
    return explorados;
}

int main(){

    int nos, vertices, casos, fim = 0, flag;

    cin >> nos >> vertices >> casos; 

    vector<int> posicoes(3);
    vector<cavalo> cavalos;
    cavalo aux;

    for(int i = 0; i < vertices; i++){
        for(int j = 0; j < 3; j++){
            cin >> aux.name;
            posicoes[j] = pertence(aux.name, cavalos);
            if(posicoes[j] == -1){
                aux.id = fim;
                cavalos.push_back(aux);
                posicoes[j] = fim;
                fim++;
            }
        }
        cavalos[posicoes[2]].pai.push_back(&cavalos[posicoes[0]]);
        cavalos[posicoes[2]].pai.push_back(&cavalos[posicoes[1]]);
    }

    vector<int> cav1;
    vector<int> cav2;

    for(int i = 0; i < casos; i++){
        cin >> aux.name;
        cav1 = BFS(cavalos, aux.name);
        cin >> aux.name;
        cav2 = BFS(cavalos, aux.name);
        flag = 0;
        for(int j = 0; j < (int)cav1.size(); j++){
            //cout << cav1[j] << " " << cav2[j] << endl;
            if(cav1[j] == 1 && cav2[j] == 1) flag = 1;
        }
        if(flag) cout << "verdadeiro" << endl;
        else cout << "falso" << endl;
        cav1.clear();
        cav2.clear();
    }
    return 0;
}