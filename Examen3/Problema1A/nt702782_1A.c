/*
 * ProblemaA1.c
 *
 *  Created on: 11/11/2015
 *      Author: Mariana
 */


#include <stdio.h>

#define TAM 10

void ordenar_arreglo(int *arreglo){

	int i, x, flotante, y;
	int *apuntador, *comienzo;

	apuntador = arreglo;

	comienzo = arreglo++;

	for (i = 0; i < TAM; i++, apuntador++, comienzo++){
		arreglo = comienzo;
		y = i+1;
		for ( x = y; x < 11; x++, arreglo++){
			if (*apuntador > *arreglo){
				flotante = *apuntador;
				*apuntador = *arreglo;
				*arreglo = flotante;
			}
		}
	}
	return;
}

void imprimir_arreglo(int *arreglo){

	int i;
	int *abebe;

	for (i = 0; i < TAM; i++, arreglo++){
		abebe = arreglo-1;
		if ( *arreglo != *abebe){
			printf("%d", *arreglo);
		}
	}
}

int main(){

	setvbuf (stdout, NULL, _IONBF, 0);

	int iNum[TAM], i = 0;

	for ( i = 0; i < TAM; i++){
		printf("Ingresa el número %d de la cadena:\t", i);
		scanf("%d", &iNum[i]);
	}

	ordenar_arreglo(iNum);
	imprimir_arreglo(iNum);

	return 0;
}
