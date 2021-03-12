#include "cabecera.h"

/** @file main.c
 *  @brief Funcion principal con el menu general
 *
 *  @author Enrique Martinez Roldan (metodos@e-roldan.net)
 *  @author Jose Antonio Sixto Berrocal(jsixto@ipn.mx)
 *
 */

int main()
{
    int resp;

    do
    {
        menu_main();
        printf("\n\nSeleccione una opcion: ");
        scanf("%d",&resp);

        switch(resp)
        {
        case 1:
            crea_grafica();
            break;
        case 2:
            maneja_tabulacion();
            break;
        case 3:
            LeeDatos_Biseccion();
            break;
        case 0:

            exit(0);

        default:
            printf("\nOpcion Incorrecta!");
        }

    }
    while(resp != 0);

    return 0;
}
