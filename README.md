# Estudos de Inteligência Artificial

Este repositório contém notas e exemplos sobre IA. A principal referência utilizada neste estudo é o livro [Artificial Intelligence: A Modern Approach](https://aima.cs.berkeley.edu/). Este livro oferece uma abrangente introdução ao campo da inteligência artificial. Abrangendo desde os fundamentos da IA até as técnicas mais avançadas, o livro se destaca por sua clareza na exposição dos temas e pela profundidade com que trata os conteúdos. Através de seus capítulos, são abordados tópicos como agentes inteligentes, resolução de problemas, busca, aprendizado de máquina, processamento de língua natural, robótica e muito mais.

Este repositório contém notas em **markdown** e demonstrações de aplicações Python no formato de **notebook Jupyter**. Os usuários podem explorar as notas diretamente online, sem a necessidade de baixar o repositório. No entanto, devido as limitações de renderização (Março de 2024) de **[LaTeX](https://github.com/KaTeX/KaTeX/blob/5806b240b342b964bcde3441d3ae7bfa7222c3b4/docs/support_table.md)** do Github, recomendamos fortemente o uso do [Obsidian](https://obsidian.md/) para exploração das notas. Outra opção é o uso do VS Code com um pluggin de *Markdown Preview Github Styling* para visualizar as notas.

# Guia do Repositório

## Notas

### [Breve Introdução](./notas/ch0/README.md)

Nestas notas iniciais apresentamos as definições de agentes inteligêntes e formulação de problemas. Estes assuntos são abordados em profundidade nos capítulos 1 e 2 da referência bibliografica na qual estas notas são baseadas.

### [Resolvendo Problemas de Busca](./notas/ch1/README.md)

As notas e códigos desta seção são baseadas no capítulo 3 *"Solving Problems by Searching"*. Este explora como sistemas inteligentes utilizam estratégias de busca, tanto informadas (busca heurística) quanto não informadas (busca cega), para navegar eficientemente em espaços de estados e encontrar soluções para problemas complexos.

- Busca Cega
    - Força Bruta
    - Busca em Grafos
- Busca Heurística
    - Busca Gulosa
    - Busca A*

### [Além da Busca Clássica](./notas/ch2/README.md)

As notas e códigos desta seção são baseadas no capítulo 4 *"Beyond Classical Search"*. No livro não é mensionado a metaheurística, no entanto, julgamos conveniente utilizar este termo para os algoritmos explorados nesta seção.

- Metaheurísticas
    - Subida de Encosta
    - Simulated Annealing
    - Algoritmos Genéticos

### [Busca com Adversários](./notas/ch3/README.md)

As notas e códigos desta seção são baseadas no capítulo 5 *"Adversarial Search"*. Em particular, focaremos nos dois principais algoritmos apresentados neste capítulo, o *Minimax* e a *Poda Alfa-Beta*.

- Busca com Adversários
    - Minimax
    - Poda Alfa-Beta


### [Problemas de Satisfação de Restrições](./notas/ch4/README.md)

As notas desta seção são baseadas no capítulo 6 *"Constraint Satisfaction Problems"*.

- CSP
    - Definição formal
    - Algoritmo Geral

### [Lógica de Predicados para Representação do Conhecimento](./notas/ch5/README.md)

- Lógica Proposicional
- Lógica de Primeira Ordem
- Representação Clausal

### [Prova Automática de Teoremas ou Dedução Automática](./notas/ch6/README.md)

- Resolução
- Estratégia de Controle
- Simplificação

### [Raciocínio Baseado em Regras](./notas/ch7/README.md)

- Baseados em Conhecimento
- Progressivo
- Regressivo

## [Apêndices](./notas/apendices/README.md)
- Complexidade de Algoritmos e *Big O*
- Breve revisão de Álgebra Linear
- Breve revisão de Probabilidas e Distribuições
- Abordagens de cálculo de distância no problema das N rainhas