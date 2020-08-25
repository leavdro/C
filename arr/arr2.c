#include <stdlib.h>
#include <stdio.h>

int main (void){

int nums[4], media, mayor, menor, cont = 0, rem = 6;
//Petición al usuario:
do{
printf("\nEscriba un número (%d)", rem--);scanf("", &nums[cont]);fflush(stdin);
cont++;
}while(cont <= 4);
//calculo de la media:
media=(nums[0]+nums[1]+nums[2]+nums[3]+nums[4])/5
//Calculo del mayor y el menor:
for(cont=0;cont<=4;cont++){
	if((nums[cont] > nums[cont-1])&&(nums[cont] > media)){ mayor=nums[cont];}
	if((nums[cont] < nums[cont-1])&&(nums[cont] < media)){ menor=nums[cont];}
}

printf("\nLa media es: \'%d\'", media);
printf("\nEl mayor es: \'%d\'", mayor);
printf("\nEl menor es: \'%d\'", menor);

return 0;}
