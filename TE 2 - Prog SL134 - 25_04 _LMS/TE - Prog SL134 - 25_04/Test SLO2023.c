#include <stdio.h>                  // entrée - sortie
#include <stdlib.h>                 // pour les fonctions systèmes
#include <string.h>
#include <stddef.h>
#define TITRE "TEST"


void main()
{
	const char* pt_message = TITRE;
	const char tbMSG[] = { 0x53, 0x4c, 0x4F };
	char tbMSGComplet[15];
	int annee = 2022;
	int size
	int8_t version = 0x33;

	char* itoa(annee, char* newStr, 10);
	size_t strlen(tbMSG)
	strcpy(tbMSG[size_t], newStr);
	tbMSGComplet = strcat(tbMSG[], *pt_message);

	printf(" %s \n", tbMSGComplet);
}