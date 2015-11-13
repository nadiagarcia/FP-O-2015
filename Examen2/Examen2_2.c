/*
 * Examen2_2.c
 *
 *  Created on: 29/10/2015
 *      Author: DavidAlejandro
 *      PROBLEMA: Los datos del d�a, mes y a�o de nacimiento se pedir�n al usuario en el formato de entero, para el d�a y el mes con
 *      dos d�gitos y para el a�o con dos d�gitos. Con los valores obtenidos determinar la edad del usuario.
 */

#include <stdio.h>

int main() {

	setvbuf(stdout, NULL, _IONBF, 0);

	int i, iEdad, iAnho, iMes, iDia, iAnhoActual = 2015, iMesActual = 10,
			iDiaActual = 8;

	printf("�En que a�o naciste?");
	scanf("%d", &iAnho);
	printf("�En que mes naciste?");
	scanf("%d", &iMes);
	printf("�En que dia naciste?");
	scanf("%d", &iDia);

	if (iMesActual >= iMes && iDiaActual > iDia) {
		i = iAnho - 1;
	} else if (iMesActual <= iMes && iDiaActual >= iDia) {
		i = iAnho;
	}
	iEdad = iAnhoActual - i;

	printf("Tu edad es: %d anhos", iEdad);

	return 0;
}
