Para resolver este problema, foi criada uma variável inicializada com o valor 0. Essa variável é utilizada para armazenar, por meio de operações bitwise, quais letras já foram lidas. Cada letra lida na entrada é representada por um bit específico: 'A' é o primeiro bit, 'B' o segundo, e 'C' o terceiro.

Em seguida, verificou-se se a variável possui o valor 7. Isso ocorre porque, em binário, o número 7 é representado como 0111, o que significa que os bits correspondentes a 'A', 'B' e 'C' foram todos marcados, independentemente da ordem em que aparecem na entrada.

Por fim, o programa imprime Yes se a variável for igual a 7 e No caso contrário.