Olá, para resolver este problema, foi aplicado Dijktra, onde os caminhos valiam 1, e todas as distâncias ainda não olhadas valem 100.
Tendo isso em vista, Dijktra vai nos retornar a lista de vetores com o menor caminha entre o goleiro (origem), e o resto dos jogadores. Logo, basta checar o valor da distancia entre o jogador 0 e 9, onde printamos -1 caso seja 100, ou a distância + 1, já que ele deseja a quantidade de jogadores.

OBS: Eu soube que talvez este problema passe através do uso de uma BFS, onde contamos as camadas andadas.
