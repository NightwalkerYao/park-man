/**
 * @file include/list_types.h
 * @version 1.0
 * @brief Les prototypes des fonctions qui affichent la liste des types de vehicules
 * @author Groupe 10 MBDS/SIGL
 * @date 25 Avril 2021
 * 
 * Contient les prototypes des fonctions du src/list_types.c
 **/

#include <sqlite3.h>
#include "sqlite3_client.h"
#include "fort.h"

static ft_table_t *table;
static int types_count;

/**
 * Callback exécutée à la requête de comptage des types de vehicules
 * @fn static int callback_print_types_count(void *NotUsed, int argc, char **argv, char **azColName)
 * @param NotUsed void * 
 * @param int argc 
 * @param argv char**
 * @param azColName char**
 * @return void
 **/
static int callback_print_types_count(void *NotUsed, int argc, char **argv, char **azColName);

/**
 * Callback exécutée à la requête d'obtention des types de vehicules
 * @fn static int callback_print_types(void *NotUsed, int argc, char **argv, char **azColName);
 * @param NotUsed void * 
 * @param int argc 
 * @param argv char**
 * @param azColName char**
 * @return void
 **/
static int callback_print_types(void *NotUsed, int argc, char **argv, char **azColName);

/**
 * @fn void list_types()
 * @brief Affiche la liste des types de vehicule
 * @param void
 * @return void
 **/
void list_types();