# Busca Heurística

As buscas heurísticas, ou buscas informadas, utilizam conhecimento específico do problema, além das informações fornecidas pela definição do problema, para explorar o espaço de estados de maneira mais eficiente. Essas buscas são guiadas por uma função heurística que estima o custo de chegar ao estado objetivo a partir de um determinado estado.

As duas principais categorias são:

- [Busca Greedy (Gulosa)](./busca-heuristica/busca-greedy.md)

- [Busca A* (A estrela)](./busca-heuristica/busca-a-estrela.md)

### Comparação dos Algoritmos de Busca Heurística

Avaliação dos algoritmos de busca em termos de:
- **Completeza**: Refere-se à garantia de que o algoritmo encontrará uma solução se ela existir.
- **Complexidade Temporal**: Refere-se a quanto tempo o algoritmo pode levar para encontrar a solução.
- **Complexidade Espacial**: Refere-se à quantidade de memória necessária para o algoritmo executar.
- **Otimalidade**: Indica se o algoritmo é capaz de encontrar a melhor solução possível.

| Algoritmo         | Completeza          | Complexidade Temporal | Complexidade Espacial | Otimalidade     |
|-------------------|---------------------|-----------------------|-----------------------|-----------------|
| **Busca Greedy**  | Não garante completeza sem informações adicionais | $O(b^m)$, mas na prática pode ser significativamente melhor com uma boa heurística | $O(b^m)$, dependendo da implementação | Não, não garante encontrar a solução ótima |
| **Busca A***      | Sim, se a heurística é admissível (e consistente) | $O(b^d)$ para heurísticas perfeitas; pode ser exponencial com heurísticas pobres | $O(b^d)$, pois todos os nós até a profundidade d podem ser mantidos em memória | Sim, se a heurística é admissível |

Na tabela acima, $b$ é o fator de ramificação, $d$ é a profundidade da solução menos custosa, e $m$ é a profundidade máxima do espaço de estados.

## Notebooks de aplicações

- [Sliding-Puzzle](../../notebooks/sliding-puzzle.ipynb)

- [N-Queen-Problem](../../notebooks/n-queen-problem.ipynb)


## Tópicos adicionais

- [Geração de heurísticas admissíveis a partir de Problemas Relaxados](./problemas-relaxados.md)
