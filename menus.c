#include "cabecera.h"

/** \file menus.c
 * \brief Funcion que imprime el menu principal
 * \param void
 * \return void
 */

void menu_main(void)
{
    system("cls");
    printf("MENU GENERAL DE METODOS NUMERICOS");
    printf("\n\nSeleccione una Opcion:");
    printf("\n1.- Graficacion");
    printf("\n2.- Evaluar una Funcion Matematica");
    printf("\n3.- Localizar Raices");

    printf("\n0.- Salir");
}

/** \brief Funcion que imprime el menu para graficacion
 *
 * \param void
 * \return void
 *
 */

void menu_graficacion(void)
{
    system("cls");
    printf("MENU GRAFICACION");
    printf("\n\nSeleccione una Opcion:");
    printf("\n1.- Graficar una Expresion Matematica");
    printf("\n2.- Graficar datos desde un archivo");

    printf("\n0.- Salir");
}
