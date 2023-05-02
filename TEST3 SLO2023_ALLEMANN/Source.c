#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable: 4996)

#define TITRE "TEST"

void main() {
	const char* pt_message = TITRE;
	const char tbMSG[] = { 0x53,0x4C,0x4F };
	char tbMSGComplet[15];
	int annee = 2022;
	int8_t version = 0x33;
	int i,a;
	a = strlen(tbMSGComplet);

	//char b;
	//itoa(version, b, 10);

	strcpy(tbMSGComplet, pt_message);
	
	printf("%s\n", tbMSGComplet);

}