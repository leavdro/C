#include <stdlib.h>
#include <stdio.h>
#include <string.h>
struct Tjugadores {
	char jugador[10];
	int puntuacion;
};
struct Tjugadores jugadores[5];//Un jugador por celda de array de estructura.
int main (void){
int n, mayor, menor;//Para contar y guardar valores.
char jugadorAlto[10], jugadorBajo[10];
//Otorgemos nombres y puntuaciones al azar, manualmente:
strcpy(jugadores[0].jugador, "maxwell");
jugadores[0].puntuacion=100;
strcpy(jugadores[1].jugador, "loaber");
jugadores[1].puntuacion=150;
strcpy(jugadores[2].jugador, "brandan");
jugadores[2].puntuacion=900;
strcpy(jugadores[3].jugador, "yaen");
jugadores[3].puntuacion=950;
strcpy(jugadores[4].jugador, "lars");
jugadores[4].puntuacion=820;
strcpy(jugadores[5].jugador, "gens");
jugadores[5].puntuacion=30;
//Calculemos la puntuación más alta:
for(n=0;n<=5;n++){

if ((jugadores[n].puntuacion > jugadores[n-1].puntuacion) && (jugadores[n].puntuacion > jugadores[n-2].puntuacion) && (jugadores[n].puntuacion > jugadores[n-3].puntuacion) && (jugadores[n].puntuacion > jugadores[n-4].puntuacion) && (jugadores[n].puntuacion > jugadores[n-5].puntuacion)){
 jugador[n].puntuacion = mayor;
 strcpy(juadorAlto, jugadores[n].jugador);}/*if*/else{
	strcpy(jugadorBajo, jugadores[n].jugador);
	jugador[n].puntuacion = menor;}//else
}//for
return 0;}
