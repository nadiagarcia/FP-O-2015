/*
 * Examen2_3.c
 *
 *  Created on: 30/10/2015
 *      Author: DavidAlejandro
 *		PROBLEMA: Escribir un programa que calcule la ra�z cuadrada de un n�mero sin utilizar la funci�n
		matem�tica sqr. Si el n�mero introducido por el usuario no tiene una ra�z cuadrada exacta
		entonces mostrar la parte entera y el residuo.
 */

#include <stdio.h>

int main(){
	setvbuf(stdout, NULL, _IONBF, 0);

	int i, iPotencia, iNumero, iResiduo;

	printf("Dame el numero del que quieres calcular su raiz cuadrada: ");
	scanf("%d", &iNumero);

	for(;iPotencia <= iNumero;){
		i = 0;
		iPotencia = i * i;
		i++;
	}
	if(iPotencia == iNumero){
		printf("La potencia de %d es %d", iNumero, iPotencia);
	}else{
		iResiduo = iNumero - iPotencia;
		printf("La potencia de %d es %d y el residuo es %d", iNumero, iPotencia,  iResiduo);
	}

	return 0;
}

