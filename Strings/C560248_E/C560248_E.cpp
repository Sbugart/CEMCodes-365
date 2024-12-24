#include <bits/stdc++.h> // Inclui todas as bibliotecas padrão do C++
using namespace std;

// Função para pré-processar o array LPS (Longest Prefix Suffix)
// usado no algoritmo de busca de padrão KMP
void KMP_pre(string substring, vector<int> *lps){
    int len = 0; // Comprimento do prefixo que também é sufixo
    int i = 1; // Início do loop para processar o array LPS
    (*lps)[0] = 0; // LPS de índice 0 sempre é 0

    // Loop para preencher o array LPS
    while(i < (int)substring.size()){
        if(substring[len] == substring[i]){
            len++; // Incrementa o comprimento do prefixo/sufixo
            (*lps)[i] = len; 
            i++;
        }
        else{
            if(len == 0){
                (*lps)[i] = 0; // Nenhum prefixo/sufixo correspondente
                i++;
            }
            else len = (*lps)[len - 1]; // Reduz o comprimento do prefixo/sufixo
        }
    }
}

// Função principal do algoritmo KMP para contar ocorrências de uma substring em um texto
int KMP(string txt, string substring, vector<int> lps){
    int cont = 0; // Contador de ocorrências da substring
    int i = 0, j = 0; // Índices para o texto e a substring
    int subsize = (int)substring.size();
    int txtsize = (int)txt.size();

    // Loop para percorrer o texto e encontrar ocorrências da substring
    while(i < txtsize){
        if(txt[i] == substring[j]){
            i++;
            j++;
            
            if(j == subsize){ // Substring encontrada
                j = lps[j - 1]; // Reinicia o índice baseado no LPS
                cont++; // Incrementa o contador
            }
        }
        else{
            if(j != 0) j = lps[j - 1]; // Ajusta o índice da substring
            else i++; // Avança no texto
        }
    }
    return cont; // Retorna o número total de ocorrências
}

int main(){

    string txt, substring_frente, substring_verso;
    cin >> txt >> substring_frente; // Lê o texto e a substring
    substring_verso.resize(substring_frente.size()); // Redimensiona a string inversa

    vector<int> lps_frente(substring_frente.size()), lps_verso(substring_frente.size());
    int flag = 0, contador;

    // Cria a versão invertida da substring e verifica se é diferente da original
    for(int i = substring_frente.size() - 1; i >= 0; i--){
        substring_verso[i] = substring_frente[(int)substring_frente.size() - i - 1];
        if(substring_verso[i] != substring_frente[i]) 
            flag = 1; // Define flag se forem diferentes
    }

    // Pré-processa a substring original e conta ocorrências no texto
    KMP_pre(substring_frente, &lps_frente);
    contador = KMP(txt, substring_frente, lps_frente);

    // Se a substring inversa for diferente, processa e conta também
    if(flag){
        KMP_pre(substring_verso, &lps_verso);
        contador += KMP(txt, substring_verso, lps_verso);
    }
    cout << contador << endl; // Imprime o total de ocorrências encontradas
    return 0;
}
