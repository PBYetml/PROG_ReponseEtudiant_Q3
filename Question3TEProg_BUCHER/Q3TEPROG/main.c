#define _CRT_SECURE_NO_WARNINGS	//La directive suivante désactive les avertissements de sécurité liés à certaines fonctions de la bibliothèque standard.

#include <stdio.h>              // Inclut la bibliothèque standard d'entrée-sortie en C.
#include <stdlib.h>             // Inclut la bibliothèque standard de fonctions générales en C.
#include <string.h>             // Inclut la bibliothèque standard de manipulation de chaînes de caractères en C.
#include <stdint.h>             // Inclut la bibliothèque standard de types entiers en C.



#define TITRE "TEST"            // Définit une macro qui remplace toutes les occurrences de "TITRE" par "TEST" dans le code.

int main()
{
	const char* pt_message = TITRE;                 
	char tbMSG[] = { 0x53, 0x4c, 0x4F, '\0' };      
	char tbMSGComplet[15];                          
	int annee = 2023;                               
	int8_t version = 0x33;                          


	char anneeStr[5];
	_itoa(annee, anneeStr, 10);			// transforme l'année en une chaîne de caractères.
	
	strcpy(tbMSGComplet, pt_message);	// ajoute la chaine de caractère TEST au tableau tbMSGComplet.

	
	char versionStr[] = {version, '\0'}; // permet de convertir 0x33 en ascii comme pour tbMSG.
	strcat(tbMSGComplet, versionStr);	// ajoute la chaine de caractère du numéro de version au tableau tbMSGComplet.

	strcat(tbMSGComplet, " ");			//ajoute un espace.

	strcat(tbMSGComplet, tbMSG);		// ajoute la chaine de caractère SLO au tableau tbMSGComplet.

	strcat(tbMSGComplet, anneeStr);		// ajoute la chaine de caractère de l'année au tableau tbMSGComplet.

	printf("%s\n", tbMSGComplet);		// Affichage.

	return 0;
}
