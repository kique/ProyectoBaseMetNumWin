#include "cabecera.h"

/** \brief Funcion que pide los datos para llamar  a la funcion tabula_funcion()
 *
 * \param void
 *
 * \return void
 *
 */


void maneja_tabulacion(void)
{
    double xa,xb,inc;
    int length,c,archivo;
    char expresion[30];

    printf("\nTabulacion de una Funcion\n\n");

    while ((c = getchar()) != '\n' && c != EOF);

    printf("\nIngrese la ecuacion f(x)= ");
    fgets(expresion,30,stdin);

    length = strlen(expresion);

    if (length > 0 && expresion[length - 1] == '\n')
        expresion[length - 1] = '\0';

    printf("Evaluando:\n\t%s\n", expresion);

    printf("\n Ingrese el valor inicial en x: ");
    scanf("%lf",&xa);
    printf("\n Ingrese el valor final en x: ");
    scanf("%lf",&xb);
    printf("\n Ingrese el valor del incremento: ");
    scanf("%lf",&inc);
    printf("\n Desea guardar la salida en un archivo? (1=si/0=no): ");
    scanf("%d",&archivo);

    tabula_funcion(xa,xb,inc,expresion,archivo);

}

/** \brief Funcion que evalua  y tabula una expresion e imprime datos en pantalla
 *  o en un archivo.
 * \param xi Valor inicial del intervalo
 * \param xf Valor final del intervalo
 * \param inc Incremento en x
 * \param *ap_epr puntador a la expresion a evaluar
 * \param archivo Bandera para la salida a archivo
 * \return 0 o 1 indicando si hubo error
 *
 */


int tabula_funcion(double xi, double xf, double inc, char *ap_expr,int archivo)
{
    double fx,x;
    FILE *pF; //Creamos un apuntador de tipo FILE

    if(archivo==1)
    {
        pF = fopen("datos.txt","w"); //Abrimos el archivo en modo
                                              //escritura
        if(pF == NULL) //Verificamos si no fue posible abrir el archivo
        {
            puts("Error no se pudo crear el archivo");
            return(1); // Si no fue posible se termina el programa
                              //con la senal 1
        }
    }

    x = xi;

    te_variable vars[] = {{"x",&x}};

    te_expr *n1;

    n1 = te_compile(ap_expr,vars,1,0);

    do
    {
        fx = te_eval(n1);

        printf("\n%10.6lf | %10.6lf ",x,fx);

        if(archivo==1)
               fprintf(pF, "\n%lf  %lf ",x,fx); //Se escribe en el archivo
                                                            //archivo la cadena
                                                            // usando el //apuntador pF
        x = x + inc;

    }
    while(x <= xf);

    if(archivo==1)
        fclose(pF); // Cerramos el archivo

    te_free(n1);

    printf("\n\n");
    system("pause");

    return 0;

}
