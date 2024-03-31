# Estudos de Inteligência Artificial

Este repositório contém notas e exemplos sobre IA. A principal referência utilizada neste estudo é o livro [Artificial Intelligence: A Modern Approach](https://aima.cs.berkeley.edu/). Este livro oferece uma abrangente introdução ao campo da inteligência artificial. Abrangendo desde os fundamentos da IA até as técnicas mais avançadas, o livro se destaca por sua clareza na exposição dos temas e pela profundidade com que trata os conteúdos. Através de seus capítulos, são abordados tópicos como agentes inteligentes, resolução de problemas, busca, aprendizado de máquina, processamento de língua natural, robótica e muito mais.

Este repositório contém notas em **markdown** e e demonstrações de aplicações Python no formato de **notebook Jupyter**. Os usuários podem explorar as notas diretamente online, sem a necessidade de baixar o repositório. No entanto, devido as limitações de renderização (Março de 2024) de **[LaTeX](https://github.com/KaTeX/KaTeX/blob/5806b240b342b964bcde3441d3ae7bfa7222c3b4/docs/support_table.md)** do Github, recomendamos o uso do VS Code com um pluggin de *Markdown Preview Github Styling* para visualizar as notas.

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

As notas desta seção são baseadas no capítulo 6 *"Constraint Satisfaction Problems"*.

- [CSP](./notas/ch4/README.md)
    - [Definição formal](./notas/ch4/csp.md)
    - [Algoritmo Geral](./notas/ch4/algoritmo-resolver-csp.md)

### Lógica de Predicados para Representação do Conhecimento


## Notebooks de exemplos em Python
- [Sliding Puzzle com diversas abordagens de solução](./notas/notebooks/sliding-puzzle.ipynb)
- [Busca em grafo: BFS, DFS, GBFS, A*](./notas/ch1/exercise/graph-search.ipynb)
- [Problema das N Rainhas com diversas abordagens de solução](./notas/notebooks/n-queen-problem.ipynb)
- [Metaheurísticas: Simulated Annealing e Algoritmos Genéticos](./notas/notebooks/metaheuristics.ipynb)
- [Minimax: Jogo da velha e Nim](./notas/notebooks/minimax.ipynb)

## Apêndices
- [Complexidade de Algoritmos e *Big O*](./notas/apendices/a-1.md)
- [Breve revisão de Álgebra Linear](./notas/apendices/a-2.md)
- [Breve revisão de Probabilidas e Distribuições](./notas/apendices/a-3.md)
- [Abordagens de cálculo de distância no problema das N rainhas](./notas/apendices/a-4.md)