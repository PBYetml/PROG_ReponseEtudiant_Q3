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


	strcpy(tbMSGComplet, pt_message);	//Copie de la valeur de pt_message dans tbMSGComplet => "TEST"
	
	strncat(tbMSGComplet, &version, 1);	// Copie du nombre "3"	
	tbMSGComplet[5] = ' ';				// Ajout d'un esspace dans la case n°5 de tbMSGComplet
	
	strncat(&tbMSGComplet[6], &tbMSG, sizeof(tbMSG) / sizeof(char));	// Copie du mot "SLO" stocké dans le tableau tbMSG
	
	itoa(annee, &tbMSGComplet[strlen(tbMSGComplet)], 10);				// Copie du nombre "2022" stocké dans la variable annee

	
	printf("%s \n",tbMSGComplet);		//Affichage du tableau tbMSGComplet
}
