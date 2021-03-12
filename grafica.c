#include "cabecera.h"

/** \file grafica.c
 * \brief Funcion que inicia el proceso de graficacion determinando si se grafica
 * una expresion matematica o si se grafican datos leidos de un archivo.
 *
 * \param void
 *
 * \return void
 *
 */

void crea_grafica(void)
{
    struct GrafDat dt; /*Se declara un estructura tipo GrafDat */

    int resp;

    do
    {
        menu_graficacion(); /* Imprime el menu de graficacion */
        printf("\n\nSeleccione una opcion: ");
        scanf("%d",&resp);

        switch(resp)
        {
        case 1:
            dt.tipo_gra='f'; /* se establece graficar una funcion*/
            maneja_graficacion(&dt); /* Se llama a la funcion manejadora enviando
                                        la direccion de la estructura dt*/
            break;
        case 2:
            dt.tipo_gra='p'; /* se establece graficar datos de un archivo*/
            maneja_graficacion(&dt); /* Se llama a la funcion manejadora enviando
                                        la direccion de la estructura dt*/
            break;
        case 0:
            menu_main();

            break;
        default:
            printf("\nOpcion Incorrecta!");
        }

    }
    while(resp != 0);
}

/** \brief Funcion que pide los datos necesarios para graficar
 *
 * \param *dtgrar apuntador a la estructura tipo GrafDat
 *
 * \return void
 *
 */

void maneja_graficacion(struct GrafDat *dtgraf)
{
    float min, max;
    char expr[100];
    if (dtgraf->tipo_gra == 'f')
    {
        printf("Graficación de una funcion introducida por teclado:\n\n");
        printf("\n Ingrese la funcion a graficar: ");
        scanf("%s",expr);

        Parser_gnuplot(expr); /* Acondiciona la expresion cambiando el operador de exponenciacion */

        strcpy(dtgraf->funcion, expr);

    }
    else
    {
        printf("Graficación de datos leidos desde una archivo:\n\n");
        strcpy(dtgraf->archivo, "datos.txt");
    }

    strcpy(dtgraf->titulo, "Grafica de f(x)");
    strcpy(dtgraf->ejex, "x");
    strcpy(dtgraf->ejey, "f(x)");

    printf("\n Ingrese el valor minimo en x: ");
    scanf("%f",&min);
    dtgraf->xmin=min;
    printf("\n Ingrese el valor maximo en x: ");
    scanf("%f",&max);
    dtgraf->xmax=max;

    Grafica(dtgraf);/**< Se llama a la funcion que ejecuta la graficacion con gnuplot */


}

/** \brief Funcion que transforma la cadena f de caracteres con la expresion a graficar,
 *   al formato adecuado para gnuplot; en especifico cambia "^" por "**"
 * \param *g apuntador a la cadena con la expresion a graficar
 *
 * \return void
 *
 */

void Parser_gnuplot(char *g)
{
    int i=0,j=0;
    char G[100];


    while(g[i] != '\0')
    {
        if(g[i]=='^'){
            G[j]='*';
            j++;
            G[j]='*';
            j++;
        }
        else{
            G[j]=g[i];
            j++;
        }
        i++;
    }

    G[j]='\0';

    strcpy(g,G);
}

/** \brief Funcion que permite graficar una serie de puntos o una funcion matematica
 * con la configuracion contenida en el archivo config.gp
 * \param  *datos Apuntador a la estructura con la informacion a graficar
 *
 * \return void
 *
 */

void Grafica(struct GrafDat *datos)
{
    FILE *gnuplotPipe;

     gnuplotPipe = popen ("gnuplot -persistent", "w");

/********************************************//**
 *  ... Manda comandos a GNUPLOT, incluidas las
 *  ... configuraciones guardadas en el archivo
 *  ... config.gp
 ***********************************************/
    fprintf(gnuplotPipe, "set title \"%s\"\n",datos->titulo);
    fprintf(gnuplotPipe, "load \"config.gp\"\n");
    fprintf(gnuplotPipe, "set xrange[%lf:%lf]\n",datos->xmin-0.3,datos->xmax+0.3);
    fprintf(gnuplotPipe, "set arrow from %f,0 to %f,0 as 5\n",datos->xmin-0.3,datos->xmax+0.3);
    fprintf(gnuplotPipe, "set xlabel \"%s\"\n",datos->ejex);
    fprintf(gnuplotPipe, "set ylabel \"%s\"\n",datos->ejey);

/********************************************//**
 *  ... Crea las graficas a partir de una funcion
 *  ... o de un archivo de puntos
 ***********************************************/
    if(datos->tipo_gra == 'f')
    {
        Parser_gnuplot(datos->funcion);
        fprintf(gnuplotPipe, "plot %s w l ls 2\n",datos->funcion);
    }
    else if(datos->tipo_gra == 'p')
    {
        fprintf(gnuplotPipe, "plot \"%s\" w p ls 2\n",datos->archivo);
    }

/********************************************//**
 *  ... Cierra la tuberia
 ***********************************************/
    pclose(gnuplotPipe);
}
