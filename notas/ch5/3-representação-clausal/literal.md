# Literal

Um **literal** é um componente básico nas fórmulas da Lógica de Primeira Ordem (LPO) e é fundamental na representação clausal e na forma normal conjuntiva (FNC). Vamos definir formalmente o que é um literal:

### Literal

Um literal é uma expressão lógica que consiste em:
- Uma **fórmula atômica**, ou
- A **negação** de uma fórmula atômica.

Formalmente, um literal \(L\) pode ser expresso como:
- \(L = A\), onde \(A\) é uma fórmula atômica, ou
- \(L = \neg A\), onde \(\neg A\) representa a negação de uma fórmula atômica \(A\).

Aqui, uma **fórmula atômica** é a aplicação de um predicado a um conjunto de termos, como \(P(t_1, t_2, \ldots, t_n)\), onde \(P\) é um predicado \(n\)-ário e \(t_1, t_2, \ldots, t_n\) são termos.

### Classificação de Literais

- **Literal Positivo**: Quando um literal é uma fórmula atômica sem negação. Por exemplo, se \(P\) é um predicado e \(x\) é uma variável ou um termo constante, então \(P(x)\) é um literal positivo.
- **Literal Negativo**: Quando um literal é a negação de uma fórmula atômica. Utilizando o mesmo exemplo acima, \(\neg P(x)\) seria um literal negativo.
