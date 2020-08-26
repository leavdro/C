#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main (void){
char palabra[9];int orden;
printf("\nPor favor, escriba una palabra (10 carácteres): ");gets(palabra);
//Mostrando palabra con carácteres en orden inverso:
for(orden=strlen(palabra)-1;orden=0;orden--){printf("\n%c\n", palabra[orden]);}
//Fin de programa
return 0;}
