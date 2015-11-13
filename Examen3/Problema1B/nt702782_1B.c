/*
 * Problema1.c
 *
 *  Created on: 08/11/2015
 *      Author: Mariana
 */

#include <stdio.h>

#define TAM 100

int buscaElemento(char *cadena, char c){

	int posicion = 0;

	while (*cadena != '\0'){
		if (*cadena != c){
			cadena++;
			posicion++;
		} else if (*cadena == c){
			return posicion;
		}
	}

	return posicion;
}

int uneCadenas (char *arr_1, char *arr_2, char *cadena){

	char *dr;
	int indice = 1, i, tf;

	dr = cadena;

	while (*arr_1){
		cadena = dr;
		for ( i = 0, tf = 0; i <= indice; i++){
			if (*arr_1 != *cadena){
			//	printf("ciclo #%d cadena = %c arr_1 = %c tf = %d indice %d\n", i, *cadena, *arr_1, tf, indice);
				tf++;
				cadena++;
			} else {
				i = indice;
			//	printf("fuga del for\n");
			}
		}
		cadena = dr;
		tf--;
		//printf("Antes del if tf = %d indice = %d\n", tf, indice);
		if (tf == indice){
			for (i = 1; i < indice; i++, cadena++){}
			*cadena = *arr_1;
			//printf("cadena tiene %c\n", *cadena);
			indice++;
		}
		//printf("%c %c\t \n", *arr_1, *cadena);
		arr_1++;
		//printf("Salgo de aquí\n");
	}
	while (*arr_2){
		cadena = dr;
		for ( i = 0, tf = 0; i <= indice; i++){
			if (*arr_2 != *cadena){
			//	printf("ciclo #%d cadena = %c arr_1 = %c tf = %d indice %d\n", i, *cadena, *arr_2, tf, indice);
				tf++;
				cadena++;
			} else {
				i = indice;
			//	printf("fuga del for\n");
			}
		}
		cadena = dr;
		tf--;
		//printf("Antes del if tf = %d indice = %d\n", tf, indice);
		if (tf == indice){
			for (i = 1; i < indice; i++, cadena++){}
			*cadena = *arr_2;
			//printf("cadena tiene %c\n", *cadena);
			indice++;
		}
		//printf("%c %c\t \n", *arr_2, *cadena);
		arr_2++;
		//printf("Salgo de aquí\n");
	}

	return indice;
}

void interseccionCadenas(char *frase, char *texto, char *resultado){

	char *apuntador = texto;

	do{
		do {
			if (*frase == *texto){
				*resultado = *frase;

			}

			texto++;

		} while (*texto);

		frase++;
		texto = apuntador;

	} while (*frase);


	return;
}

int main (){

	setvbuf (stdout, NULL, _IONBF, 0);

	char arr[TAM], frase1[TAM], frase2[TAM], fraser[TAM], cBuscado;
	int iPosicion, largo;

	int menu = 0;

	do{
		printf("Ingresa 1 si deseas 'Buscar Elemento':\n");
		printf("Ingresa 2 si deseas 'Une Cadena':\n");
		printf("Ingresa 3 si deseas 'Interseccion de Cadena':\n");
		printf("Ingresa 4 si deseas 'Salir':\n");
		scanf("%d", &menu);
		fflush(stdin);

		switch (menu){

		case 1:

			printf("Ingresa el texto:\n");
			gets(arr);
			printf("Ingresa el caracter que buscas:\t");
			scanf("%c", &cBuscado);

			iPosicion = buscaElemento(arr, cBuscado);
			printf("El caracter %c se encuentra en la posicion %d\n\n", cBuscado, iPosicion);

			break;

		case 2:

			printf("Ingresa el 1er texto:\n");
			gets(frase1);
			printf("Ingresa el 2do texto:\n");
			gets(frase2);

			largo = uneCadenas (frase1, frase2, fraser);

			int i=0;
			largo--;
			while (i < largo){
				printf("%c", fraser[i]);
				i++;
			}
			printf("\n");

			break;
		case 3:
			i=0;
			printf("Ingresa el texto #1:\n");
			gets(frase1);
			printf("Ingresa el texto #2:\n");
			gets(frase2);

			interseccionCadenas(frase1, frase2, fraser);
			while (fraser[i]){
				printf("%c", fraser[i]);
			i++;
			}
			printf("\n");
			break;
			break;
		}

	} while ( menu != 4);

	return 0;
}

