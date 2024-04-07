# Semântica das Linguagens Proposicionais

A semântica do cálculo proposicional trata da interpretação das proposições em termos de sua verdade ou falsidade, ou seja, define como as expressões do cálculo proposicional são mapeadas para valores verdade. Essencialmente, estabelece o significado das fórmulas lógicas ao especificar as condições sob as quais uma fórmula é considerada verdadeira ou falsa. A seguir, detalham-se os aspectos fundamentais dessa semântica:

### Valores Verdade

No cálculo proposicional, as proposições básicas podem assumir dois valores verdade: **verdadeiro** (V) ou **falso** (F). Estes valores são a base da avaliação semântica de fórmulas mais complexas construídas a partir dessas proposições básicas.

### Interpretação

Uma **interpretação** é uma atribuição de valores verdade a todas as proposições atômicas em uma fórmula. Ela define um contexto específico ou um mundo possível em que as proposições atômicas têm valores definidos como verdadeiros ou falsos. A interpretação é utilizada para determinar a verdade ou falsidade de fórmulas mais complexas.

### Função de Avaliação

Uma **função de avaliação** é uma função que, dada uma interpretação e uma fórmula do cálculo proposicional, retorna o valor verdade da fórmula sob essa interpretação. A função de avaliação leva em conta os conectivos lógicos presentes na fórmula e usa as seguintes regras para avaliar a fórmula:

- **Negação (¬)**: A negação de uma proposição é verdadeira se a proposição for falsa, e falsa se a proposição for verdadeira.
  
  $v(¬p) = V$ se $v(p) = F$
  
  $v(¬p) = F$ se $v(p) = V$

- **Conjunção (∧)**: Uma conjunção de proposições é verdadeira somente se todas as proposições constituintes forem verdadeiras.
  
  $v(p ∧ q) = V$ se $v(p) = V$ e $v(q) = V$
  
  Caso contrário, $v(p ∧ q) = F$

- **Disjunção (∨)**: Uma disjunção de proposições é verdadeira se pelo menos uma das proposições constituintes for verdadeira.
  
  $v(p ∨ q) = V$ se $v(p) = V$ ou $v(q) = V$
  
  Caso contrário, $v(p ∨ q) = F$

- **Implicação (→)**: Uma implicação é falsa somente no caso em que o antecedente é verdadeiro e o consequente é falso.
  
  $v(p → q) = F$ se $v(p) = V$ e $v(q) = F$
  
  Em todos os outros casos, $v(p → q) = V$

- **Equivalência ($\equiv$)**: Uma equivalência é verdadeira se ambas as proposições constituintes têm o mesmo valor verdade.
  
  $v(p\equiv q) = V$ se $v(p) = v(q)$

  Caso contrário $v(p\equiv q)=F$.

## Precedencia entre conectivos lógicos

1. $\lnot$ negação
2. $\land$ conjunção
3. $\lor$ disjunção
4. $\rightarrow$ implicação
5. $\equiv$ equivalência.

## Tabela Verdade

| p | q | $\lnot p$ | $p\land q$ | $p\lor q$ | $p\rightarrow q$ | $p\equiv q$ |
|---|---|-----------|------------|-----------|------------------|-------------|
| V | V |     F     |     V      |     V     |        V         |      V      |
| V | F |     F     |     F      |     V     |        F         |      F      |
| F | V |     V     |     F      |     V     |        V         |      F      |
| F | F |     V     |     F      |     F     |        V         |      V      |
