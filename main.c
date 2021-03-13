#include "cabecera.h"

/** @file main.c
 *  @brief Funcion principal con el menu general
 *
 *  @author Enrique Martinez Roldan (metodos@e-roldan.net)
 *  @author Jose Antonio Sixto Berrocal(jsixto@ipn.mx)
 */

int main(void)
{
    int resp = 1;

    do
    {
        Menu_main(resp);
        printf("\n        Seleccione una Opcion: ");
        scanf("%d",&resp);

        switch(resp)
        {
        case 1:
            Crea_grafica();
            break;
        case 2:
            Maneja_tabulacion();
            resp = 1;
            break;
        case 3:
            LeeDatos_Biseccion();
            resp = 1;
            break;
        case 0:
            exit(0);
        default:
            resp = -1;
        }
    }
    while(resp != 0);

    return 0;
}
