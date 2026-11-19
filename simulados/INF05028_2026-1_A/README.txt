IMPORTANTE:

1. FAZER CÓPIA da pasta chamada RENOMEAR_CARTAO e renomeá-la com o seu número de cartão da UFRGS sem os zeros, e.g., se o código é 00123456 então a parta deve se chamar 123456
2. NÃO ALTERAR ESTRUTURA INTERNA da pasta renomeada, não adicione, remova, ou renomeie arquivos dentro da pasta renomeada. A única exceção é que é permitido criar um binário a.out por meio de g++ junto aos códigos.
3. EDITE SOMENTE AS FUNÇÕES. Cada pasta dentro da pasta renomeada contém um exercício, contendo entrada, saída, e um código já com a parte de IO pronta. A descrição da questão está como comentário dentro do código. Somente o código dentro da função "solve" deve ser modificado.
4. Para verificar corretude basta comparar a saída providenciada com a saída do seu programa (para a entrada providenciada), isso pode ser feito com "g++ code.cpp && ./a.out < entradas.txt | diff -s - saidas.txt" (compila, executa, e testa saída contra arquivo). No caso da saída casar perfeitamente você deve ver a mensagem "Files - and teste.txt are identical".
5. Corretude não é o suficiente para obter a pontuação máxima. É necessário que o algoritmo realmente seja do paradigma pedido e tenha a complexidade correta (o código será examinado pelo professor).

