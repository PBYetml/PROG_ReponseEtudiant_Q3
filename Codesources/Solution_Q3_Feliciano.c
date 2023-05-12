#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#define TITRE "TEST"

// A effacer - juste pour demo 

void main() 
{
	const char* pt_message = TITRE;
	const char tbMSG[] = { 0x53,0x4C,0x4F };
	char tbMSGComplet[15] = { ' ' };
	int annee = 2022;
	int8_t version = 0x33;

	//char string[5];

	for (char i = 0; i < strlen(pt_message); i++)
	{
		tbMSGComplet[i] = pt_message[i];
	}
	// Copie du nombre "3"
	strcpy(&tbMSGComplet[4], &version);		
	tbMSGComplet[5] = ' ';
	// Copie du mot "SLO"
	strcat(&tbMSGComplet[6], &tbMSG);
	// Copie du nombre "2022"
	itoa(annee, &tbMSGComplet[9], 10);

	
	printf("%s \n",tbMSGComplet);
}
