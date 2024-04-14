# Semântica da Lógica de Primeira Ordem

A semântica da lógica de primeira ordem define como as expressões lógicas que envolvem quantificadores e predicados são mapeadas para valores de verdade. Isso estabelece o significado das fórmulas lógicas ao especificar as condições sob as quais uma fórmula é considerada verdadeira ou falsa em um domínio particular. Aqui estão os conceitos principais:

### Domínio de Discurso

Na lógica de primeira ordem, o **domínio de discurso** é o conjunto de todos os objetos sobre os quais as fórmulas fazem declarações. Cada variável em uma fórmula refere-se a algum elemento deste domínio.

### Interpretação

Uma **interpretação** é uma atribuição que mapeia cada função e predicado a uma função matemática ou relação específica no domínio, além de associar cada variável a um elemento do domínio. Esta interpretação é crucial para avaliar a verdade de fórmulas mais complexas que envolvem essas variáveis e predicados.

### Função de Avaliação

A **função de avaliação** na lógica de primeira ordem é mais complexa devido à presença de quantificadores e a natureza variável dos objetos do domínio. Ela é definida como:

- **Quantificador Universal ( ∀ )**: Uma fórmula \( \forall x P(x) \) é verdadeira se, para cada elemento \( x \) no domínio de discurso, \( P(x) \) é verdadeiro sob a interpretação dada.

  \( v(\forall x P(x)) = V \) se para todo \( x \), \( v(P(x)) = V \)
  
- **Quantificador Existencial ( ∃ )**: Uma fórmula \( \exists x P(x) \) é verdadeira se existe pelo menos um elemento \( x \) no domínio para o qual \( P(x) \) é verdadeiro.

  \( v(\exists x P(x)) = V \) se existe algum \( x \) tal que \( v(P(x)) = V \)

- **Predicados e Funções**: Predicados são avaliados baseando-se em suas definições na interpretação e podem variar dependendo do domínio e da aplicação.

### Tabela de Verdade para Predicados

A tabela de verdade para predicados não é fixa como na lógica proposicional, pois depende do domínio e da interpretação dos predicados e funções. Porém, a relação entre diferentes predicados e funções pode ser analisada considerando todas as possíveis interpretações das variáveis dentro do domínio.

A semântica da lógica de primeira ordem permite expressar e analisar afirmações sobre objetos em um domínio específico, usando quantificadores para generalizar ou especificar as propriedades desses objetos. Essa abordagem é essencial para aplicativos que exigem raciocínio detalhado sobre conjuntos de objetos ou suas relações.