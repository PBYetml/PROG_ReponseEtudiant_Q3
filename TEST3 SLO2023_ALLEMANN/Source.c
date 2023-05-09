#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable: 4996)

#define TITRE "TEST"

void main() {
	const char* pt_message = TITRE;
	const char tbMSG[] = { 0x53,0x4C,0x4F };
	char tbMSGComplet[15] = { ' ' };
	int annee = 2022;
	int8_t version = 0x33;

	char st[5];

	// titre
	strcpy(tbMSGComplet, pt_message);
	// 3
	tbMSGComplet[4] = version;
	// espace
	tbMSGComplet[5] = ' ';
	// SLO
	tbMSGComplet[6] = tbMSG[0];
	tbMSGComplet[7] = tbMSG[1];
	tbMSGComplet[8] = tbMSG[2];
	// annee
	itoa(annee, st, 10);
	strcat(tbMSGComplet, st);
	// printf
	printf("%s\n", tbMSGComplet);

}