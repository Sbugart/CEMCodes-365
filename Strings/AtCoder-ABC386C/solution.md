Para resolver esta questão, foi calculada a diferença de tamanho entre as duas strings e esse valor foi armazenado em uma variável. Em seguida, verificamos os caracteres de ambas as strings, um a um.


Se os caracteres forem diferentes e a diferença de tamanho for maior que 0, incrementamos o contador de diferenças e avançamos o iterador da string maior. Esse procedimento simula a remoção do caractere atual da string maior para verificar se elas ficam iguais.


Se a diferença de tamanho for 0, basta incrementar o contador de diferenças.


Por fim, se a soma do número de diferenças com a diferença de tamanho for maior que K, a resposta será 'No'. Caso contrário, a resposta será 'Yes'.