#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main (void){
char frase[19], letra;int vez;
printf("\nPor favor, escriba una frase (sólo 20 carácteres): ");
gets(frase);fflush(stdin); //Ésta función almacena espacios. La función "scanf()" no almacena espacios.
printf("\nPor favor, escriba una letra: ");letra=getchar();fflush(stdin);
//Buscando la letra introducida por el usuario, en su frase introducida:
if(strstr(frase,letra) != NULL){
	printf("\nLa letra \'$c\' ha sido encontrada en la frase\n \"%s\"", letra, frase);
}else { printf("\nNo ha podido encontrarse la letra introducida por el usuario...\n");}
//Fin de programa
return 0;}
