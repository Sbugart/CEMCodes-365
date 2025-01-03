#include <bits/stdc++.h>
using namespace std;

int main(){
    int casos;
    cin >> casos;
    for(int ca = 0; ca < casos; ++ca){
        long long int n,a,b,c;
        cin >> n >> a >> b >> c;
        long long int dias = (n / (a + b + c));
        n -= (a + b + c) * dias;
        dias *= 3;
        if(n > 0){
            n -= a;
            dias++;
        }
        if(n > 0){
            n -= b;
            dias++;
        }
        if(n > 0){
            n -= c;
            dias++;
        }
        cout << dias << endl;

    }
    return 0;
}