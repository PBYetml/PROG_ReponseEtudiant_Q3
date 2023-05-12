// Mélissa Perret, SLO1

#include <stdio.h>
#include <string.h>   //pour strcpy, strcat et strlen 
#include <stdlib.h>   //pour itoa 
#include <stdint.h>   //pour les librairies int8_t



//-- déclaration de constantes --// 
#define TITRE	"TEST"


void main()
{
	const char* pt_message = TITRE;
	const char tbMSG[] = { 0x53, 0x4C, 0x4F };   //Affichage SLO 
	char tbMSGComplet[15];
	int annee = 2023;
	int8_t version = 0x33;  //Affichage 3 

	strcpy(tbMSGComplet, pt_message); // on copie pt_message dans tbMSGComplet => "TEST"

	// on utilise strncat pour pouvoir indiquer le nombre de caractères à ajouter
	// impossible d'utiliser strcat car version ne se termine pas par '\0'
	strncat(tbMSGComplet, &version, 1); // on ajoute version à tbMSGComplet => "TEST3"

	// note: quand on définie une string avec les guillemets " " le caractère de fin de string '\0' est ajouté automatique à la fin
	strcat(tbMSGComplet, " "); // on ajoute un espace à tbMSGComplet => "TEST3 "

	// pour ajouter tbMSG, le plus simple c'est d'utiliser strncat en indiquant la taille de tbMSG directement
	// mais si on on change tbMSG alors il faut penser à mettre la valeur 3 à jour ici aussi
	//strncat(tbMSGComplet, tbMSG, 3);

	// au lieu d'utiliser la valeur en dur, on la calcule grace à sizeof
	// le nombre de case du tableau est égale à sa taille totale divisée par la taille d'une case
	strncat(tbMSGComplet, tbMSG, sizeof(tbMSG) / sizeof(char)); // on ajoute tbMSG à tbMSGComplet => "TEST3 SLO"

	// on utilise itoa pour convert le nombre décimal annee en string et l'ajouter à tbMSGComplet
	//itoa(annee, &tbMSGComplet[9], 10);
	itoa(annee, &tbMSGComplet[strlen(tbMSGComplet)], 10);

	printf("%s", tbMSGComplet);
}

//strlen  = Permet de calculer la longueur, exprimée en caractère 
//strcat  = Permet de rajouter à une chaine de caractère déjà existante le contenu d'une seconde. 
//strcpy = permet de copier le contenu d'une chaine de caractère dans uen autre. 
//itoa =  La fonction convertit le nombre d'entrée en sa string C correspondante en utilisant la base spécifiée.