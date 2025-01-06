Um grafo foi gerado para os símbolos '.', 'S' e 'G'. Durante a conexão dos nós, o tipo de movimento realizado (horizontal ou vertical) foi registrado.


Para a busca no grafo, utilizou-se o algoritmo BFS, dado que a distância entre S e G corresponde à camada da busca em que G é encontrado. Contudo, devido à complexidade dos tipos de movimento, algumas adaptações foram realizadas:


    Cada nó possui um pai vertical e um pai horizontal.
    Foram criados marcadores separados de exploração (vertical e horizontal), permitindo que o mesmo nó seja visitado duas vezes, mas em direções opostas.


Essas adaptações são essenciais no caso de teste:
3 5
##...
S...G
..#..


Nesse exemplo, o algoritmo inicialmente explora os pontos (2,2) e (3,1). Caso fosse permitido visitar o nó apenas uma vez, não seria possível alcançar G a partir de S. No entanto, o caminho via (3,1) permite acessar (2,2) verticalmente, possibilitando um movimento horizontal até G.


Outra modificação foi o registro do tipo de movimento que levou ao nó atual, evitando movimentos redundantes. Esse registro é feito por meio de uma fila adicional que acompanha a fila de nós, armazenando o tipo de movimento ao adicionar um nó na fila.
