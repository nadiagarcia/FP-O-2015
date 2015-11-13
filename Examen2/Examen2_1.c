/*
 * Examen2_1.c
 *
 *  Created on: 29/10/2015
 *      Author: DavidAlejandro
 *		PROBLEMA: Desarrolla un programa en C que realice la suma de todos los números desde 1 hasta n, donde n es un valor introducido por el usuario.
 */

#include <stdio.h>

int main(){
	setvbuf(stdout, NULL, _IONBF, 0);

	int iNumero;
	int iSuma=0;

	printf("Dame el núero hasta el que deseas sumar: ");
	scanf("%d", &iNumero);

	for(; iNumero > 0; iNumero--){
		iSuma = iSuma + iNumero;
	}
	printf("La suma es: %d", iSuma);

	return 0;
}
