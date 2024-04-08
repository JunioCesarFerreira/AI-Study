# Formas Normais

### Forma Normal Prenex

Uma fórmula da Lógica de Primeira Ordem está na **Forma Normal Prenex** se todos os seus quantificadores estão à frente da fórmula, sem estar entremeados por outros operadores lógicos. Formalmente, uma fórmula está na forma normal prenex se puder ser escrita na forma $Q_1x_1 Q_2x_2 \ldots Q_nx_n \cdot \phi$, onde cada $Q_i$ é um quantificador (universal $\forall$ ou existencial $\exists$), cada $x_i$ é uma variável, e $\phi$ é uma fórmula sem quantificadores, chamada de matriz da fórmula.

### Forma Normal Conjuntiva (FNC)

Uma fórmula está na **Forma Normal Conjuntiva** se for uma conjunção de disjunções de [literais](literal.md). Um literal é uma fórmula atômica ou a negação de uma fórmula atômica. Formalmente, uma fórmula $\phi$ está na FNC se puder ser expressa como $\phi = C_1 \land C_2 \land \ldots \land C_n$, onde cada $C_i$ é uma cláusula da forma $L_{i1} \lor L_{i2} \lor \ldots \lor L_{ik}$, e cada $L_{ij}$ é um literal.

Na forma normal conjuntiva, uma fórmula da LPO é expressa como uma conjunção de cláusulas, onde cada cláusula é uma disjunção de literais. Isso é importante para técnicas de raciocínio e inferência, pois muitos algoritmos de solução de problemas e de prova de teoremas operam sobre fórmulas nessa forma.