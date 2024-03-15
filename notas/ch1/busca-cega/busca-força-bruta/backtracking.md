# Backtracking ou Força Bruta

O *backtracking* é uma técnica de busca recursiva utilizada para encontrar soluções para problemas computacionais. Ele explora todas as possibilidades em um **espaço de busca**, retrocedendo (backtrack) quando encontra uma solução inválida.

## Funcionamento

O procedimento recursivo de backtracking segue os seguintes passos:

1. **Condição de parada**: Verifica se os dados atuais representam um estado terminal. Se sim, retorna uma solução vazia.

2. **Condição de beco sem saída**: Verifica se o estado atual não possui solução viável, indicando um impasse. Se sim, retorna uma indicação de falha.

3. **Geração de possíveis movimentos**: Determina as regras aplicáveis ao estado atual, ou seja, as possíveis decisões que podem ser tomadas a partir deste ponto.

4. **Exploração recursiva**: Itera sobre as regras geradas, aplicando cada uma delas e chamando recursivamente a função de backtracking para explorar as possibilidades a partir do novo estado.

5. **Volta atrás (backtrack)**: Se a exploração recursiva não levar a uma solução válida, retorna-se ao estado anterior para tentar uma nova abordagem.

6. **Combinação das soluções parciais**: Se uma solução válida for encontrada em uma ramificação, combina-se essa solução com as soluções parciais encontradas nas ramificações anteriores para formar a solução completa.

## Melhorias no Esboço

Segue abaixo um esboço do procedimento de backtracking:

```
Procedimento Recursivo BACKTRACK(DADOS)
 1. Se ESTADO_FINAL(DADOS)
 2.     retorna uma solução vazia
 3. Se IMPASSE(DADOS)
 4.     retorna FALHA
 5. REGRAS ← GERAR_REGRAS(DADOS)
 6. Enquanto REGRAS não estiver vazio:
 7.     R ← PRIMEIRA(REGRAS)
 8.     REGRAS ← RESTANTE(REGRAS)
 9.     NOVOS_DADOS ← APLICAR_REGRA(DADOS, R)
10.     CAMINHO ← BACKTRACK(NOVOS_DADOS)
11.     Se CAMINHO ≠ FALHA
12.         retorna CONCATENAR(R, CAMINHO)
12. Retorne FALHA
```

Sendo:
- `ESTADO_FINAL`: Função que verifica se chegou a um estado final, ou seja, se chegou à solução do problema.
- `IMPASSE`: Verifica se o estado atual é um impasse, ou seja, se não há solução viável a partir deste ponto.
- `GERAR_REGRAS`: Gera as regras aplicáveis ao estado atual. Em um problema específico, as regras podem representar as possíveis ações que podem ser tomadas a partir do estado atual.
- `PRIMERIRA`: Retorna a primeira regra da lista de regras em escopo.
- `RESTANTE`: Retorna todas as regras restantes na lista de regras, excluindo a primeira.
- `APLICAR_REGRA`: Aplica uma regra específica aos dados atuais, produzindo um novo conjunto de dados que representa o estado resultante.
- `CONCATENAR`: Concatena uma regra `R` com um caminho previamente encontrado.
