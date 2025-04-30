# include <stdio.h>

int main (){
    float n1, n2, n3, media; 

    printf("--------Calcula da Média--------\n");
    printf("Digite a primeira nota: \n");
    scanf("%f" ,&n1);

    printf("Digite a nota 2: \n");
    scanf("%f" , &n2);

    printf("Digite a nota 3: \n");
    scanf("%f" ,&n3);

    media = (n1+n2+n3)/3;

    printf("A média é: %.1f \n" ,media);


}