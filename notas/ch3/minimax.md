# Minimax

O método Minimax é uma estratégia fundamental na teoria dos jogos para minimizar a perda máxima possível em cenários adversariais, particularmente em jogos de soma zero com dois jogadores que alternam turnos. O objetivo é escolher a ação que resulta no melhor resultado possível, considerando as melhores jogadas do adversário.

### Definição Formal do Método Minimax

Seja um jogo definido por uma árvore onde cada nó representa um estado do jogo e as arestas representam as possíveis jogadas (ações) dos jogadores. A função Minimax é aplicada aos nós da árvore, que são alternadamente maximizadores e minimizadores.

A função de utilidade $u: X \rightarrow \mathbb{R}$ mapeia um estado terminal $x$ da árvore de jogo a um valor real $u(x)$, representando a utilidade (ou pontuação) do estado $x$ para o jogador maximizador. A função de utilidade é conhecida em todos os nós terminais (folhas) da árvore.

Para qualquer nó $N$, o valor Minimax $M(N)$ é definido recursivamente como:

1. **Base da Recursão (Caso Terminal)**: Se $N$ é um nó terminal, então $M(N) = u(N)$, onde $u(N)$ é a utilidade do estado $N$.

2. **Caso Maximizador**: Se $N$ é um nó no qual o jogador maximizador está agindo, então:
\[M(N) = \max_{N'} M(N')\],
onde $N'$ são os sucessores de $N$.

3. **Caso Minimizador**: Se $N$ é um nó no qual o jogador minimizador está agindo, então:
\[M(N) = \min_{N'} M(N')\],
onde $N'$ são os sucessores de $N$.

### Algoritmo

1. **Inicialização**: Comece no nó raiz da árvore de jogos, que representa o estado atual do jogo.

2. **Recursão**: Aplique a função Minimax recursivamente para explorar a árvore de jogos, alternando entre camadas maximizadoras e minimizadoras.

3. **Cálculo de Minimax**: Use a definição de Minimax para calcular o valor de cada nó, subindo na árvore a partir dos nós folha até o nó raiz.

4. **Decisão**: No nó raiz, escolha a ação (movimento) que leva ao filho com o valor Minimax máximo (se o nó raiz for um nó maximizador) ou mínimo (se o nó raiz for um nó minimizador).

O método Minimax garante que, contra um adversário ótimo, o jogador alcançará ao menos o resultado representado pelo valor do nó raiz da árvore de jogo. Isso é baseado na suposição de que ambos os jogadores jogam otimamente durante todo o jogo.


