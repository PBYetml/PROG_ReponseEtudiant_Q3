#define _CRT_SECURE_NO_WARNINGS // Définit une directive de préprocesseur pour supprimer les avertissements de sécurité liés à l'utilisation de certaines fonctions dans Visual Studio.
#include <stdio.h>              // Inclut la bibliothèque standard d'entrée-sortie en C.
#include <stdlib.h>             // Inclut la bibliothèque standard de fonctions générales en C.
#include <string.h>             // Inclut la bibliothèque standard de manipulation de chaînes de caractères en C.
#include <stdint.h>             // Inclut la bibliothèque standard de types entiers en C.

#define TITRE "TEST"            // Définit une macro qui remplace toutes les occurrences de "TITRE" par "TEST" dans le code.

int main() {
    const char* pt_message = TITRE;                 // Déclare un pointeur constant vers une chaîne de caractères "TITRE".
    char tbMSG[] = { 0x53, 0x4c, 0x4F, '\0' };      // Initialise un tableau de caractères avec les valeurs hexadécimales 0x53, 0x4c, 0x4F et un caractère nul (\0).
    char tbMSGComplet[15];                          // Déclare un tableau de caractères de taille 15 pour stocker le message final.
    int annee = 2022;                               // Initialise une variable entière avec la valeur 2022.
    int8_t version = 0x33;                          // Initialise une variable entière de 8 bits avec la valeur hexadécimale 0x33.

    // Convertit l'année en une chaîne de caractères.
    char anneeStr[5];
    _itoa(annee, anneeStr, 10);

    // Copie la première partie du message dans tbMSGComplet.
    strcpy(tbMSGComplet, pt_message);

    // Concatène le numéro de version à tbMSGComplet.
    char versionStr[10];
    _itoa(version, versionStr, 10);
    strcat(tbMSGComplet, versionStr);

    // Concatène la deuxième partie du message à tbMSGComplet.
    strcat(tbMSGComplet, tbMSG);

    // Concatène l'année à tbMSGComplet.
    strcat(tbMSGComplet, anneeStr);

    // Affiche le message final.
    printf("%s\n", tbMSGComplet);

    // Appelle strlen explicitement pour obtenir la longueur de tbMSGComplet.
    size_t msgLen = strlen(tbMSGComplet);
    printf("Le message final a %zu caractères.\n", msgLen);

    return 0;
}

