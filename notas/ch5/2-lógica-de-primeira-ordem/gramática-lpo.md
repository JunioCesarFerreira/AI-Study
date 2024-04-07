# Gramática LPO

A Lógica de Primeira Ordem (LPO), também conhecida como lógica predicativa ou lógica quantificada, expande a capacidade expressiva do cálculo proposicional ao permitir a fala sobre objetos e suas propriedades, assim como relações entre objetos, usando quantificadores. A LPO é composta por símbolos lógicos (incluindo quantificadores), símbolos de predicado, símbolos de função e constantes, além das variáveis.

A seguir apresentamos uma gramática básica para a LPO, utilizando a notação BNF. Esta gramática vai cobrir os componentes essenciais: termos, fórmulas atômicas, quantificação, e os conectivos lógicos.

### Gramática para a Lógica de Primeira Ordem

```
Fórmula ::= Atômica
          | '(' Fórmula ')'
          | '¬' Fórmula
          | Fórmula '∧' Fórmula
          | Fórmula '∨' Fórmula
          | Fórmula '→' Fórmula
          | Fórmula '↔' Fórmula
          | '∀' Variável Fórmula
          | '∃' Variável Fórmula

Atômica ::= Predicado '(' Termo { ',' Termo } ')'

Termo ::= Constante
        | Variável
        | Função '(' Termo { ',' Termo } ')'

Predicado ::= 'P' | 'Q' | 'R' | ...  // Símbolos de predicado
Função ::= 'f' | 'g' | 'h' | ...      // Símbolos de função
Constante ::= 'a' | 'b' | 'c' | ...   // Símbolos de constantes
Variável ::= 'x' | 'y' | 'z' | ...    // Símbolos de variáveis
```

#### Descrição dos Elementos da Gramática

- **Fórmula**: Uma expressão lógica na LPO, que pode ser uma fórmula atômica, a negação de uma fórmula, a conjunção, disjunção, implicação, ou bi-implicação de duas fórmulas, ou uma fórmula com um quantificador universal (∀) ou existencial (∃).

- **Atômica**: Uma fórmula atômica consiste em um predicado seguido de uma lista de termos, representando propriedades ou relações.

- **Termo**: Representa objetos no domínio de discurso. Pode ser uma constante, uma variável, ou uma função aplicada a uma lista de termos.

- **Predicado**: Símbolos que representam propriedades ou relações entre objetos.

- **Função**: Símbolos que representam funções sobre objetos.

- **Constante**: Símbolos que representam objetos específicos no domínio de discurso.

- **Variável**: Símbolos que podem ser quantificados e representam objetos genericamente.

A gramática para a LPO permite expressar proposições sobre objetos e suas relações de uma forma mais rica e detalhada do que o cálculo proposicional. Por exemplo, ela pode expressar proposições como "Todos os homens são mortais" ou "Existe um número que é primo" utilizando quantificadores e relações.