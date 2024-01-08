#include<stdio.h>
#include<stdlib.h>

int main(void){
int valor1,valor2,valor3,soma;

printf("Digite um Valor 1 : ");
scanf("%d", &valor1);

printf ("Digite Valor 2 : ");
scanf("%d", &valor2);

printf("Digite Valor 3 :");
scanf("%d", &valor3);

soma=valor1+valor2+valor3;

printf(" A Soma dos 3 Valores %d",soma);
printf("");


return 0;
system("pause");

}