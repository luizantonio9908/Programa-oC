# include <stdio.h>

int main (){
    char produtoA [30] = "Produto A";
    char produtoB [30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40; 

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB; 

    printf("O produto %s tem o estoque %u e o valor unitario é R$ %.2f reais \n" ,produtoA, estoqueA, valorA);
    printf("O produto %s tem o estoque %u e o valor unitário é R$ %.2f reias \n" ,produtoB, estoqueB, valorB);

    resultadoA = estoqueA > estoqueMinimoA; 
    resultadoB = estoqueB > estoqueMinimoB;

    printf(" O produto %s tem estoque minimo %d\n " ,produtoA, resultadoA);
    printf(" O produto %s tem estoque minimo %d\n " ,produtoB, resultadoB);

    printf("Valor total de A (R$ %d) é maior que o valor total de B (R$ %d): %b\n",((estoqueA*valorA)* (estoqueB*valorB));
    





}