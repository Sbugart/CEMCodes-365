Como o problema é simples, a solução consiste em montar a matriz fornecida na entrada e processar cada comando informado ('L', 'R', 'D', 'U'). Para cada comando, verifica-se:


Se a nova posição está dentro dos limites da matriz, para evitar acesso indevido à memória.


Se o movimento solicitado não leva para uma célula com o caractere '#', que representa uma barreira.


Caso as condições sejam atendidas, o movimento é realizado. Além disso, se a nova célula for '@', um contador é incrementado em 1 e a célula é substituída por '.' para indicar que já foi visitada. Foram implementados quatro blocos de verificação (if), um para cada comando ('L', 'R', 'D', 'U').