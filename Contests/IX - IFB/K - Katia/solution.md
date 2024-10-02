Olá, como o número de zeros é determinado pela quantidade de fatores de 10 que multiplicam o número, e no fatorial há mais fatores de 2 do que de 5, basta calcularmos o número de zeros na base 5. A decomposição é dada por: 

    n= a_0+ 5 a_1 + 25 a_2 + 125 a_3 + ... onde 0≤ a_i ≤4.

Para calcular o valor de cada coeficiente 𝑎_𝑖, podemos dividir 𝑛 sucessivamente por potências de 5: 𝑛/(5^𝑖) = 𝑎_𝑖 + 5 𝑎_(𝑖+1) + … .Somando os resultados de cada 𝑛 / (5^𝑖), determinamos os coeficientes da base 5. Ao aplicar a soma de todos os 𝑛/(5_𝑖), chegamos à expressão: 

    𝑛 = 𝑎_1 + (1+5)𝑎_2 + (1+5+25)𝑎_3 + … .

Onde temos que, quando o valor que multiplica 𝑎_𝑖 for maior que 𝑛, 𝑎_𝑖 = 0. Assim, basta testar os valores de 𝑎_𝑖 que a soma resulta em 𝑛. Recomendo começar testando com os maiores valores de 𝑖, lembrando que 𝑎_𝑖 varia de 4 a 0 (semelhante a uma base binária). Por fim, é só substituir os valores de 𝑎_𝑖 na equação:

    𝑛 = 𝑎_0 + 5 𝑎_1 + 25 𝑎_2 + 125 𝑎_3 + … 