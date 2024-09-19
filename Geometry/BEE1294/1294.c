#include <stdio.h>
#include <math.h>

int main()
{
    double w, l, x1, x2, delta, volume1, volume2, vet[3];
    
    while( (scanf("%lf", &w)) == 1){
        scanf("%lf", &l);
        delta = sqrt(l * l - l*w + w*w);
        x1 = (l + w + delta) / 6.000;
        x2 = (l + w - delta) / 6.000;
        vet[1] = 0.0;
        volume1 = 24*x1 - 4*(l + w);
        volume2 = 24*x2 - 4*(l + w);
        if(volume1 < volume2){
            vet[0] = x1;
            vet[2] = x2;
        } 
        else{
            vet[0] = x2;
            vet[2] = x1;
        }
        volume1 = l*w*vet[2] - 2*vet[2]*vet[2]*(l+w) + 4 * vet[2] * vet[2]*vet[2];
        printf("%.3lf %.3lf ", vet[0], vet[1]);
        if(volume1 < 0) printf("%.3lf\n", l < w ? (l/2.0) : (w/2.0));
        else printf("%.3lf\n", vet[2]);
    }
    
    return 0;
}