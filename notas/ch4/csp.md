# Problema de Satisfação de Restrições

O CSP (*Constraint Satisfaction Problem*) é um formalismo matemático utilizado em IA para modelar problemas nos quais um conjunto de variáveis deve ser atribuído a valores específicos, sujeito a um conjunto de restrições. Formalmente, um CSP é definido como uma tripla  $(X, D, C)$, onde:

1. $X = \{X_1, X_2, ..., X_n\}$ é um conjunto de variáveis, onde cada variável $X_i$ tem um domínio $D_i$ associado que especifica os valores possíveis que $X_i$ pode assumir.

2. $D = \{D_1, D_2, ..., D_n\}$ é um conjunto de domínios, onde $D_i$ é o domínio de valores possíveis para a variável $X_i$.

3. $C = \{C_1, C_2, ..., C_m\}$ é um conjunto de restrições, onde $C_j$ é uma restrição que restringe as combinações de valores que as variáveis podem assumir.

Cada restrição $C_j$ é geralmente expressa como uma tupla $(scope, R)$, onde $scope$ é um subconjunto das variáveis $X_i$ e $R$ é uma relação que especifica as combinações válidas de valores para as variáveis em $scope$.

Um exemplo simples de um CSP é o problema das $N$ rainhas, no qual $N$ rainhas devem ser colocadas em um tabuleiro $N \times N$ de forma que nenhuma rainha possa atacar outra. Neste caso:

- $X = \{X_1, X_2, ..., X_N\}$ representa as variáveis, onde $X_i$ denota a coluna em que a rainha $i$ está localizada.
- $D_i = \{1, 2, ..., N\}$ é o domínio de valores possíveis para cada variável $X_i$, representando as linhas do tabuleiro.
- $C$ consiste em restrições que garantem que nenhuma rainha ataque outra.

As soluções para um CSP são atribuições consistentes de valores às variáveis que satisfazem todas as restrições. Encontrar uma solução para um CSP geralmente envolve a aplicação de algoritmos de busca, como a busca com retrocesso, a fim de explorar eficientemente o espaço de soluções em busca de uma atribuição consistente que satisfaça todas as restrições.

