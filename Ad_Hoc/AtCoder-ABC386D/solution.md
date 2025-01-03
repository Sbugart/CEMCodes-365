Este é um problema interessante. Para resolvê-lo, foi utilizado um vetor que armazena as três informações de cada célula em uma estrutura (struct) contendo as coordenadas 𝑋,𝑌 e a cor da célula (color).


Após a leitura dos 𝑚 valores, o vetor foi ordenado em relação à coordenada 𝑋. Em caso de empate, utilizamos a coordenada 𝑌 como critério de desempate, posicionando as células mais à esquerda em posições menores no vetor.


A abordagem considera que uma célula preta sempre terá outras células pretas à sua esquerda e acima dela. Consequentemente, uma célula branca não pode estar nesta região. Baseando-se nisso, iteramos o vetor de baixo para cima (do maior para o menor 𝑋) utilizando uma variável minb que delimita a posição mínima em 𝑌 das células pretas. A variável minb é inicializada com −1 e é atualizada sempre que uma célula preta com 𝑌 maior é encontrada.


Se uma célula branca for processada, verificamos se sua coordenada 𝑌 é maior que minb. Caso contrário, a célula branca estaria a noroeste de uma célula preta, o que viola a condição do problema. Nesse caso, uma flag é ativada para indicar que a resposta deve ser "No". Se não houver violação, a resposta será "Yes".

