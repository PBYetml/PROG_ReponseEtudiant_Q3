#include <stdio.h>                  // entrée - sortie
#include <stdlib.h>                 // pour les fonctions systèmes
#include <stdint.h>
#include <string.h>

#define TITRE "TEST"

void main()
{
	const char* pt_message = "TITRE";
	const char tbMSG[] = { 83, 76, 79 };
	char tbMSGcomplet[15];
	int annee = 2022; // on est en 2023
	int8_t version = 51;

	// mes instruction 
	strcpy(tbMSGcomplet, "TEST3 SLO2022");

	printf("%d \n", tbMSGcomplet);

} // test de branche
