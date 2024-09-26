#include <iostream>
using namespace std;
#include <vector>

int main(){
    int N, M, entrada, repete;
    vector<int> repetido(10001);
    cin >> N >> M;
    while(N != 0 || M != 0){
        repete = 0;
        for(int i = 0; i < N; i++) repetido[i] = 0;
        for(int i = 0; i < M; i++){
            cin >> entrada;
            if(repetido[entrada - 1] == 1) repete++;
            repetido[entrada - 1] ++;
        }
        cout << repete << endl;
        cin >> N >> M;
    }
    repetido.clear();
    return 0;
}