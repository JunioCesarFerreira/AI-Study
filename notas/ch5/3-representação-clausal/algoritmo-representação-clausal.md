# Algoritmo de Representação Clausal

O Algoritmo de Representação Clausal é uma metodologia computacional utilizada para transformar fórmulas da Lógica de Primeira Ordem (LPPO) em uma forma clausal, facilitando processos de inferência, como resolução e busca em bases de conhecimento. Este documento serve como um guia rápido sobre a implementação e utilização do algoritmo.

## Introdução

O objetivo do algoritmo de representação clausal é converter qualquer fórmula da LPPO em um conjunto de cláusulas, que são mais simples de se trabalhar em termos computacionais. Uma cláusula é uma disjunção de literais, e um literal pode ser uma variável ou a negação de uma variável.

## Pré-requisitos

Antes de utilizar o algoritmo, é essencial ter conhecimento básico em Lógica de Primeira Ordem, incluindo termos, fórmulas atômicas, e a diferença entre variáveis livres e quantificadas.

## Etapas do Algoritmo

### 1. Fecho Existencial
Converta a fórmula para incluir um quantificador existencial para cada variável livre, tornando todas as variáveis explicitamente quantificadas.

### 2. Eliminação de Quantificadores Redundantes
Remova qualquer quantificador que não contribua para a interpretação da fórmula.

### 3. Renomeação de Variáveis
Assegure que cada quantificador tenha uma variável única associada, renomeando as variáveis conforme necessário para evitar ambiguidades.

### 4. Eliminação dos Conectivos → e ≡
Substitua cada ocorrência de → e ≡ por outras formas lógicas equivalentes que utilizem apenas ¬, ∧, e ∨.

### 5. Movimentação da Negação para o Interior
Utilize as leis de De Morgan para mover a negação para o interior das fórmulas, aplicando-a diretamente aos literais.

### 6. Quantificadores para o Interior
Mova os quantificadores o mais internamente possível, reduzindo o escopo de aplicação.

### 7. Eliminação de Quantificadores Existenciais
Substitua variáveis quantificadas existencialmente por constantes ou funções skolem, removendo assim os quantificadores ∃.

### 8. Forma Normal Prenex
Organize a fórmula de modo que todos os quantificadores estejam no início, formando o prefixo da fórmula.

### 9. Forma Normal Conjuntiva
Converta a fórmula em uma conjunção de disjunções de literais (cláusulas).

### 10. Representação Clausal
Finalize a conversão para o formato clausal, onde cada cláusula é um conjunto de literais.
