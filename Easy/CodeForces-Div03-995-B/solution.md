A solução é basicamente criar um inteiro que possui mais precisão (dias) para receber o resultado da divisão inteira de 𝑛 por (𝑎+𝑏+𝑐). Após isso, tiramos esta parte de 𝑛 para obter a quantidade de dias restantes.


Como "dias" possui o resultado de 𝑛/(𝑎+𝑏+𝑐), temos que ele será 0 se 𝑎+𝑏+𝑐 > 𝑛. Logo, este primeiro decréscimo não impossibilita o resultado ser 1 para o caso 6,6,7,4.


Após retirarmos o resto da divisão de 𝑛, "dias" é multiplicado por 3, já que se passaram 3 dias para cada unidade de "dias".


Em seguida, é verificado se 𝑛 ainda é > 0. Caso seja, ele é decrescido pela quantidade daquele dia e "dias" é incrementado. Isso ocorre para 𝑎,𝑏 e 𝑐.

Por fim, basta imprimir "dias".