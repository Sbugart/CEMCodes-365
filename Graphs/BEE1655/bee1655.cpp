#include <bits/stdc++.h>
using namespace std;

struct graph{

    int id;
    vector<graph*> vertices;
    vector<long double> vertices_W;
    int pai;
    long double dist;
};

bool possui(vector<int> exp, int id){
    for(int i = 0; i < (int)exp.size(); i++){
        if(exp[i] == id) return false;
    }
    return true;
}

void Dijkstra(vector<graph> *G, int origem, int tam){
    long double menor = 0;
    (*G)[origem].dist = 100;
    (*G)[origem].pai = origem;
    vector<int> exp;
    graph *no;
    while( exp.size() != (*G).size()){
        menor = 0;
        for(int i = 0; i < tam; i++){
            if(menor < (*G)[i].dist && possui(exp, i)){
                menor = (*G)[i].dist;
                no = &(*G)[i];
            }
        }
        exp.push_back((*no).id);
        for(int i = 0; i < (int)(*no).vertices.size();i++){
            if(possui(exp, (*no).vertices[i]->id)){
                if(((*no).dist * (*no).vertices_W[i] / 100) > (*no).vertices[i]->dist){
                    (*no).vertices[i]->dist = ((*no).dist * (*no).vertices_W[i] / 100);
                    (*no).vertices[i]->pai = (*no).id;
                }
            }
        }
    }
}

int main(){

    int n, m, aux1, aux2;
    long double peso;
    cin >> n;
    vector<graph> G;
    while(n != 0){
        cin >> m;
        G.clear();
        G.resize(n);
        for(int i = 0; i < n; i++){
            G[i].id = i;
            G[i].pai = -1;
            G[i].dist = 0;
        }

        for(int i = 0; i < m; i++){
            cin >> aux1 >> aux2 >> peso;
            G[aux1 - 1].vertices.push_back(&G[aux2 - 1]);
            G[aux1 - 1].vertices_W.push_back(peso);
            G[aux2 - 1].vertices.push_back(&G[aux1 - 1]);
            G[aux2 - 1].vertices_W.push_back(peso);
        }

        Dijkstra(&G, 0, n);
        printf("%.6Lf percent\n", G[n - 1].dist);
        cin >> n;
    }

    return 0;
}