# Algoritmos Genéticos

Algoritmos Genéticos (AGs) são uma classe de algoritmos de busca e otimização inspirados pelos princípios da genética e seleção natural. Como uma forma de metaheurística, eles são aplicados a problemas de otimização complexos, nos quais métodos tradicionais podem não ser eficazes ou viáveis. AGs simulam o processo evolutivo observado em sistemas biológicos, empregando técnicas de reprodução, mutação, recombinação e seleção em populações de indivíduos codificados como cadeias de genes, frequentemente representados por strings binárias, para explorar o espaço de soluções e encontrar aproximações ótimas.

### Conceitos Fundamentais

- **Indivíduo (Solução)**: Cada solução possível para o problema é representada por um indivíduo no contexto dos AGs. O indivíduo é tipicamente expresso como uma cadeia de caracteres ou números, conhecida como cromossomo.

- **População**: Um conjunto de indivíduos. Os AGs iniciam com uma população de soluções geradas aleatoriamente ou por meio de algum critério inicial e evoluem essa população ao longo de várias gerações.

- **Função de Aptidão (Fitness)**: Uma função que avalia o quão boa é uma solução (indivíduo) em relação ao problema. Ela direciona a seleção natural ao longo do processo evolutivo, determinando a probabilidade de um indivíduo ser selecionado para reprodução.

- **Seleção**: O processo de escolher indivíduos para reprodução baseado em suas funções de aptidão, preferindo aqueles com valores mais altos.

- **Crossover (Recombinação)**: Uma operação que mistura os genes de dois pais para criar descendentes, promovendo a troca de informações genéticas entre soluções.

- **Mutação**: Uma modificação aleatória em um ou mais genes de um indivíduo, introduzindo novas características na população e ajudando a manter a diversidade genética.

- **Gerações**: As sucessivas iterações do algoritmo, nas quais a população é avaliada e uma nova população é gerada por meio de seleção, crossover e mutação.

### Processo Evolutivo

1. **Inicialização**: Gere uma população inicial de forma aleatória ou através de um método heurístico.

2. **Avaliação**: Calcule a aptidão de cada indivíduo na população usando a função de aptidão.

3. **Seleção**: Escolha indivíduos para reprodução, baseando-se em suas aptidões.

4. **Crossover**: Aplique o crossover em pares de indivíduos selecionados para gerar descendentes, que herdam características de ambos os pais.

5. **Mutação**: Aplique a mutação em alguns indivíduos para introduzir variações.

6. **Substituição**: Forme uma nova população, que pode incluir os melhores indivíduos da geração anterior (elitismo) e os novos descendentes.

7. **Convergência**: Repita os passos 2 a 6 até que um critério de parada seja atingido, como um número máximo de gerações ou uma solução satisfatória.

### Aplicações e Vantagens

Os AGs são particularmente úteis para resolver problemas de otimização e busca onde o espaço de solução é vasto, complexo ou mal definido. Eles encontram aplicações em diversas áreas, incluindo engenharia, economia, ciências da vida e pesquisa operacional, lidando com problemas como otimização de design, roteamento de veículos, programação de horários, e muito mais.

A principal vantagem dos AGs é sua robustez e flexibilidade, sendo capazes de encontrar soluções de boa qualidade para problemas complexos sem a necessidade de conhecimento específico sobre o domínio do problema. Além disso, sua natureza paralela e estocástica os torna adequados para explorar espaços de solução complexos, evitando o aprisionamento em ótimos locais.

[Notebook de Exemplo](./metaheuristics.ipynb)

---

[Voltar ao README inicial](../../README.md)
