#include <stdio.h>
#include <stdlib.h>
//Declarando funciones personalizadas:
void salute (void);
void end (void);
int clave (void), cierre;
//Función principal:
int main (void){
salute();//Saludar antes de preguntar por la clave.
do{
cierre=clave();
}while(cierre != 0);
end();//Despedirse después de terminar con la clave.
return 0;}//main()

int clave (void){ int validar, entrada, clave=1234;
printf("\nInroduzca la clave numérica: ");scanf("%4d", &entrada);fflush(stdin);
if (entrada == clave){ printf("\nClave correcta!");validar=0; }
	else {printf("\nVuelva a intentarlo...");validar=1; }

return validar;
}//clave();
void salute (void){printf("\nBienvenido! Se le pedirá una clave mientras no la acierte.\n");
getchar();}//salute();
void end (void){printf("\nGracias por utilizar el programa.\n");}//end();
