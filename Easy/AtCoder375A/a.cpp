#include <iostream>
#include <string>
using namespace std;

int main(){

    int tam, quant = 0;
    string s;
    cin >> tam >> s;
    for(int i = 0; i < tam; i++){
        if(s[i] == '.'){
            if(i != 0 && i != (tam - 1)){
                if(s[i - 1] == '#' && s[i + 1] == '#') quant++;
            }
        }
    }
    cout << quant << endl;

    return 0;
}