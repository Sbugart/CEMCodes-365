#include <bits/stdc++.h>
using namespace std;

int main() {
    string entrada;
    cin >> entrada;

    int flag = 0, cont = 0;

    for (const auto& e : entrada) {
        if (e == '0') {
            // Verifica se a flag está levantada
            if (!flag) {
                flag = 1; // Levanta a flag
                cont++;
            } else {
                flag = 0; // Redefine a flag
            }
        } else {
            // Incrementa o contador e redefine a flag
            cont++;
            flag = 0;
        }
    }

    // Exibe o resultado final
    cout << cont << endl;

    return 0;
}
