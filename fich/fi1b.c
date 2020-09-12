#include <stdlib.h>
#include <stdio.h>

void inicio (void);
void final (void);

int main (void){ FILE *mifichero;char texto[19], *resultado;
inicio();//Inicio del programa.

mifichero=fopen("prueba.txt","rt");//Apertura del fichero
//Comprobación de si existe el fichero:
if (mifichero == NULL){printf("\n\nError: No se ha podido abrir el fichero.");}
	else{printf("\n\nEl fichero se ha abierto.\n");
	resultado=fgets(texto, strlen(texto),mifichero);}//findeElse
fclose(mifichero);//Cierre del fichero

final();//Finalización del programa.
return 0;}//Fin del programa principal.

void inicio (void){

printf("\nBienvenido! Éste programa le pedirá el nombre de un fichero, y controlará de que\n");
printf("éste exista. Si existe, se mostrará su contenido. Si no existe, se cerrará el programa\n");
printf("con naturalidad.\n\n");getchar();fflush(stdin);}

void final (void){
printf("\n\n\n\Gracias por utilizar éste programa!n\n\n");}
