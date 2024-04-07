# Sintaxe das Linguagens Proposicionais

## Alfabeto

Um alfabeto proposicional $\alpha$ é composto por:

- **Símbolos proposicionais**: Um conjunto finito $P$ de símbolos que representam as proposições básicas.
- **Conectivos lógicos**: Um conjunto finito $C$ de símbolos que representam as operações lógicas.
- **Símbolos de pontuação**: Símbolos que servem para organizar a estrutura das fórmulas.

Nestas notas utilizaremos:

- **Símbolos proposicionais**: Letras minusculas. Ex.: p, q, etc.
- **Conectivos lógicos**: $\lnot$ para negação, $\land$ para conjunção, $\lor$ para disjunção, $\rightarrow$ para implicação e $\equiv$ para equivalência.
- **Símbolos de pontuação**: Os parênteses $()$ e a virgula $,$ são utilizados para organizar a estrutura das fórmulas.

## Fórmulas

- Uma fórmula é qualquer símbolo proposicional de $P$.
- Se $p$ e $q$ são fórmulas, então $\lnot p$, $p\land q$, $p\lor q$, $p\rightarrow q$, $p\equiv q$ também são fórmulas.
- **Regra de Indução**: Se uma fórmula pode ser derivada das regras acima, então ela é uma fórmula.

**Obs.:** Em algumas literaturas a definição acima é dita *Fórmulas bem formadas* FBF.

Em linguagem formal apresentamos a [gramática da lógica proposicional](gramática-cálculo-proposicional.md).
