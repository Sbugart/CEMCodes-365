#include <stdio.h>
#include <math.h>

int main(){
    long long int quant = 0, x1 = 0, x2, y1 = 0, y2;
    long long int deltax, deltay;
    long double dist = 0;
    scanf("%ld", &quant);
    for(int i = 0; i < quant; i++){
        scanf("%ld %ld", &x2, &y2);
        deltax = x2 - x1;
        deltay = y2 - y1;
        deltax *= deltax;
        deltay *= deltay;
        dist += sqrtl(deltax + deltay);
        x1 = x2;
        y1 = y2;
    }
    x2 = 0; y2 = 0;
    deltax = x2 - x1;
    deltay = y2 - y1;
    deltax *= deltax;
    deltay *= deltay;
    dist += sqrtl(deltax + deltay);
    printf("%lf\n", dist);

    return 0;
}