# Buscas Cegas

As buscas cegas, também conhecidas como buscas não informadas, são métodos de busca que exploram o espaço de estados sem usar informações adicionais sobre os estados além daquelas fornecidas pela definição do problema. 

As duas principais categorias são:

- [Backtracking ou força bruta](./busca-força-bruta/backtracking.md)

- [Busca em Grafos](./busca-em-grafos/busca-em-grafos.md)

### Comparação dos Algoritmos de Busca Cega

Avaliação dos algoritmos de busca em termos de:
- **Completeza**: Refere-se à garantia de que o algoritmo encontrará uma solução se ela existir.
- **Complexidade Temporal**: Refere-se a quanto tempo o algoritmo pode levar para encontrar a solução.
- **Complexidade Espacial**: Refere-se à quantidade de memória necessária para o algoritmo executar.
- **Otimalidade**: Indica se o algoritmo é capaz de encontrar a melhor solução possível.

Na tabela a seguir consideramos apenas buscas em grafos e consideramos:
- $b$ o fator de ramificação máximo
- $d$ a profundidade da solução de menor custo
- $m$ a profundidade máxima do espaço de estados (pode ser infinito!)

| Algoritmo                 | Completeza          | Complexidade Temporal | Complexidade Espacial | Otimalidade     |
|---------------------------|---------------------|-----------------------|-----------------------|-----------------|
| **Backtracking**          | Sim, se o espaço de estado for finito | $O(b^m)$ | $O(bm)$ | Em geral não garante a otimalidade |
| **Busca em Largura**      | Sim, se o fator de ramificação (b) é finito | $O(b^d)$ | $O(b^d)$ | Sim, se o custo do passo é o mesmo para todos os passos |
| **Busca em Profundidade** | Não, pode ficar preso em loops; Sim, se o espaço de estado for finito e se limitar a profundidade | $O(b^m)$ | $O(bm)$ | Não, a primeira solução encontrada pode não ser a ótima |
| **Busca de Custo Uniforme** | Sim, se o custo de cada passo é maior que algum ε | $O(b^{1+\lfloor C^* / \varepsilon \rfloor})$, onde $C^*$ é o custo da solução ótima e ε é o menor custo de qualquer ação | $O(b^{1+\lfloor C^* / \varepsilon \rfloor})$ | Sim, sempre encontra a solução de menor custo |

Na tabela acima consideramos apenas buscas em grafos, pois para um espaço arbitrário de busca a pior complexidade do backtracking é $O(N!)$.

## Notebooks de aplicações

- [Sliding-Puzzle](../exemplos/sliding-puzzle/sliding-puzzle.ipynb)

- [N-Queen-Problem]
