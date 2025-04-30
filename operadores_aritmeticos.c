#include <stdio.h>

int main (){

int n1, n2, soma, div,mult, sub; 


printf("Digite o primeiro valor: \n"); 
scanf("%d" , &n1); 

printf("Digite o segundo valor: \n");
scanf("%d" , &n2);

soma = (n1 + n2) ;
sub = n1-n2;
div = n1/n2;
mult = n1*n2;

printf("A soma é: %d\n" ,soma);
printf("A subtração é igual a: %d \n" ,sub);
printf("A divisão é: %d \n" ,div);
printf("A multiplicação é: %d \n" ,mult);

}    