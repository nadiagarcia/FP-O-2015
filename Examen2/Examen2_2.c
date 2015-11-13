/*
 * Examen2_2.c
 *
 *  Created on: 29/10/2015
 *      Author: DavidAlejandro
 *      PROBLEMA: Los datos del día, mes y año de nacimiento se pedirán al usuario en el formato de entero, para el día y el mes con
 *      dos dígitos y para el año con dos dígitos. Con los valores obtenidos determinar la edad del usuario.
 */

#include <stdio.h>

int main() {

	setvbuf(stdout, NULL, _IONBF, 0);

	int i, iEdad, iAnho, iMes, iDia, iAnhoActual = 2015, iMesActual = 10,
			iDiaActual = 8;

	printf("¿En que año naciste?");
	scanf("%d", &iAnho);
	printf("¿En que mes naciste?");
	scanf("%d", &iMes);
	printf("¿En que dia naciste?");
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
