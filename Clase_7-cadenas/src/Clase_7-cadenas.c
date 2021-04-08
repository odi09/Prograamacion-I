/*
 ============================================================================
 Name        : Clase_7-cadenas.c
 Author      : Odi
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void Cadena(char* pArray)
{
	int i=0;
while(pArray[i]!=0)
       {
		printf("%c",pArray[i]);
		i++;
		}
}

int main(void) {
	setbuf(stdout, NULL);

	char texto[]={'A','B','C','D',0};//SIEMPRE en comillas ''.
// \0 es el 0 numerico
	Cadena(texto);

	return EXIT_SUCCESS;
}
