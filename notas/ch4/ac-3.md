# Consistência dos Arcos

A consistência dos arcos (Arc Consistency, AC) é um conceito fundamental na solução de Problemas de Satisfação de Restrições (CSPs) que se refere à eliminação de valores inviáveis dos domínios das variáveis com base nas restrições entre elas. O objetivo é pré-processar o grafo de restrições para simplificar o problema antes de aplicar algoritmos de busca, como o backtracking, ou durante a busca, para reduzir o espaço de soluções e acelerar a identificação de soluções válidas.

### O Que é Consistência dos Arcos?

Em um CSP, um arco é uma conexão direcional entre duas variáveis que reflete uma restrição entre seus valores. Por exemplo, se temos duas variáveis $X$ e $Y$ com uma restrição $X \neq Y$, então existem arcos dirigidos de $X$ para $Y$ e de $Y$ para $X$ representando essa restrição.

Um arco de $X$ para $Y$ é dito consistente quando, para cada valor no domínio de $X$, existe pelo menos um valor no domínio de $Y$ que satisfaz a restrição entre $X$ e $Y$. Se algum valor em $X$ não tem um correspondente válido em $Y$, o arco não é consistente, e esses valores inviáveis podem ser eliminados do domínio de $X$.

### Como a Consistência dos Arcos é Aplicada?

A verificação e obtenção da consistência dos arcos são realizadas através de um processo chamado AC-3 ou qualquer uma de suas variantes, como AC-4, que são algoritmos projetados para aplicar essa verificação de forma sistemática a todos os arcos do CSP.

O algoritmo AC-3, por exemplo, opera mantendo uma fila de todos os arcos do CSP e, em seguida, examina cada arco para garantir sua consistência. Quando um valor é removido do domínio de uma variável, todos os arcos apontando para essa variável são reinspecionados, pois a remoção pode tornar possível eliminar mais valores dos domínios das variáveis adjacentes. Esse processo é repetido até que não haja mais eliminações possíveis ou a fila de arcos a verificar esteja vazia.

### Benefícios da Consistência dos Arcos

- **Redução do Espaço de Busca:** Ao eliminar valores inviáveis dos domínios das variáveis, o espaço de soluções possíveis é reduzido, tornando o processo de busca por uma solução válida mais rápido.
- **Detecção Precoce de Falhas:** A consistência dos arcos pode detectar antecipadamente se uma variável ficou sem valores válidos, indicando que o caminho atual da busca não levará a uma solução e deve ser abandonado (backtracking).
- **Simplificação do Problema:** Em alguns casos, a aplicação da consistência dos arcos pode até resolver completamente o problema, sem necessidade de uma busca explícita.

