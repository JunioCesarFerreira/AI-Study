# Gramática Cálculo Proposicional

A gramática para o cálculo proposicional é um conjunto de regras que define como as expressões no cálculo proposicional podem ser formadas a partir de proposições atômicas e conectivos lógicos. Uma forma comum de apresentar essa gramática é através da notação Backus-Naur Form (BNF) ou alguma variante dela, como a Extended Backus-Naur Form (EBNF).

Vamos definir uma gramática simples para o cálculo proposicional que inclui os conectivos lógicos fundamentais: não ($\neg$), e ($\land$), ou ($\lor$), implica ($\rightarrow$), e equivalência ($\leftrightarrow$). As proposições atômicas serão representadas por letras maiúsculas (A, B, C, ...).

### Gramática para o Cálculo Proposicional

```
Expr ::= Atom
      | '(' Expr ')'
      | Neg
      | And
      | Or
      | Imp
      | Bimp

Atom ::= 'A' | 'B' | 'C' | ... | 'Z'

Neg  ::= '¬' Expr

And  ::= Expr '∧' Expr

Or   ::= Expr '∨' Expr

Imp  ::= Expr '→' Expr

Bimp ::= Expr '↔' Expr
```

#### Descrição dos Elementos da Gramática

- **Expr**: representa uma expressão lógica, que pode ser uma proposição atômica, uma negação, uma conjunção (e), uma disjunção (ou), uma implicação, ou uma bi-implicação. As expressões podem também ser delimitadas por parênteses para indicar precedência.
  
- **Atom**: representa uma proposição atômica, que neste caso são letras maiúsculas de A a Z.

- **Neg**: representa a negação de uma expressão lógica, usando o símbolo $\neg$.

- **And**: representa a conjunção (e) entre duas expressões lógicas, usando o símbolo $\land$.

- **Or**: representa a disjunção (ou) entre duas expressões lógicas, usando o símbolo $\lor$.

- **Imp**: representa a implicação de uma expressão lógica em outra, usando o símbolo $\rightarrow$.

- **Bimp**: representa a bi-implicação (equivalência lógica) entre duas expressões lógicas, usando o símbolo $\leftrightarrow$.

Esta gramática é bastante simplificada e pode ser expandida ou modificada para incluir outras notações ou conceitos do cálculo proposicional. Importante notar que a ordem em que as operações são realizadas é controlada pelos parênteses, similarmente ao que ocorre na aritmética.