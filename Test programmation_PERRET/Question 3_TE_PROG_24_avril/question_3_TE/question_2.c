// Solution question 2, TE2 SM2 
// Mélissa Perret, SLO1


#include <stdio.h>
#include <string.h>   //pour strcpy, strcat et strlen 
#include <stdlib.h>   //pour itoa 

//-- déclaration de constantes --// 
#define TEPROG			"TEST"


void main()
{
	char* pt_message = TEPROG;
	const char tbMSG[] = { 0x54, 0x45, 0x53, 0x54, 0x33, 0x20, 0x53, 0x4c, 0x4f, 0x32, 0x30, 0x32, 0x32 };
	size_t strlen(const char tbMSG[]);   //fourni la longeur du tableau 
	char* strcpy(char* copieTableau, const char* tbMSG[]);  
	char* strcat(char* ajoutContenuTableau, const char* copieTableau);
	char* itoa(int value, char* str, int base); 
}
