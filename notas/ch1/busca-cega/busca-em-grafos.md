# Buscas em Grafos

A busca em grafos é uma abordagem fundamental em algoritmos de computação para explorar os nós (ou vértices) e arestas de um grafo. Essas buscas são essenciais para resolver problemas como encontrar o menor caminho entre dois pontos, verificar a conectividade dentro de um grafo e muitas outras aplicações. As estratégias de busca mais conhecidas são a Busca em Largura (BFS, *Breadth-First Search*) e a Busca em Profundidade (DFS, *Depth-First Search*).

## Funcionamento

A Busca em Largura e a Busca em Profundidade diferem principalmente na ordem em que os nós são explorados:

- **Busca em Largura (BFS)**: Explora os vizinhos de um nó antes de se mover para os vizinhos dos vizinhos. Essa estratégia é útil para encontrar o menor caminho em grafos não ponderados.

- **Busca em Profundidade (DFS)**: Explora tão profundamente quanto possível ao longo de um ramo antes de retroceder. Esta abordagem é eficaz para situações que exigem a exploração de todas as possíveis soluções ou configurações.

## Esboço Geral

Segue abaixo um esboço geral para o procedimento de busca em grafos:

```
Procedimento de Busca em Grafos(GRAFO, INICIO)
 1. Marque todos os nós como não visitados
 2. Crie uma fila (para BFS) ou uma pilha (para DFS)
 3. Adicione INICIO à fila/pilha e marque como visitado
 4. Enquanto a fila/pilha não estiver vazia:
 5.     NÓ_ATUAL ← remover da fila/pilha
 6.     Se NÓ_ATUAL é o objetivo
 7.         retorna sucesso
 8.     Para cada vizinho de NÓ_ATUAL não visitado:
 9.         Marque o vizinho como visitado
10.         Adicione o vizinho à fila/pilha
11. Retorne falha (se o objetivo não for encontrado)
```

Sendo:
- `GRAFO`: Estrutura que contém os nós e as arestas.
- `INICIO`: Nó inicial a partir do qual a busca começa.
- `NÓ_ATUAL`: Nó atualmente sendo explorado na busca.
- `vizinho`: Qualquer nó diretamente conectado ao nó atual por uma aresta, que ainda não foi visitado.

Este procedimento pode ser adaptado para BFS ou DFS dependendo da estrutura de dados escolhida para armazenar os nós durante a busca (fila para BFS, pilha para DFS). Essa flexibilidade permite que o algoritmo seja utilizado para uma ampla gama de problemas, desde a simples verificação de conectividade até a busca do caminho mais curto.

---

[Voltar ao README principal](../../../README.md)