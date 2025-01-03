Para resolver este problema, as cartas foram armazenadas em um vetor, que será ordenado em ordem crescente. A ideia é simples: em um caso onde a resposta é 'Yes', as cartas possuem apenas 2 números distintos. Assim, podemos utilizar uma variável para contar quantas vezes o primeiro número aparece, e outra para contar quantas vezes o segundo número aparece.


Como o vetor foi ordenado, as cartas com números diferentes estarão posicionadas nas extremidades, facilitando a contagem.


Depois de realizar a contagem, basta verificar se as quantidades de cada número atendem a uma das seguintes condições:


Um número aparece 1 vez e o outro 3 vezes;
Ambos os números aparecem 2 vezes.
Se nenhuma dessas condições for satisfeita, a resposta será 'No'.