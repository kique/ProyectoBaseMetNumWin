#include "cabecera.h"

/** \file analizador.c
 * \brief Analizador de expresiones, esta funcion permite evaluar una funci�n fx
 *         a partir de la cadena f
 *
 */


double fx(char *f,double xf)
{
    int err;
    double Fx;
    double x;
    int num_vars=1;

    te_variable vars[] = {{"x", &x}}; /* Almacena nombres y apuntadores */

    /* Compile the expression with variables. */
    x=xf;
    te_expr *expr = te_compile(f, vars, num_vars, &err);

    Fx=te_eval(expr);
    te_free(expr);

    return Fx;
}

/** \brief Funcion que muestra un mensaje de error al usuario en la cadena f
 *         que contiene la funcion
 *
 * \param *f
 * \return 0
 *
 */

int Parser_error(char *f)
{
    int err;
    int num_vars=1;
    double x;
    te_variable vars[] = {{"x", &x}}; /* Almacena nombres y apuntadores */
    /* Compile the expression with variables. */
    te_expr *expr = te_compile(f, vars, num_vars, &err);
    if(err!=0)
    {
        printf("\n\tError cerca de aqui:");
        printf("\n\t\t%s",f);
        printf("\n\t\t%*s^\n", err-1, "");
        te_free(expr);
        return err;
    }
    else
        te_free(expr);
        return 0;
}