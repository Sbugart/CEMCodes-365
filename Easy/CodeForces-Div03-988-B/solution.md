Neste problema, sabemos que a matriz é definida por 𝑘−2 elementos, sendo que os outros dois valores de 𝑘 representam as dimensões da matriz (𝑛 e 𝑚).


Para resolver o problema, foi utilizado map para armazenar cada valor fornecido na entrada, junto com sua frequência. Com isso, podemos verificar rapidamente se um número está presente na entrada e quantas vezes ele aparece.


Depois, iteramos até a raiz quadrada de 𝑘−2, buscando divisores deste número. Caso 𝑘−2 seja divisível por 𝑖, verificamos se 𝑖 e (𝑘−2)/𝑖 estão no map. Se ambos estiverem presentes, 𝑖 e (𝑘−2)/𝑖 correspondem aos valores 𝑛 e 𝑚, respectivamente.

No caso especial em que 𝑛 = 𝑚, não precisamos verificar múltiplas ocorrências de 𝑛, pois isso é garantido pela lógica.