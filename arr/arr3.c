#include <stdlib.h>
#include <stdio.h>

int main (void){
//Declaración variables:
int nums[5], cont = 0, inversa = 5;
do{
printf("Escriba un número: ");scanf("%d", &nums[cont]);fflush(stdin);cont++;
}while(cont <= 5);
//Mostrando números en orden inverso:
while(inversa != 0){printf("\n%d\n", nums[inversa]);inversa--;
}
return 0;}
