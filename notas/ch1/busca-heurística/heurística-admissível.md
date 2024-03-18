# Heurística Admissível

## Definição
Seja $G$ um grafo, uma heurística $h:G\rightarrow\mathbb{R}$ é dita **admissível** se, para todo nó $n\in G$, ela nunca superestima o custo real para alcançar o objetivo a partir de $n$. Isto é,

$$
h(n) \leq h^*(n)
$$

Sendo:
- $h(n)$ é o custo estimado do nó $n$ até o nó objetivo.
- $h^*(n)$ é o custo real do caminho ótimo do nó $n$ até o nó objetivo.

## Observação
A admissibilidade é crucial para garantir que a busca heurística, como a realizada pelo algoritmo $A^*$, não descarte prematuramente caminhos que poderiam levar à solução ótima.

## Teorema
Se $h$ é uma heurística admissível, então o algoritmo $A^*$ sempre encontra o caminho ótimo entre dois vértices $n$ e $k$ em um grafo $G$.

**Demonstração**:

A demonstração é por contradição. Supomos que exista um caminho $P'$ de $n$ a $k$ com custo total $g(P')$, que é menor que o custo $g(P)$ do caminho $P$ encontrado por $A^*$, ou seja, $g(P') < g(P)$, apesar de usar $h$, uma heurística admissível.

Se $P'$ é mais curto que $P$, então o valor de $f$ para o último nó de $P'$ antes de alcançar o objetivo deve ser menor que o valor de $f$ para o último nó de $P$, devido ao custo menor $g(P')$ e à heurística admissível $h$.

Porém, $A^*$ escolhe expandir os nós baseando-se no menor valor de $f(n)$. Portanto, se $P'$ fosse de fato mais curto, $A^*$ teria escolhido $P'$ em vez de $P$, o que contradiz a suposição inicial.

Sendo assim, a suposição de que existe um caminho $P'$ mais curto que o caminho $P$ encontrado por $A^*$ é falsa sob a condição de que $h$ é admissível. Logo, $A^*$ deve encontrar o caminho ótimo $P$ de $n$ a $k$.
