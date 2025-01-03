Olá! Para resolver este problema, precisamos verificar quantas vezes o caractere '-' aparece em uma string, considerando apenas os caracteres que estão entre os delimitadores '|'. Para isso, podemos utilizar um vetor dinâmico de inteiros (vector<int>), onde:


Incrementamos o valor na última posição do vetor em +1 sempre que encontramos um '-'.
Adicionamos uma nova posição ao vetor (com valor inicial 0) toda vez que encontramos um delimitador '|'.


Com essa abordagem, conseguimos armazenar, de forma eficiente, a contagem de '-' entre os delimitadores.