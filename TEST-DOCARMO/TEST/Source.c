#define TITRE "TEST"
#include <stdio.h>

void main()
{
	const char* pt_message = TITRE;
	const char tbMSG[] = { 0x53, 0x4C, 0x4F };
	char tbMSGComplet[15];
	int annee = 2022;
	int version = 0x33;



	for (i = 0; i < 14; i++)
	{
		printf("%c", tbMSGComplet[i]);
	}
}