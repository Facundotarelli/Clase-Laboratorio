/*
 ============================================================================
 Name        : Clase1.c
 Author      : Facundo
 Version     :
 Copyright   : MIT
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define SALUDO "\Hola mundo Eclipse!!!\n" //Sin ;

int main(void) {

	setbuf(stdout, NULL);

	//int numero;
	int numeroUno, numeroDos;
	int resultado;
	//float pi = 3.14;
	//char c= 'a';
	//puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	//printf(SALUDO);
	//printf("Hola mundo Eclipse \n");
	//numero = 1;
	//numero = 1.999;
	//printf ("\n	El numero int es: %d, pi: %f y el char es: %c. Otro entero %d\n\n", numero, pi, c);

		printf("Ingrese un numero:\n");

		scanf("%d", &numeroUno);

		printf("Ingrese otro numero:");

		scanf("%d", &numeroDos);

		resultado = numeroUno + numeroDos;

		printf("La suma es: %d", resultado);


	//printf("Ingrese un numero");


	//int n = prompt("Ingrese un numero"); // JS NO FUNCIONA

	//scanf("%d", &numero);

	//printf("\n El numero ingresado es : %d", numero);

	return EXIT_SUCCESS;
}
