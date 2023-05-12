#define _CRT_SECURE_NO_WARNINGS	//La directive suivante d�sactive les avertissements de s�curit� li�s � certaines fonctions de la biblioth�que standard.

#include <stdio.h>              // Inclut la biblioth�que standard d'entr�e-sortie en C.
#include <stdlib.h>             // Inclut la biblioth�que standard de fonctions g�n�rales en C.
#include <string.h>             // Inclut la biblioth�que standard de manipulation de cha�nes de caract�res en C.
#include <stdint.h>             // Inclut la biblioth�que standard de types entiers en C.



#define TITRE "TEST"            // D�finit une macro qui remplace toutes les occurrences de "TITRE" par "TEST" dans le code.

int main()
{
	const char* pt_message = TITRE;                 
	char tbMSG[] = { 0x53, 0x4c, 0x4F, '\0' };      
	char tbMSGComplet[15];                          
	int annee = 2023;                               
	int8_t version = 0x33;                          


	char anneeStr[5];
	_itoa(annee, anneeStr, 10);			// transforme l'ann�e en une cha�ne de caract�res.
	
	strcpy(tbMSGComplet, pt_message);	// ajoute la chaine de caract�re TEST au tableau tbMSGComplet.

	
	char versionStr[] = {version, '\0'}; // permet de convertir 0x33 en ascii comme pour tbMSG.
	strcat(tbMSGComplet, versionStr);	// ajoute la chaine de caract�re du num�ro de version au tableau tbMSGComplet.

	strcat(tbMSGComplet, " ");			//ajoute un espace.

	strcat(tbMSGComplet, tbMSG);		// ajoute la chaine de caract�re SLO au tableau tbMSGComplet.

	strcat(tbMSGComplet, anneeStr);		// ajoute la chaine de caract�re de l'ann�e au tableau tbMSGComplet.

	printf("%s\n", tbMSGComplet);		// Affichage.

	return 0;
}
