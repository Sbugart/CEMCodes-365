#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

struct jog
{
    int exp = 0;
    vector<jog> passe;
    jog *pai = nullptr;
    int name;

};

int main(){

    vector<jog> jogadores(11);
    vector<int> dist(11);
    int aux;
    int jog1, jog2;
    for(int i = 0; i < 11; i++){
        jogadores[i].name = i;
        dist[i] = 100;
    }

    int passes;
    cin >> passes;
    for(int i = 0; i < passes; i++){
        cin >> jog1 >> jog2;
        jogadores[jog1 - 1].passe.push_back(jogadores[jog2 - 1]);
    }


    dist[0] = 0;
    vector<jog> explora;
    
    while(explora.size() != jogadores.size()){
        int menor = 101, pos;
        for(int i = 0; i < 11; i++){
            if( jogadores[i].exp == 0 && menor > dist[i]){
                menor = dist[i];
                pos = i;
            }

        }
        explora.push_back(jogadores[pos]);
        jogadores[pos].exp = 1;

        for(int i = 0; i < (int)jogadores[pos].passe.size(); i++){
            aux = jogadores[pos].passe[i].name;
            if(jogadores[aux].exp == 0){
                if(dist[pos] + 1 < dist[aux]){
                    dist[aux] = dist[pos] + 1;
                    jogadores[aux].pai = &jogadores[pos];
                }
            }
            
        }
    }

    if(dist[8] != 100) cout << dist[8] + 1 << endl;
    else cout << -1 << endl;



    return 0;
}