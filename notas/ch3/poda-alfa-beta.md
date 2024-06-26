# Poda Alfa-Beta

A poda alfa-beta aprimora o Minimax ao "podar" (ou seja, eliminar) ramos da árvore de jogo que não precisam ser explorados porque já se sabe que eles não vão influenciar o resultado final. Isso é feito pela manutenção de dois valores, alfa e beta, que representam, respectivamente, o mínimo score que o maximizador está assegurado e o máximo score que o minimizador está assegurado.

### Funcionamento da Poda Alfa-Beta

- **Alfa**: O melhor (mais alto) valor que o jogador maximizador pode garantir até agora. Inicia como infinito negativo, pois o maximizador quer maximizar o score.
- **Beta**: O melhor (mais baixo) valor que o jogador minimizador pode garantir até agora. Inicia como infinito positivo, pois o minimizador quer minimizar o score.

À medida que a busca procede e os valores de alfa e beta são atualizados, o algoritmo pode "podar" ramos quando descobre que certamente não há necessidade de explorá-los. Sendo:

1. **Corte Alfa**: Ocorre quando o valor de um nó é maior ou igual a beta. Como o minimizador (jogador que minimiza o score) já encontrou uma opção melhor anteriormente (menor que o valor de beta), não há necessidade de explorar este nó ou seus descendentes mais.
   
2. **Corte Beta**: Ocorre quando o valor de um nó é menor ou igual a alfa. Neste caso, o maximizador (jogador que maximiza o score) já encontrou uma opção melhor anteriormente (maior que o valor de alfa), então este nó e seus descendentes podem ser ignorados.

### Pseudo-código

```
func alpha_beta_search(state) return (action)
    v = max_value(state, -infty, +infty)
    return select a from actions where state and a[state]=v

func max_value(state, alpha, beta) return utility_value
    if check_terminal(state) return utility(state)
    v = -infty
    foreach a in actions(state)
        v = max(v, min_value(result(state,a), alpha, beta))
        if v >= beta return v
        alpha = max(alpha, v)
    return v


func min_value(state, alpha, beta) return utility_value
    if check_terminal(state) return utility(state)
    v = +infty
    foreach a in actions(state)
        v = min(v, max_value(result(state,a), alpha, beta))
        if v =< beta return v
        beta = min(beta, v)
    return v
```

