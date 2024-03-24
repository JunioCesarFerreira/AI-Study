# Simulated Annealing

Simulated Annealing (SA) é uma metaheurística inspirada pelo processo de recozimento em metalurgia, uma técnica que envolve aquecer e então resfriar lentamente um material para diminuir defeitos e aumentar a qualidade do material. Analogamente, SA é usado para encontrar uma aproximação do ótimo global de uma função de custo, tipicamente em problemas de otimização combinatória, através de um processo de busca que permite pioras temporárias na solução com o objetivo de escapar de mínimos locais.

### Fundamentos Matemáticos

Consideramos um problema de otimização onde se busca minimizar uma função objetivo $f: S \rightarrow \mathbb{R}$, onde $S$ é o espaço de soluções do problema. O algoritmo de SA explora esse espaço de soluções de maneira estocástica, tentando encontrar a solução $s^*$ tal que $f(s^*) \leq f(s)$ para todo $s \in S$.

A execução do SA inicia-se a partir de uma solução inicial $s_0 \in S$ e uma temperatura inicial $T_0 > 0$. A "temperatura" é uma metáfora para um parâmetro de controle que influencia o grau de exploração do espaço de soluções: em altas temperaturas, o algoritmo é mais propenso a aceitar soluções piores que a atual, permitindo escapar de mínimos locais; à medida que a temperatura diminui, o algoritmo torna-se progressivamente mais restritivo, aceitando apenas soluções que melhoram o custo da solução atual ou que deterioram o custo dentro de uma probabilidade decrescente.

Durante cada iteração do algoritmo, uma nova solução $s'$ é gerada a partir de $s$ por meio de um operador de vizinhança. A mudança de $s$ para $s'$ é aceita com uma probabilidade dada pela função de aceitação de Metropolis:

$$
P(\Delta E, T) = \begin{cases} 
1 & \text{se } \Delta E < 0 \\
\exp\left(-\frac{\Delta E}{T}\right) & \text{caso contrário}
\end{cases}
$$

onde $\Delta E = f(s') - f(s)$ é a diferença entre os custos das soluções $s'$ e $s$, e $T$ é a temperatura atual do sistema.

O processo de resfriamento é simulado por meio de uma função de decréscimo de temperatura, tal que $T_{k+1} = \alpha T_k$, onde $0 < \alpha < 1$ é o fator de resfriamento e $k$ indica o número da iteração atual. O algoritmo continua iterando, reduzindo progressivamente a temperatura, até que se atinja um critério de parada, como um número máximo de iterações ou uma temperatura mínima.

### Critérios de Parada

O algoritmo pode ser interrompido baseado em um ou mais dos seguintes critérios:
- Um limite fixo no número de iterações.
- Uma temperatura final $T_f$ é alcançada.
- A ausência de melhoria significativa na solução por um determinado número de iterações.

### Eficiência e Aplicação

SA é particularmente útil em problemas onde o espaço de busca é grande e a presença de múltiplos mínimos locais torna difícil encontrar o ótimo global através de métodos de busca local convencionais. A eficácia de SA depende fortemente da escolha da temperatura inicial, do esquema de resfriamento, da geração de soluções vizinhas, e dos critérios de parada.

Aplicações de SA abrangem uma ampla gama de problemas, incluindo, mas não limitado a, problemas de roteamento de veículos, programação de tarefas, design de circuitos, e muito mais.

[Notebook de Exemplo](./metaheuristics.ipynb)

---

[Voltar ao README inicial](../../README.md)