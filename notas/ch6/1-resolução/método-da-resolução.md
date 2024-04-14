# Método da Resolução

O sistema formal da resolução trabalha exclusivamente com cláusulas e contém apenas uma regra de inferência, chamada *regra da resolução (RE)*.

#### Regra da Resolução
Seja $C_\alpha$ o conjunto de todas cláusulas e $S_\alpha\subset C_\alpha$ , então RE define $R:S_\alpha\times S_\alpha\rightarrow C_\alpha$.

#### Método da Resolução
Dado $S_\alpha$ um conjunto de cláusulas e uma cláusula $c$:
- Uma *dedução* de $c$ a partir de $S_\alpha$ neste sistema formal consiste de uma sequência de cláusulas terminando em $c$ e gerada aplicando-se repetidamente a RE.
- Uma *refutação* a partir de $S_\alpha$ é uma dedução da cláusula vazia a partir de $S_\alpha$.

#### Instanciação
Sejam $A$ e $B$ duas cláusulas. Dizemos que $A$ é uma *instância* de $B$ se, somente se, existir uma *substituição* $\beta=\{X_1|t_1,...,X_n|t_n\}$ de variáveis por termos tal que $A$ é obtida substituindo simultaneamente $X_i$ por $t_i$ em $B$, para $i=1,...,n$. Neste caso denotamos $B\beta$ para denotar o resultado da substituição. 

#### Regra da Resolução
Considere $A$ e $B$ cláusulas e $l$ e $k$ literais. Denotaremos por $D$ a cláusula resultante da aplicação das regras, isto é, $D=R(A,B)$. A seguir também utilizaremos a notação $A-l$ com significado do conjunto $A$ removendo o item $l$.
1. Se $l\in A$ e $\lnot l\in B$ então $D=(A-l)\cup(B-\lnot l)$.
2. Se $l\in A$, $\lnot k\in B$ e existe instância $\beta$ tal que $l\beta=k\beta$, então $D=(A\beta-l\beta)\cup(B\beta-\lnot k\beta)$.

#### Unificação
Um *unificador* para duas expressões é uma substituição que, quando aplicada a ambas as expressões, faz com que elas se tornem idênticas. Formalmente, se tivermos duas cláusulas $p$ e $q$, um unificador $\theta$ é tal que $p\theta = q\theta$.

Um *unificador mais geral* (MGU, Most General Unifier), por outro lado, é um unificador que é o mais geral possível, significando que não coloca restrições desnecessárias nas variáveis além do necessário para unificar as expressões. Isso implica que se $\theta$ é um MGU, então qualquer outro unificador $\phi$ pode ser obtido a partir de $\theta$ através de uma substituição adicional. Portanto, o MGU é uma forma de unificador que é minimalista em termos de restrições impostas.

#### Fatoração
Dizemos que uma cláusula $B$ é fator de uma cláusula $A$ se, somente se, existe um conjunto $L$ de literais de $A$ e existe um unificador $\beta$ para $L$ tal que $B=A\beta$.
