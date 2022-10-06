### Insertion sort em c++

##### Programa desenvolvido em C++ do algoritmo de ordenaçao e busca 'Insertion sort' com entrada para os valores do vetor.

<hr>

>neste algoritmo de ordenaçao é iniciado selecionando o segundo número do vetor para se fazer as comparaçoes.
>O loop para as comparaçoes será executado do segundo elemento ao último, os seja, na quantidade de vezes igual ao número de elementos do vetor menos um: ```(for i = 1; i < n; i++).```
> Enquanto existirem à esquerda do número selecionado para comparaçoes e a posição que atende a ordenaçao que se busca não for encontrada, o loop será executado.
> O  número selecionado está na posição *i* . 
> Os números à esquerda do selecionado estão na posiçao de *i - 1* à zero, logo, o loop a ser exercutado será de ``` (j = 1 - 1) ``` e ```(while (j >= 0 && elemento[j] > selecionado) ```.