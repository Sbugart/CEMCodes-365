#include <stdio.h>
#include <stdlib.h>
int main(){

    int tab;
    int x1,x2,y1,y2;
    scanf("%d %d %d %d %d", &tab, &x1, &y1, &x2, &y2);
    printf("%d\n", abs(x1 - x2) + abs(y1 - y2));

    return 0;
}