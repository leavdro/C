#include <stdlib.h>
#include <stdio.h>

int main (void){
//Primero, declaro las variables:
char letra; //Para almacenar letra que pediré al usuario.
//No es necesario almacenar el valor ascci en una variable.
//Pido la letra al usuario:
printf("Por favor, teclee una letra: \n");
scanf("%c", &letra); //Escaneo el teclado y almaceno un valor.
fflush(stdin); //Limpio el búfer del tecleado.
//Muestro al usuario el valor ASCII de la letra introducida:
printf("\nIntrodujo la letra \'%c\' y su valor ASCII es \'%d\'.\n", letra, letra);
/*
Con tan sólo indicar que se muestre la variable de carácter "letra", como
un valor numérico (%d), el programa automáticamente utiliza su tabla ASCII.
*/

return 0;
}
