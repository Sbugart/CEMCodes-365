#include <iostream>
#include <vector>
using namespace std;

long long int count_zeros(long long int n){
    long long int count = 0;
    for(long long int i = 5; n / i >= 1; i *= 5){
        count += n / i;
    }
    return count;
}

int main(){
    long long int M, up, low = 0, zeros, N, mid;
    cin >> M;

    up = M * 5;
    while(low <= up){
        mid = (up + low) / 2;
        zeros = count_zeros(mid);

        if (zeros < M) {
            low = mid + 1;
        } else if (zeros > M) {
            up = mid - 1;
        } else {
            N = mid;
            up = mid - 1; 
        }
    }

    if(count_zeros(N) == M){
        cout << N + 2 << endl;
    }
    else cout << -1 << endl;

    return 0;
}