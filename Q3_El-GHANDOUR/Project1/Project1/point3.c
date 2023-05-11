
#include <stdio.h>          //    
#include <stdlib.h>         //inclusion des bibliothèques nécessaires
#include <string.h>         //   
#include <stdint.h>         //    

#pragma warning(disable: 4996) //désactivation d'un avertissement spécifique

#define TITRE "TEST"            

int main() {
    const char* pt_message = TITRE;
    const char tbMSG[] = { 0x53, 0x4c, 0x4F, '\0' };
    char tbMSGcomplet[15];
    int annee = 2022;                                // on est en 2023
    int8_t version = 0x33;

    char ST[5];
    itoa(annee, ST, 10);

    strcpy(tbMSGcomplet, pt_message);

    char versionStr[10];

    itoa(version - 48, versionStr, 10);

    strcat(tbMSGcomplet, versionStr);
    strcat(tbMSGcomplet, " "); // pour ajouter l'espace 

    strcat(tbMSGcomplet, tbMSG);
  
    strcat(tbMSGcomplet, ST);

    printf("%s\n", tbMSGcomplet);

    return 0;
}
