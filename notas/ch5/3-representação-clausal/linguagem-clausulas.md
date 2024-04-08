# Linguagem das cláusulas

A linguagem das cláusulas consiste em uma forma normalizada onde as expressões são divididas em cláusulas. A seguir apresentamos uma gramática básica para a linguagem das cláusulas, utilizando a notação BNF. Esta gramática abordará a estrutura de cláusulas, literais e variáveis.

### Gramática para a Linguagem das Cláusulas

```
Representação ::= Cláusula { ',' Cláusula }

Cláusula ::= Literal { '∨' Literal }

Literal ::= Predicado '(' Termo { ',' Termo } ')' 
          | '¬' Predicado '(' Termo { ',' Termo } ')'

Termo ::= Constante 
        | Variável 
        | Função '(' Termo { ',' Termo } ')'

Predicado ::= 'P' | 'Q' | 'R' | ... 
Função ::= 'f' | 'g' | 'h' | ...
Constante ::= 'a' | 'b' | 'c' | ... 
Variável ::= 'x' | 'y' | 'z' | ... 

```

#### Descrição dos Elementos da Gramática

- **Representação**: Uma Representação Clausal na linguagem das cláusulas é uma coleção de cláusulas separadas por vírgulas. Cada cláusula é tratada como uma unidade lógica independente, representando uma condição ou regra dentro do domínio do problema.

- **Cláusula**: Uma cláusula é uma disjunção de um ou mais literais. Em termos lógicos, isso significa que a cláusula é verdadeira se pelo menos um dos seus literais for verdadeiro. A cláusula representa a unidade básica da estrutura lógica na linguagem das cláusulas.

- **Literal**: Um literal é a forma mais básica de expressão na linguagem das cláusulas. Ele pode ser uma variável (indicando uma afirmação positiva sobre essa variável) ou a negação de uma variável (indicando uma afirmação negativa). Os literais são os blocos de construção das cláusulas.

- **Variável**: As variáveis são símbolos que representam elementos ou valores no domínio do problema. Na gramática apresentada, elas são limitadas a letras maiúsculas de A a Z, mas em contextos mais amplos, podem ter nomes mais complexos dependendo da aplicação específica.