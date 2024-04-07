# Cláusula

Uma **cláusula** é uma disjunção de [literais](./literal.md). Existem dois tipos principais de cláusulas:

- **Cláusula Unitária**: Contém apenas um literal.
- **Cláusula Vazia**: Não contém nenhum literal, representada por $\square$, e é considerada insatisfatória em qualquer interpretação.

As cláusulas são os blocos de construção na forma normal conjuntiva e são cruciais para processos de inferência lógica, como a resolução, que é amplamente utilizada em provadores de teorema automatizados e sistemas de inferência.

# Representação Clausal

A **representação clausal** é o resultado da conversão de uma fórmula da Lógica de Primeira Ordem para um conjunto de cláusulas, geralmente após a fórmula ser transformada para a Forma Normal Conjuntiva. Este conjunto de cláusulas pode então ser utilizado em algoritmos de resolução para inferência lógica. A representação clausal é preferida para processamento computacional devido à sua simplicidade e eficiência em algoritmos de busca e inferência.

A conversão de fórmulas para a representação clausal segue pelo [algoritmo de representação clausal](./algoritmo-representação-clausal.md).

