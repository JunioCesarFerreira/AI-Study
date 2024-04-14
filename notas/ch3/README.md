# Busca com Adversários

Diferentemente da busca convencional, a busca com adversários considera a existência de oponentes que atuam contra os objetivos do agente. Jogos representam o exemplo clássico de ambientes com adversários, onde o sucesso depende não apenas das ações do jogador, mas também das reações do oponente.

#### [Função de Utilidade](função-utilidade.md)
A função de utilidade, $u(s)$, quantifica a preferência de um agente sobre os estados finais $s$ do jogo. Para jogos de soma zero e dois jogadores, esses valores são opostos para cada jogador. A função de utilidade determina os benefícios de diferentes estados de jogo, guiando decisões estratégicas dos jogadores.

#### [Algoritmo de Minimax](minimax.md)
O algoritmo de Minimax calcula o valor minimax $\text{MINIMAX}(s)$ para cada estado $s$, assumindo jogo ótimo de ambos os jogadores. É definido recursivamente como:
- $\text{MINIMAX}(s) = u(s)$, se $s$ é um estado terminal,
- $\text{MINIMAX}(s) = \max_{a \in \text{Actions}(s)} \text{MINIMAX}(\text{RESULT}(s, a))$, se o jogador é MAX,
- $\text{MINIMAX}(s) = \min_{a \in \text{Actions}(s)} \text{MINIMAX}(\text{RESULT}(s, a))$, se o jogador é MIN.

#### [Poda Alfa-Beta](poda-alfa-beta.md)
A poda Alfa-Beta otimiza o Minimax cortando ramos do espaço de busca que não afetam a decisão final. Introduz parâmetros $\alpha$ e $\beta$ que representam os melhores valores já encontrados ao longo do caminho para os jogadores MAX e MIN, respectivamente. A poda ocorre quando um valor minimax está fora dos limites de $\alpha$ e $\beta$, permitindo uma busca mais eficiente sem comprometer o resultado.

[Notebook de exemplos](../notebooks/minimax.ipynb)
