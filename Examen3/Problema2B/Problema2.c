/*
 * Problema2.c
 *
 *  Created on: 08/11/2015
 *      Author: Mariana
 */
#include <stdio.h>

#define FILA 5
#define COLUMNA 5

void llenarMAtriz(int n, int matriz[FILA][COLUMNA]){

	int x = 0, i = 0, cont;

	for (i = 0; i < FILA; i++){
		if (i % 2 == 0){
			for (x = n, cont = 0; cont < COLUMNA; x++, cont++){
				matriz[i][cont] = x;
			}
			n += 4;
		} else {
			for (x = (n + 5), cont = 0; cont < COLUMNA; x--, cont++){
				matriz[i][cont] = x;
				}
			n += 6;
		}
	}
	return;

}



int main(){

	setvbuf (stdout, NULL, _IONBF, 0);

	int iNum;
	int arrmatriz[FILA][COLUMNA];

	printf("Ingresa el número inicial de la matriz:\t");
	scanf("%d", &iNum);

	int i, x;

	llenarMAtriz(iNum, arrmatriz);

	for ( i = 0; i < FILA; i++){
		for ( x = 0; x < COLUMNA; x++){
			printf("%d\t", arrmatriz[i][x]);
		}
		printf("\n");
	}


	return 0;

}

