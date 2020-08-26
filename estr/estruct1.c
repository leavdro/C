#include <stdlib.h>
#include <stdio.h>

struct Tfecha { //Estructura que almacena fecha.
	char cdia[9], mes[12]; //Para mostrar día y mes en formato caractérico.
	int ndia, nmes, anho; //Para mostrar fecha en formato numérico.
};

struct Tlibros { //Estructura que almacena los libros de una biblioteca.
	char titulo[20], autor[20], tema[20]; //Última celda = '/0'
	int isbn[9], paginas; //Para ISBN, un dígito por celda.

};

struct Tlibros libros[9];/* Ésta estructura es un array que representa una estantería
		     que puede almacenar hasta 10 libros. */
int main (void){
int numLibros; /*Almacena la cantidad de libros conforme más
campos de título no vacíos. Su valor aumenta mediante una sentencia condicional,
referenciando al campo de la variable de la estructura "Tlibros":

Supongamos que llamamos "libros" a la variable de la estructura "Tlibros",
entonces; si libros.titulo es distinto de NULL, numLibros aumenta su valor
en una unidad; if(numLibros.titulo != NULL){ numLibros++; }
*/
printf("\nLea el código fuente para ver el resultado del ejercicio.\n");
return 0;}
