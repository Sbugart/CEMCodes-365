#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long int num, n = 0;
    cin >> num;
    vector <long long int> coef;
    vector <long long int> potencias;
    if(num % 5 == 0) cout << -1 << endl;
    else{
        long long int soma_pot = 0, aux, somas = 0;
        for(long long int i = 1; i <= num; i*= 5){
            potencias.push_back(i * 5);
            soma_pot += i;
            coef.push_back(soma_pot);
        }
        for(int i = (int)coef.size() - 1; i >= 0; i--){
            aux = 4;
            while( (aux * coef[i]) > (num - somas) ) aux--;
            somas += aux * coef[i];
            n += potencias[i] * aux;
        }
        cout << n  + 2 << endl;
    }
    return 0;
}