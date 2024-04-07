# Busca de Subida de Encosta

A Busca de Subida de Encosta (Hill Climbing Search) é uma técnica de otimização matemática que pertence à categoria dos algoritmos de busca local. Seu objetivo é encontrar soluções ótimas ou satisfatórias para problemas de otimização maximizando ou minimizando uma função objetivo específica. Este método é frequentemente visualizado como o processo de escalar uma colina ou montanha para alcançar o ponto mais alto, que representa a solução ótima ou satisfatória.

### Princípios Básicos

A essência da Busca de Subida de Encosta reside em sua abordagem iterativa para melhorar progressivamente uma solução candidata com base em movimentos locais. Em cada iteração, o algoritmo avalia os vizinhos da solução atual e move-se para o vizinho que oferece a melhoria mais significativa na função objetivo. Este processo é repetido até que nenhum vizinho ofereça uma melhoria, indicando que um máximo local foi alcançado.

### Características da Busca de Subida de Encosta

- **Busca Local**: Concentra-se em melhorias incrementais na solução atual, explorando o espaço de busca localmente.
- **Greedy**: O algoritmo é "guloso" (greedy), significando que ele sempre se move na direção da maior elevação sem considerar movimentos futuros.
- **Máximos Locais**: A busca pode ficar presa em máximos locais, que são soluções ótimas dentro de uma vizinhança, mas não no espaço de busca como um todo.
- **Platôs**: Áreas planas no espaço de busca onde todas as soluções vizinhas têm o mesmo valor da função objetivo, dificultando a detecção de direções para melhoria.
- **Picos e Vales**: Dependendo do problema, a busca pode ser formulada para encontrar vales (minimização) ao invés de picos (maximização).

### Variantes

Para superar algumas das limitações do algoritmo básico de Busca de Subida de Encosta, várias variantes foram desenvolvidas:

- **Busca de Subida de Encosta Estocástica**: Em vez de escolher o melhor movimento em cada etapa, esta variante seleciona aleatoriamente entre os movimentos que melhoram a solução, potencialmente evitando máximos locais.
- **Busca de Subida de Encosta com Reinício Aleatório**: Esta abordagem reinicia a busca a partir de soluções iniciais aleatórias, aumentando a chance de escapar de máximos locais e encontrar um máximo global.
- **Busca de Subida de Encosta com Retrocesso (Backtracking)**: Permite movimentos temporários para soluções piores com a esperança de escapar de máximos locais.

### Aplicações

A Busca de Subida de Encosta é amplamente utilizada em diversos domínios, incluindo:

- Otimização de parâmetros em aprendizado de máquina e redes neurais.
- Problemas de agendamento e alocação de recursos.
- Jogos e puzzles, onde é necessário encontrar estratégias ou soluções ótimas.
- Design e configuração de sistemas complexos para otimização de performance.

[Exemplo para o problema da N Rainhas](../notebooks/n-queen-problem.ipynb)
