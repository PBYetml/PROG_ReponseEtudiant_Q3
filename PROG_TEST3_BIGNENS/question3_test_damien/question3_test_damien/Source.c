#include <string.h> // pour strcat
#include <stdio.h>                  // entrée - sortie
#include <stdlib.h>   
#include <stdio.h> // pour print
#define TITRE "TEST"
void main ()
{
	char nombre_de_caractere;
	char st_annee[4];
	strcpy(tbMSGComplet, pt_message);
	strcat(tbMSGComplet, version);
	strcat(tbMSGComplet, " ");
	strcat(tbMSGComplet, tbMSG);
	itoa(annee, st_annee, 10);
	strcat(tbMSGComplet, st_annee);
	nombre_de_caractere = strlen (tbMSGComplet);
	printf("% s \n", tbMSGComplet);

}
