# Busca A*

A abordagem de Busca A* (A estrela) para resolver problemas computacionais, incorporaremos a ideia de combinar o custo do caminho já percorrido com uma função heurística que estima o custo para alcançar o objetivo a partir do estado atual. A Busca A* escolhe o próximo estado a ser expandido com base no menor valor da função de avaliação $f(n) = g(n) + h(n)$, onde $g(n)$ é o custo do caminho do estado inicial até $n$, e $h(n)$ é a estimativa heurística do custo de $n$ até o objetivo.

Para uma [heurística admissível](./heurística-admissível.md) $A^*$ encontra a solução ótima do problema.

## Funcionamento

O procedimento de busca A* segue estes passos:

1. **Inicialização**: Começa com o estado inicial, colocando-o em uma estrutura aberta com a função de avaliação inicial calculada.

2. **Loop de Busca**: Enquanto houver estados na estrutura aberta, realiza os seguintes passos:

    a. Seleciona e remove o estado com o menor valor de $f(n)$ da estrutura aberta.
    
    b. Verifica se o estado selecionado é o estado objetivo. Se for, reconstrói e retorna o caminho até o estado inicial.
    
    c. Para cada sucessor do estado, calcula $g(n)$ e $h(n)$, e insere ou atualiza na estrutura aberta com o novo valor de $f(n)$.

3. **Verificação de Objetivo**: Checa se o estado atual é o estado objetivo. Se for, o problema está resolvido.

4. **Repetição**: Repete o processo até encontrar o objetivo ou até que a estrutura aberta fique vazia, indicando que não há solução.

## Esboço do Procedimento de Busca A*

```
Procedimento A_Estrela(ESTADO_INICIAL, FUNÇÃO_HEURÍSTICA)
 1. Abertos ← estrutura de dados com (ESTADO_INICIAL, f(n) = h(ESTADO_INICIAL))
 2. Fechados ← conjunto vazio
 3. Enquanto Abertos não estiver vazio:
 4.     Estado_Atual, f_atual ← remover de Abertos o estado com menor f(n)
 5.     Adiciona Estado_Atual ao conjunto Fechados
 6.     Se Estado_Atual é o ESTADO_OBJETIVO
 7.         Retorna o caminho reconstruído até Estado_Atual
 8.     Para cada ESTADO_SUCESSOR de Estado_Atual:
 9.         g_sucessor ← g(Estado_Atual) + custo(Estado_Atual, ESTADO_SUCESSOR)
10.         Se ESTADO_SUCESSOR está em Fechados e g_sucessor >= g(ESTADO_SUCESSOR)
11.             Continua para o próximo sucessor
12.         Se ESTADO_SUCESSOR não está em Abertos ou g_sucessor < g(ESTADO_SUCESSOR)
13.             Atualiza g(ESTADO_SUCESSOR) para g_sucessor
14.             f(ESTADO_SUCESSOR) ← g_sucessor + h(ESTADO_SUCESSOR)
15.             Se ESTADO_SUCESSOR não está em Abertos
16.                 Adiciona ESTADO_SUCESSOR a Abertos
 9. Retorna FALHA
```

Neste esboço:
- **Abertos** é a estrutura de dados que armazena os estados a serem explorados, juntamente com os valores de $f(n)$.
- **Fechados** é um conjunto que armazena os estados já explorados.
- **g(ESTADO)** é o custo do caminho do estado inicial até o estado dado.
- **h(ESTADO)** é a função heurística estimando o custo do estado até o objetivo.
- **f(ESTADO)** é a soma de $g(ESTADO)$ com $h(ESTADO)$, determinando a ordem de exploração dos estados.

A busca A* é completa e ótima quando a função heurística $h(n)$ é admissível, ou seja, nunca superestima o custo real de alcançar o objetivo a partir de $n$.

---

[Voltar ao README principal](../../../README.md)