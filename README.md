# Estudos de Inteligência Artificial

Este repositório contém notas e exemplos sobre IA. A principal referência utilizada neste estudo é o livro [Artificial Intelligence: A Modern Approach](https://aima.cs.berkeley.edu/). Este livro oferece uma abrangente introdução ao campo da inteligência artificial. Abrangendo desde os fundamentos da IA até as técnicas mais avançadas, o livro se destaca por sua clareza na exposição dos temas e pela profundidade com que trata os conteúdos. Através de seus capítulos, são abordados tópicos como agentes inteligentes, resolução de problemas, busca, aprendizado de máquina, processamento de língua natural, robótica e muito mais.

# Guia do Repositório

## Notas

### Resolvendo Problemas
- [Agentes](./notas/ch1/agentes.md)
- [Formulação de Problemas](./notas/ch1/formulação-do-problema.md)

### Resolvendo Problemas de Busca

As notas e códigos desta seção são baseadas no capítulo 3 *"Solving Problems by Searching"*. Este explora como sistemas inteligentes utilizam estratégias de busca, tanto informadas (busca heurística) quanto não informadas (busca cega), para navegar eficientemente em espaços de estados e encontrar soluções para problemas complexos.

- [Busca Cega](./notas/ch1/busca-cega/README.md)
    - [Força Bruta](./notas/ch1/busca-cega/backtracking.md)
    - [Busca em Grafos](./notas/ch1/busca-cega/busca-em-grafos.md) 
- [Busca Heurística](./notas/ch1/busca-heurística/README.md)
    - [Busca Gulosa](./notas/ch1/busca-heurística/busca-gulosa.md)
    - [Busca A*](./notas/ch1/busca-heurística/busca-a-estrela.md)

### Além da Busca Clássica

As notas e códigos desta seção são baseadas no capítulo 4 *"Beyond Classical Search"*. No livro não é mensionado a metaheurística, no entanto, julgamos conveniente utilizar este termo para os algoritmos explorados nesta seção.

- [Metaheurísticas](./notas/ch2/README.md)
    - [Subida de Encosta](./notas/ch2/busca-subida-encosta.md)
    - [Simulated Annealing](./notas/ch2/simulated-annealing.md)
    - [Algoritmos Genéticos](./notas/ch2/algoritmos-geneticos.md)

### Busca com Adversários

As notas e códigos desta seção são baseadas no capítulo 5 *"Adversarial Search"*. Em particular, focaremos nos dois principais algoritmos apresentados neste capítulo, o *Minimax* e a *Poda Alfa-Beta*.

- [Busca com Adversários](./notas/ch3/README.md)
    - [Minimax](./notas/ch3/minimax.md)
    - [Poda Alfa-Beta](./notas/ch3/poda-alfa-beta.md)

### Problemas de Satisfação de Restrições


### Lógica de Predicados para Representação do Conhecimento


## Notebooks de exemplos em Python
- [Sliding Puzzle](./notas/ch1/exemplos/sliding-puzzle.ipynb)
- [Busca em grafo: BFS, DFS, GBFS, A*](./notas/ch1/exemplos/graph-search.ipynb)
- [Problema da N Rainhas](./notas/ch1/exemplos/n-queen-problem.ipynb)
- [Metaheurísticas: Simulated Annealing e Algoritmos Genéticos](./notas/ch2/metaheuristics.ipynb)

## Apêndices
- [Complexidade de Algoritmos e *Big O*](./notas/apendices/a-1.md)
- [Breve revisão de Álgebra Linear](./notas/apendices/a-2.md)
- [Breve revisão de Probabilidas e Distribuições](./notas/apendices/a-3.md)