#include <stdlib.h>
#include <stdio.h>

int main (void){
char letra, letras[9];//Array unidimensional en el que se almacenarán 10 letras.
int count = 0, remain = 10, vocal; //variables para contar.
do{
printf("\nTeclee una letra (%d): ", remain);scanf("%c", &letra);fflush(stdin);remain--;
letras[count]=letra;count++;
}while(count <= 9);
//Recorriendo array y calculando vocales y consonantes:
for(count = 0; count <= 9;count++){
if((letras[count] == 'u')||(letras[count] == 'o')||(letras[count] == 'i')||(letras[count] == 'e')||(letras[count] == 'a')){vocal++;}
}
printf("\nSe ha o se han contado \'%d\' vocale o vocales.", vocal);
return 0;
}
