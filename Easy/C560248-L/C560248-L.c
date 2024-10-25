#include <stdio.h>

int main(){
    long long int entrada;
    scanf("%Ld", &entrada);
    long long int atual, anterior;
    long long int i;
    for(i = 0; i < entrada; i++){
        if(i == 0){
            atual = 2 * (i + 1);
        }
        else{
            atual = 2 * (i + 1) + i + anterior;
        }
        anterior = atual;
    }
    printf("%Ld\n", atual);
    return 0;
}
