# exercicio-faturamento-produtos-lojas
Simula o controle de faturamento de N produtos e N lojas

# descricao-detalhada
O programa realiza o controle de vendas de uma empresa que vende P tipos de produtos em L lojas. Considere P e L como 3 e 3 por conveniência (constantes nomeadas), todavia o programa funciona para quaisquer valores de P e L (se alterados os valores das constantes ele continua funcionando normalmente). 

Inicialmente, o programa lê e armazena os nomes (com 30 caracteres no máximo) dos P tipos de produtos, os códigos numéricos (inteiros) dos P tipos de produtos, o preço de cada tipo de produto e a quantidade vendida de cada produto por cada uma das L lojas. 

A seguir, o programa:

- Pede para o usuário informar o nome de um produto, assim exibindo o código e o preço deste produto. Caso o nome informado seja inválido, o programa realiza a consistência, só prosseguindo quando o usuário informar um nome válido.

- Pede para o usuário informar um código de produto e exibindo na tela o nome do produto e o total de unidades vendidas deste produto considerando as vendas de todas as lojas. Se o usuário informar um código inválido, o programa realiza a consistência, só prosseguindo quando o usuário informar um código válido.

- Determina e exibe a média de unidades vendidas de cada produto por loja, exibindo o nome do produto, seu código, seu preço e a média vendida.

- Determina e exibe o faturamento total de cada loja, considerando o total de produtos vendidos de cada tipo e seu preço.

- Determina o produto que representou o maior faturamento (considerando total de unidades vendidas e preço) e exibir seu nome e código e o total faturado com as vendas deste produto. Caso mais de um produto ficar empatado, o programa exibe todos que atingiram esse faturamento máximo.