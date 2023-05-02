#include <stdio.h>                  // entrée - sortie
#include <stdlib.h>                 // pour les fonctions systèmes
#include <stdint.h>

#define TITRE "TEST"

void main()
{
	const char* pt_message = TITRE;
	const char tbMSG[] = { 0x53, 0x4C, 0x4F };
	char tbMSGComplet[15];
	int annee = 2023;
	int8_t version = 0x33;

	char i = 0;

	//char* strcpy(char pt_message, char tbMSGComplet[]);

	/*void InitInfoTableau(tbMSGComplet * ptTableau) {

	}*/
		//affichage du message
		for (i = 0; i < 15; i++)
		{
			//printf("%c", ptTableau.tbMSGComplet[i]);
		}

}