#include <iostream>
#include <vector>

using namespace std;

int main(){
    int count, CPUs, processamentos;
    vector<char> processos;
    char entrada;

    while(cin >> entrada){
        processos.push_back(entrada);
        processamentos = 0;
        count = 0;
        
        do
        {
            entrada = getchar();
            processos.push_back(entrada);
        } while (entrada != '\n');
        cin >> CPUs;
        
        for(int i = 0; i < (int)processos.size(); i++){
            if(processos[i] == 'R'){
                count++;
                if(count == CPUs){
                    processamentos++;
                    count = 0;
                }
            }
            else{
                if(processos[i] == 'W'){
                    count > 0 ? processamentos += 2 : processamentos++;
                    count = 0;
                }
                else{
                    if(count > 0) processamentos++;
                }
            }
        }
        cout << processamentos << endl;
        processos.clear();
        
    }
}