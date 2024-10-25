Olá, para resolver este problema, o preenchimento do muro foi realizado na ordem inversa, uma vez que é garantido que a tinta não sobrepõe camadas anteriores. Além disso, durante o preenchimento, cada índice recebeu o valor da posição inicial somado à quantidade de posições já preenchidas. Isso garante que, caso outro preenchimento alcance essa célula, ele seja estendido até o final, evitando a verificação de locais já preenchidos. A lógica pode ser exemplificada da seguinte forma:

Entrada:

8 4

0 4

4 4

0 8

3 3

Vector inicializado com -1:

V = [-1, -1, -1, -1, -1, -1, -1, -1]

Calcula 3 3:

V = [-1, -1, -1, 6,  6,  6, -1, -1]

Calcula 0 8:

V = [8,  8,  8,  6,  6,  6,  8,  8]

Neste caso, temos uma variável que conta a quantidade de partes preenchidas. Se esse valor for igual ao tamanho total, saímos do loop, pois o muro não será mais atualizado.

Além disso, para identificar quem pintou cada parte, foram utilizadas duas variáveis para rastrear a quantidade de células preenchidas.