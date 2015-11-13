/*
 * ProblemaA2.c
 *
 *  Created on: 11/11/2015
 *      Author: Mariana
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FILA 5
#define COLUMNA 3

void llenarMatriz(int matriz[FILA][COLUMNA], int minimo, int maximo){

	int x, i;

	for (i = 0; i < FILA; i++){
		for ( x = 0; x < COLUMNA; x++){
			matriz[i][x] = ((rand() % (maximo-minimo+1)) + minimo);
		}
	}

	return;
}

void imprime_matriz(int matriz[FILA][COLUMNA]){

	int x, i;

	for (i = 0; i < FILA; i++){
		for ( x = 0; x < COLUMNA; x++){
			printf("%d\t",  matriz[i][x]);
		}
		printf("\n");
	}

	return;
}

void resta_matrices(int matriz_1[FILA][COLUMNA], int matriz_2[FILA][COLUMNA], int matriz_r[FILA][COLUMNA]){

	int i, x;

	for (i = 0; i < FILA; i++){
		for (x = 0; x < COLUMNA; x++){
			matriz_r[i][x] = matriz_1[i][x] - matriz_2[i][x];
		}
	}

	return;
}

int suma(int matriz_1[FILA][COLUMNA]){
	int suma = 0;

	int i, x;

	for ( i = 0; i < FILA; i++){
		for ( x = 0; x < COLUMNA; x++){
			suma += matriz_1[i][x];
		}
	}

	return suma;
}

int comparaSuma(int matriz_1[FILA][COLUMNA], int matriz_2[FILA][COLUMNA]){

	int resultado;

	int s1, s2;
	s1 = suma(matriz_1);
	s2 = suma(matriz_2);
	resultado = s1 - s2;

	return resultado;
}



int main (){

	setvbuf (stdout, NULL, _IONBF, 0);
	srand (time(NULL));

	int matriz_1[FILA][COLUMNA], mn1, mx1;
	int matriz_2[FILA][COLUMNA], mn2, mx2;
	int matriz_r[FILA][COLUMNA];
	int resultado;

	printf("Ingresa el Máximo y el Mínimo de la Matriz 1:\n");
	scanf("%d %d", &mx1, &mn1);

	llenarMatriz(matriz_1, mn1, mx1);
	imprime_matriz(matriz_1);

	printf("Ingresa el Máximo y el Mínimo de la Matriz 2:\n");
	scanf("%d %d", &mx2, &mn2);

	llenarMatriz(matriz_2, mn2, mx2);
	imprime_matriz(matriz_2);
	resta_matrices(matriz_1, matriz_2, matriz_r);

	printf("\nLa resta de las matrices es:\n");
	imprime_matriz(matriz_r);

	resultado = comparaSuma(matriz_1, matriz_2);

	if (resultado == 0){
		printf("La suma de ambas es igual\n");
	} else if ( resultado > 0){
		printf("La suma de la primera es mayor\n");
	}	else {
		printf("La suma de la segunda es mayor\n");
	}

	return 0;
}
