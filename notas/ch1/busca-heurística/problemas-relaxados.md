# Geração de heurísticas admissíveis a partir de Problemas Relaxados

Os *"Problemas relaxados"* são uma noção utilizada no contexto de busca heurística, para derivar funções heurísticas. Um problema relaxado é uma versão do problema original que foi simplificada de alguma forma, removendo uma ou mais restrições sobre as ações possíveis ou os estados alcançáveis. Essa simplificação faz com que o problema relaxado seja mais fácil de resolver do que o problema original.

A ideia por trás de usar problemas relaxados é que, ao simplificar o problema, podemos encontrar uma solução para o problema relaxado mais rapidamente, e essa solução pode nos fornecer informações úteis sobre como resolver o problema original. Especificamente, o custo da solução ótima do problema relaxado pode servir como uma heurística para o problema original, pois, ao remover restrições, garantimos que o custo para resolver o problema relaxado não será maior do que o custo para resolver o problema original.

### Exemplo Sliding-Puzzle
No caso do sliding-puzzle, uma versão relaxada do problema permite permutar quaisquer peças, esta versão nos dá exatamente a heurística $h_1$ da distância de Hamming para este problema. Outra versão relaxada (que remove menos restriçõe que a anterior), consiste em considerar apenas os movimentos adjacentes sem considerar o espaço em branco, esta versão nos dá outra heurística $h_2$ que coencide com a distância de Manhattan. 

Observe que neste exemplo, a heurística $h_2\ge h_1$ e ambas são [heurísticas admissíves](./heurística-admissível.md) sendo assim $h_2$ pode possuir um melhor desempenho que $h_1$, conforme apresentado no [notebook sliding-puzzle](../exemplos/sliding-puzzle.ipynb).

---

[Voltar ao README principal](../../../README.md)