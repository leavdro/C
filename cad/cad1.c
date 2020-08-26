#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main (void){
char frase[19], letra;int vez, cont;
printf("\nPor favor, escriba una frase (sólo 20 carácteres): ");
gets(frase);fflush(stdin); //Ésta función almacena espacios. La función "scanf()" no almacena espacios.
printf("\nPor favor, escriba una letra: ");letra=getchar();fflush(stdin);
//Buscando la letra introducida por el usuario, en su frase introducida:
for(cont=0;cont=strlen(frase);cont++){if (strstr(frase, letra) != NULL){vez++;}
else {printf("\nNo se ha podido encontrar la letra introducida en la frase.\n");}
}
//Fin de programa
return 0;}
