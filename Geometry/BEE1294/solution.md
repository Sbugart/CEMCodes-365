Este problema envolve formular e resolver uma equação:

Onde V = Volume, L = largura, w = comprimento, x = parte cortada,
h = w - 2 * x, g = L - 2x;

Temos então:
V = h * g * x, => V = (w - 2x) * (L - 2x) * x
Portanto, V = 4x^3 - 2x^2(L + w) + L * w * x

Como desejamos os pontos de máximo e mínimo, podemos devirar a função:
Logo, chegamos que V' = 12x^2 - 4x(L + w) + Lw
Onde, quando V' = 0 teremos podemos aplicar bhaskará para encontrar o valor de x.
Neste caso, chegamos que:
x = ( (L + w) (+/-)sqrt(L^2 - L * w + w^2)  )/6

Por fim, calculamos a V'', que resulta em V'' = 24x - 4(L + w). Desta forma, basta substituir os valores de x nesta formula e pegar o que for menor que 0 como máximo.

Em relação aos mínimos, nós temos que 0 serem é o menor valor de x que dá um volume baixo, e existe o caso em que V'' da maior que 0. Porém, nem sempre este valor de x resulta em um volume > 0, logo, se faz necessário verificar o volume neste ponto. Caso ele seja menor que 0, devemos então verificar qual é o segundo menor valor de x em que o V = 0, e podemos fazer isso através da equação do volume, que nos mostra 2 possíveis valores de x, x_1 = L/2 e 
x_2 = w/2. Por fim, basta pegar o menor deles, e printar os valores mínimos e máximos encontrados.