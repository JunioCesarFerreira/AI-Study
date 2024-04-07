# Sintaxe LPO

A Lógica de Primeira Ordem (LPO), também conhecida como Cálculo de Predicados de Primeira Ordem, expande a Lógica Proposicional ao permitir discursos sobre objetos e suas relações de uma forma mais detalhada. Diferentemente da Lógica Proposicional, que lida apenas com proposições inteiras como unidades indivisíveis, a LPO introduz o conceito de predicados, quantificadores e funções, permitindo uma expressão mais rica e detalhada do conhecimento. A sintaxe da Lógica de Primeira Ordem é o conjunto de regras formais que define como as expressões na linguagem da LPO são construídas. Aqui está um resumo de seus componentes principais:

### Símbolos Básicos

A sintaxe da LPO é construída a partir de vários tipos de símbolos:

1. **Variáveis**: Representam objetos genéricos no domínio de discurso (ex.: $x$, $y$, $z$).
2. **Constantes**: Denotam objetos específicos no domínio de discurso (ex.: $a$, $b$, $c$).
3. **Símbolos de Predicados**: Representam propriedades ou relações entre objetos (ex.: $P(x)$, $R(x,y)$).
4. **Símbolos de Função**: Mapeiam objetos para outros objetos (ex.: $f(x)$, $g(x,y)$).
5. **Conectivos Lógicos**: Incluem a negação (¬), a conjunção (∧), a disjunção (∨), a implicação (→) e a bi-implicação (↔ ou ≡).
6. **Quantiﬁcadores**: Universal ($\forall$) e Existencial ($\exists$).
7. **Parênteses**: Usados para organizar a ordem das operações.

### Termos
- Um **termo** é uma expressão que representa um objeto no domínio de discurso.
- Termos podem ser **variáveis**, **constantes** ou **funções aplicadas a termos**.

### Fórmulas Atômicas
- Uma **fórmula atômica** é uma expressão que pode ser avaliada como verdadeira ou falsa, formada aplicando um predicado a um conjunto de termos. Por exemplo, $Irmão(x, y)$ é uma fórmula atômica.

### Fórmulas Bem-Formadas
- Uma **fórmula bem-formada** (ou sentença) na Lógica de Primeira Ordem pode ser uma fórmula atômica, a negação de uma fórmula, a conjunção/disjunção de duas fórmulas, a implicação entre duas fórmulas, ou uma fórmula com quanticadores.
- Fórmulas com quanticadores incluem um quantificador seguido de uma variável e uma fórmula, indicando a universalidade ($∀x.P(x)$) ou a existência ($∃x.P(x)$) de objetos que satisfazem a fórmula $P(x)$.

### Regras de Formação
As **regras de formação** especificam como os símbolos do alfabeto podem ser combinados para formar fórmulas bem-formadas. Essas regras garantem que as expressões geradas sejam semanticamente válidas dentro do sistema lógico.

Veja uma definição em [gramática da LPO](gramática-lpo.md).