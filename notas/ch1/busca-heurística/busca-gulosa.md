# Busca Gulosa (Greedy)

A abordagem de Busca Gulosa (Greedy Best-First Search) para resolver problemas computacionais, tem estrutura semelhante ao backtracking, mas focada na escolha da próxima ação baseada em uma função heurística que estima a melhor opção para se aproximar do objetivo. Ao contrário do backtracking que explora todas as possibilidades, a busca gulosa tenta seguir o caminho que parece ser o melhor em cada passo.

## Funcionamento

O procedimento de busca gulosa segue estes passos:

1. **Inicialização**: Define o estado inicial do problema.

2. **Heurística**: Avalia o estado atual usando uma função heurística para estimar a distância até o objetivo.

3. **Seleção do próximo passo**: Escolhe o próximo estado com base na avaliação heurística, movendo-se para o estado que parece estar mais próximo do objetivo.

4. **Verificação de objetivo**: Checa se o estado atual é o estado objetivo. Se for, o problema está resolvido.

5. **Repetição**: Repete o processo até encontrar o objetivo ou até que não haja mais estados para explorar.

## Esboço do Procedimento de Busca Gulosa

```
Procedimento Guloso(ESTADO_INICIAL, FUNÇÃO_HEURÍSTICA)
 1. Abertos ← [ESTADO_INICIAL]
 2. Enquanto Abertos não estiver vazio:
 3.     Estado_Atual ← remover da Abertos o estado com a melhor avaliação pela FUNÇÃO_HEURÍSTICA
 4.     Se Estado_Atual é o ESTADO_OBJETIVO
 5.         Retorna o caminho até Estado_Atual
 6.     Para cada ESTADO_SUCESSOR de Estado_Atual:
 7.         Avalia ESTADO_SUCESSOR usando FUNÇÃO_HEURÍSTICA
 8.         Adiciona ESTADO_SUCESSOR à lista Abertos
 9. Retorna FALHA
```

Neste esboço:

- **ESTADO_INICIAL** é o estado de onde o algoritmo começa a busca.
- **FUNÇÃO_HEURÍSTICA** é uma função que estima o custo de um estado até o objetivo. Esta função é crucial para o desempenho do algoritmo e deve ser escolhida de acordo com o problema específico.
- **ESTADO_OBJETIVO** é o estado que o algoritmo tenta alcançar.
- **ESTADO_SUCESSOR** representa os possíveis estados seguintes que podem ser alcançados a partir do estado atual.

---

[Voltar ao README principal](../../../README.md)