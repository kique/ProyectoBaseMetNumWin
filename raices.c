#include "cabecera.h"

/** \file raices.c
 * \brief Funcion que lee datos de entrada para llamar a la funcion de
 *  Biseccion
 * \param void
 *
 * \return void
 *
 */

void LeeDatos_Biseccion(void)
{
    char expre[30]; /// *expr  apuntador a la cadena que contendra la expresion matematica
    int err;    /// err    variable que indica si ubo error en la expresion leida
    int cifras; /// cifras Numero de cifras significatovas
    int maxit;  /// maxit  Numero maximo de iteraciones
    double xa;  /// xa     Valor inicial del intervalo
    double xb;  /// xb     Valor finl del intervalo
    int c,length;

    do{
        system("cls");
        printf("Localizacion de una raiz por el metodo de la Biseccion\n\n");

        while ((c = getchar()) != '\n' && c != EOF);

        printf("\nIngrese la ecuacion f(x)= ");
        fgets(expre,30,stdin);

        length = strlen(expre);

        if (length > 0 && expre[length - 1] == '\n')
            expre[length - 1] = '\0';

        err=Parser_error(expre);

    }while(err != 0);


    printf("\nDe el numero de cifras significativas n: ");
    scanf("%d",&cifras);
    printf("\nDe el numero maximo de iteraciones: ");
    scanf("%d",&maxit);
    printf("\nDe el valor inicial del intervalo xa: ");
    scanf("%lf",&xa);
    printf("\nDe el valor inicial del intervalo xb: ");
    scanf("%lf",&xb);

    Biseccion(expre,xa,xb,cifras,maxit);

    printf("\n\n");
    system("pause");
}

/** \brief Metodo de la biseccion
 *
 * \param *f Apuntador a la cadena con la expresion a analizar
 * \param Xa Valor inicial del intervalo
 * \param Xb Valor final del intervalo
 * \param cifras Numero de cifras significativas consideradas
 * \param maxit Numero maximo de iteraciones
 * \return void
 *
 */

void Biseccion(char *f,double Xa,double Xb,int cifras,int maxit)
{
    double Xr, Xrant=0, Ea, tol;
    int iter = 0,err = 0;

    tol = 0.5 * pow(10,(2 - cifras));


    if(fx(f,Xa) * fx(f,Xb) > 0.0){
        printf("Error: Prueba con otro intervalo...");
        err = -1;
        return -1;
    }

    do{
        Xr = (Xa + Xb) / 2.0;
        if(fx(f,Xa) * fx(f,Xr) < 0.0){
            Xb = Xr;
        }
        else{
            Xa = Xr;
        }
        Ea = fabs((Xr - Xrant) / Xr) * 100;
        Xrant = Xr;
        iter = iter + 1;

        printf("\nLa raiz es: %lf en %3d iteraciones y un error = %lf",Xr,iter,Ea);

    }while(Ea > tol && iter < maxit);

}
