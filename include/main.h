/**
 * @file include/main.h
 * @version 1.0
 * @brief Les prototypes des fonctions du point d'entrée du programme
 * @author Groupe 10 MBDS/SIGL
 * @date 25 Avril 2021
 * 
 * Contient les prototypes des fonctions du src/main.c
 **/
#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h>

/**
 * @fn int print_menu(void)
 * @brief Affichage du menu principal du programme
 * @param void
 * @return int 0
 **/
int print_menu(void);

/**
 * @fn main(int argc, char* argv[])
 * @brief Le point d'entrée de l'application
 * 
 * Présente l'application et gère les actions de l'utilisateur
 * 
 * @param argc int Le nombre d'arguments+1 fournits à l'appel en ligne de commande
 * @param argv char** La liste des arguments fournits à l'appel en ligne de commande
 * @return int 
 **/
int main(int argc, char* argv[]);