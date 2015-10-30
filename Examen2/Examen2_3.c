/*
 * Examen2_3.c
 *
 *  Created on: 30/10/2015
 *      Author: DavidAlejandro
 *		PROBLEMA: Escribir un programa que calcule la raíz cuadrada de un número sin utilizar la función
		matemática sqr. Si el número introducido por el usuario no tiene una raíz cuadrada exacta
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

