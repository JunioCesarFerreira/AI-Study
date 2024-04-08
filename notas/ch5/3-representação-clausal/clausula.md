# Cláusula

Uma cláusula é um conjunto finito de [literais](./literal.md) $`\{L_1, L_2, ..., L_n\}`$ tal que a cláusula é interpretada como a disjunção desses literais. Uma cláusula é dita ser **unitária** se contém exatamente um literal. Uma cláusula é **vazia** (e é denotada por $\square$) se não contém literais, simbolizando uma contradição (ou seja, é sempre falsa).

# Representação Clausal

A **representação clausal** é o resultado da conversão de uma fórmula da Lógica de Primeira Ordem para um conjunto de cláusulas, geralmente após a fórmula ser transformada para a Forma Normal Conjuntiva. Este conjunto de cláusulas pode então ser utilizado em algoritmos de resolução para inferência lógica. A representação clausal é preferida para processamento computacional devido à sua simplicidade e eficiência em algoritmos de busca e inferência.

A conversão de fórmulas para a representação clausal segue pelo [algoritmo de representação clausal](./algoritmo-representação-clausal.md).