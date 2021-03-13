#include "cabecera.h"

/** \file menus.c
 * \brief Funcion que imprime el menu principal
 * \param void
 * \return void
 */

void Menu_main(int m)
{
    system("cls");
    printf("        +------------------------------------------------------------+\n");
    printf("        |             MENU GENERAL DE METODOS NUMERICOS              |\n");
    printf("        +------------------------------------------------------------+\n");
    printf("        |                                                            |\n");
    printf("        | 1.- Graficacion                                            |\n");
    printf("        | 2.- Evaluar una Funcion Matematica                         |\n");
    printf("        | 3.- Localizar Raices                                       |\n");
    printf("        |                                                            |\n");
    printf("        | 0.- Salir                                                  |\n");
    printf("        +------------------------------------------------------------+\n");

    if(m > 4 || m < 0){
        printf("        |          WARNING:     !!!  Opcion Incorrecta  !!!          |\n");
        printf("        +------------------------------------------------------------+\n");
    }
    if(m == 1){
        printf("        |                                                            |\n");
        printf("        +------------------------------------------------------------+\n");
    }
    if(m == 2){
        printf("        |          SE EJECUTA:          Eval. de Funcion             |\n");
        printf("        +------------------------------------------------------------+\n");
    }
    if(m == 3){
        printf("        |          SE EJECUTA:            Localiza Raices            |\n");
        printf("        +------------------------------------------------------------+\n");
    }
}

/** \brief Funcion que imprime el menu para graficacion
 *
 * \param void
 * \return void
 *
 */

void Menu_graficacion(int m)
{
    system("cls");
    printf("        +------------------------------------------------------------+\n");
    printf("        |                     MENU GRAFICACION                       |\n");
    printf("        +------------------------------------------------------------+\n");
    printf("        |                                                            |\n");
    printf("        | 1.- Graficar una Expresion Matematica                      |\n");
    printf("        | 2.- Graficar datos desde un archivo                        |\n");
    printf("        | 3.- Graficar datos de un Archivo y Expresion Mstemática    |\n");
    printf("        |                                                            |\n");
    printf("        | 0.- Salir                                                  |\n");
    printf("        +------------------------------------------------------------+\n");

    if(m > 4 || m < 0){
        printf("        |          WARNING:     !!!  Opcion Incorrecta  !!!          |\n");
        printf("        +------------------------------------------------------------+\n");
    }
    if(m == 1){
        printf("        |          SE EJECUTA:      Graf. Expresion Matematica       |\n");
        printf("        +------------------------------------------------------------+\n");
    }
    if(m == 2){
        printf("        |          SE EJECUTA:             Graf. Datos               |\n");
        printf("        +------------------------------------------------------------+\n");
    }
    if(m == 3){
        printf("        |          SE EJECUTA:         Graf. Datos y Funcion         |\n");
        printf("        +------------------------------------------------------------+\n");
    }
    if(m == 4){
        printf("        |                                                            |\n");
        printf("        +------------------------------------------------------------+\n");
    }

}
