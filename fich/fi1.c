#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Declaración de funciones personalizadas:
char inicio (void);
void fichero (char ran1[12]);
void final (void);
//Declaración de variable global:
char cadena[13];
strcpy(cadena,"temporal.txt");//Nombre de fichero de directorio imaginario.
//Éste ffichero se creará en caso de no existir.
//Programa principal:
int main (void){ char archivo[13]; //Almacena el valor introducido por el usuario.
//Llamda a las funciones personalizadas:
archivo==inicio();
fichero(archivo);
final();
return 0;}//Fin de main()

//Definición de funciones:

char inicio (void){
int celdaFin=12; char cadena1[13];strcpy(cadena1[celdaFin], '\0');

printf("\nBienvenido! Éste programa le pedirá el nombre de un fichero existente en éste");
printf("\ndirectorio. Si el nombre introducido coincide con el nombre existente, entonces");
printf("\nse mostrará su contenido. Si no coincide, el programa cerrará despidiéndose y");
printf("\nsin mostrar ningún contenido.\n\n\n");
getchar();fflush(stdin);
printf("\nPor favor, introduzca el nombre del fichero (<nombre.extension>): ");
scanf("%s", &cadena1);fflush(stdin);

return cadena1;}//Fin de inicio();

void fichero (char ran1[13]){FILE *Fichero; char cadena2[12];//Almacena el valor por parámetro
char lectura[13];//Almacena la cadena  que se obtiene del fichero para mostrarlo en pantalla.
ran1=cadena2;
if (strcmp(cadena2, cadena) == 0){ //Si el nombre coincide se abre el fichero.
	Fichero = fopen("temporal.txt", "r");
	if(Fichero == NULL){printf("Error: El fichero no existe o no se puede leer.");}
		else{strcpy(lectura,fgets(cadena, strlen(cadena), Fichero));}
fclose(Fichero);}//Fin de if();
}//Fin de fichero();
void final (void){
getchar();
printf("\n\n\nGracias por utilizar el programa.");
}//Fin de final();
