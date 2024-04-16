### Definições

1. **Heurística Admissível**:
   Uma heurística $h(n)$ é admissível se nunca superestimar o custo real do menor custo de um nó $n$ até o nó objetivo $g$. Matematicamente, isso é expresso como:
   $$
   h(n) \leq h^*(n) \quad \forall n
   $$
   onde $h^*(n)$ é o custo real mínimo de $n$ até o objetivo.

2. **Heurística Consistente (ou Monotônica)**:
   Uma heurística $h$ é consistente se, para cada nó $n$ e qualquer sucessor $n'$ de $n$, o custo estimado de chegar ao objetivo a partir de $n$ não é maior do que o custo de dar um passo para $n'$ mais o custo estimado de chegar ao objetivo a partir de $n'$. Formalmente:
   $$
   h(n) \leq c(n, n') + h(n') \quad \forall n, n' \text{ onde } n' \text{ é sucessor de } n
   $$
   onde $c(n, n')$ é o custo de mover de $n$ para $n'$.

### Teorema
Uma heurística consistente (ou monotônica) também é admissível.

### Demonstração

**Objetivo**: Mostrar que se uma heurística $h$ é consistente, então $h$ também é admissível.

**Passo 1: Suposição inicial**:
   Suponha que $h$ é uma heurística consistente.

**Passo 2: Provar por contradição que $h$ é admissível**:
   Suponha que $h$ não é admissível. Isso significa que existe pelo menos um nó $n$ para o qual $h(n) > h^*(n)$.

**Passo 3: Utilizar a consistência para chegar a uma contradição**:
   Vamos considerar um caminho ótimo de $n$ ao nó objetivo $g$ com nós intermediários $n_1, n_2, ..., n_k$ onde $n_{k+1} = g$. Por definição de caminho ótimo:
   $$
   h^*(n) = c(n, n_1) + c(n_1, n_2) + \ldots + c(n_k, g)
   $$
   Aplicando a propriedade de consistência sucessivamente ao longo deste caminho:
   $$
   h(n) \leq c(n, n_1) + h(n_1) \\
   h(n_1) \leq c(n_1, n_2) + h(n_2) \\
   \ldots \\
   h(n_k) \leq c(n_k, g) + h(g)
   $$
   Como $h(g) = 0$ (heurística no objetivo é sempre zero), segue que:
   $$
   h(n) \leq c(n, n_1) + c(n_1, n_2) + \ldots + c(n_k, g) = h^*(n)
   $$
   O que contradiz nossa suposição inicial de que $h(n) > h^*(n)$.

**Conclusão**:
   Portanto, não pode existir um nó $n$ tal que $h(n) > h^*(n)$. Isto é, $h$ deve ser admissível. Assim, provamos que se uma heurística é consistente, então ela também é admissível.