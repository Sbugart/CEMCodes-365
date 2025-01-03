Para resolver este problema, foi criada uma struct chamada lixos, que armazena os valores de r (quantidade inicial de lixo) e q (quantidade adicional de lixo acumulado a cada ciclo). Em seguida, as consultas (queries) são processadas, considerando três possíveis casos para cada uma delas:

Caso (i): Se a quantidade de lixo inicial r do tipo 𝑡 for maior ou igual a 𝑑, a quantidade coletada será igual a 𝑟, e imprimimos este valor.


Caso (ii): Caso contrário, se a soma de 𝑟 + 𝑞 (quantidade inicial mais um ciclo de acúmulo) for maior ou igual a 𝑑, a quantidade coletada será igual a 𝑟 + 𝑞, e imprimimos este valor.


Caso (iii): Se nenhuma das condições anteriores for atendida, calcula-se quantos ciclos adicionais de 𝑞 são necessários para atingir ou exceder 𝑑. A quantidade coletada é então calculada com base no número de ciclos necessários e exibida.