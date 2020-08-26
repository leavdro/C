#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main (void){
char palabra1[10], palabra2[10];
printf("\nPor favor, escriba una palabra (10 carácteres): ");gets(palabra1);
printf("\nPor favor, escriba otra palabra (10 carácteres): ");gets(palabra2);
//Comparando cadenas:
printf("\nOrden alfabético: ");
if(strcmp(palabra1, palabra2) < 0){printf("\n%s\n%s\n", palabra1, palabra2);}
if(strcmp(palabra1, palabra2) > 0){printf("\n%s\n%s\n", palabra2, palabra1);}
if(strcmp(palabra1, palabra2) == 0){printf("\n\"%s\" y \"%s\" son iguales.\n");}
//Fin de programa

return 0;}
