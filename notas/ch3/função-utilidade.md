# Função de utilidade

A função de utilidade é usada para avaliar a qualidade de uma posição no jogo. Representando uma forma de quantificar as preferências de um agente sobre um conjunto de alternativas ou resultados. Em um contexto formal, a função de utilidade mapeia um conjunto de resultados para um conjunto de valores reais, refletindo a satisfação ou preferência que um agente atribui a cada resultado possível.

## Definição

Seja $X$ o conjunto de todos os resultados possíveis, uma função de utilidade $u:X\rightarrow\mathbb{R}$ atribuí a cada resultado $x\in X$ um número real $u(x)$, que representa a utilidade desse resultado para o agente.


## Observação

Os valores atribuídos pela função de utilidade permitem a comparação entre diferentes resultados: se $u(x) > u(y)$ para dois resultados $x$ e $y$, então o resultado $x$ é preferido ao resultado $y$ pelo agente. A função de utilidade é, portanto, uma representação quantitativa das preferências do agente.

Em geral:
- $u(x)>>0$: posição $n$ boa para o agente e ruim para o oponente.
- $u(x)<<0$: posição $n$ ruim para o agente e boa para o oponente.
- $u(x)$ próximo de $0$: posição neutra.
- $u(x)\rightarrow +\infty$: agente ganha e oponente perde.
- $u(x)\rightarrow -\infty$: oponente ganha e agente perde.


