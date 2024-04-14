# Formas Normais

### Forma Normal Prenex

Uma fórmula da Lógica de Primeira Ordem está na **Forma Normal Prenex** se todos os seus quantificadores estão à frente da fórmula, sem estar entremeados por outros operadores lógicos. Formalmente, uma fórmula está na forma normal prenex se puder ser escrita na forma $Q_1x_1 Q_2x_2 \ldots Q_nx_n \cdot \phi$, onde cada $Q_i$ é um quantificador (universal $\forall$ ou existencial $\exists$), cada $x_i$ é uma variável, e $\phi$ é uma fórmula sem quantificadores, chamada de matriz da fórmula.

### Forma Normal

Uma fórmula está na **Forma Normal** se for composta apenas de  conjunções e disjunções de [literais](literal.md). Um literal é uma fórmula atômica ou a negação de uma fórmula atômica.

As **Formas Normais Conjuntiva (FNC)** e **Forma Normal Disjuntiva (FND)** são métodos de organização de fórmulas lógicas que facilitam a análise e manipulação em lógica proposicional. Vamos descrever cada uma usando uma gramática formal simplificada, que especifica como as fórmulas podem ser construídas.

### Forma Normal Conjuntiva (FNC)

A FNC é uma conjunção de cláusulas, onde cada cláusula é uma disjunção de literais. Um literal é uma proposição atômica ou sua negação.

- **Símbolos terminais:** variáveis proposicionais (p, q, r, ...), negação (¬), disjunção (∨), conjunção (∧), e parênteses.
- **Símbolos não-terminais:** Fórmula (F), Cláusula (C), Literal (L).
- **Regras de produção:**
  1. F → C
  2. F → F ∧ C
  3. C → L
  4. C → C ∨ L
  5. L → p | ¬p (onde p é uma variável proposicional)

### Forma Normal Disjuntiva (FND)

A FND é uma disjunção de conjunções de literais. Cada conjunto de literais conectados por conjunções é tratado como um termo da disjunção.

- **Símbolos terminais:** variáveis proposicionais (p, q, r, ...), negação (¬), disjunção (∨), conjunção (∧), e parênteses.
- **Símbolos não-terminais:** Fórmula (F), Termo (T), Literal (L).
- **Regras de produção:**
  1. F → T
  2. F → F ∨ T
  3. T → L
  4. T → T ∧ L
  5. L → p | ¬p (onde p é uma variável proposicional)
