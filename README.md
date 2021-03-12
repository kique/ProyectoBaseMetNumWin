### Programa de An�lisis Num�rico

Este proyecto servir� como base para el desarrollo del proyecto final del curso de M�todos Num�ricos para la carrera de Ingenier�a El�ctrica de la ESIME Zacatenco.

El proyecto es desarollado por los profesores:

- Enrique Mart�nez Rold�n
- Jose Antonio Sixto Berrocal
- Manuel Torres Sabino
- Javier E. Aviles Nu�ez

El proyecto se distribuye bajo licencia Zlib

El repositorio del proyecto se encuentra en Github donde se seguir� actualizando para mejorar las caracter�sticas de este proyecto base. Se puede descargar de la siguiente liga:

Plantilla proyecto M�todos num�ricos


El proyecto est� escrito en *ANSI C*, y se utiliz� el *IDE Code::Blocks* para su construcci�n, est� compuesto por los siguientes archivos:

1. **analizador.c** Contiene las funciones para analizar y evaluar expresiones matem�ticas.
2. **arreglos.c** Contiene funciones que servir�n como apoye para el trabajo con matrices.
3. **grafica.c** Contiene funciones para graficar espresiones matem�ticas o datos de un archivo usando el graficador Gnuplot.
4. **main.c** Archivo con la funci�n principal main() con el menu principal del programa.
5. **menus.c** Contiene las funciones que imprimen el men� y los submenus, asi como las funciones para la elecci�n de las opciones correspondientes.
6. **raices.c** Contiene las funciones para la localizaci�n de ra�ces.
7. **cabecera.h** Archivo donde se agregan directivas del preprocesador y prototipos de funciones.
8. **tinyexpr.c** y **tinyexpr.h** Archivos

El proyecto usa dos herramietas de codigo abierto para la graficaci�n y el analisis de expresiones matem�ticas:

####Gnuplot
<img style="float: right;" src="gaussians.png">

[Gnuplot](http://www.gnuplot.info) es una utilidad gr�fica de l�nea de comandos port�til para Linux, OS/2, MS Windows, OSX, VMS y muchas otras plataformas. El c�digo fuente est� protegido por derechos de autor pero se distribuye libremente (es decir, no tiene que pagar por �l). Originalmente se cre� para permitir que los cient�ficos y los estudiantes visualicen funciones matem�ticas y datos de forma interactiva, pero ha crecido para admitir muchos usos no interactivos, como las secuencias de comandos web. Tambi�n se utiliza como motor de graficaci�n por aplicaciones de terceros como Octave. Gnuplot ha recibido apoyo y est� en desarrollo activo desde 1986.

Gnuplot admite muchos tipos diferentes de gr�ficos 2D y 3D
    Aqu� hay una [galer�a de demostraci�n](http://www.gnuplot.info/screenshots/index.html#demos "galer�a gnuplot").

Gnuplot admite muchos tipos diferentes de salida
    - Visualizaci�n de pantalla interactiva: 		multiplataforma (Qt, wxWidgets, x11) o espec�fico del sistema (MS Windows, OS / 2)
    - Salida directa al archivo: 		postscript (incluido eps), pdf, png, gif, jpeg, LaTeX, metafont, emf, svg, ...

Formatos de visualizaci�n web que se pueden usar con el mouse: 		HTML5, svg

#### Tinyexpr
<img style="float: right;" src="tinyexpr.png">

[Tinyexpr](https://github.com/codeplea/tinyexpr) es un peque�o motor de evaluaci�n recursivo descendente y analizador de expresiones matem�ticas. Es �til cuando desea agregar la capacidad de evaluar expresiones matem�ticas en tiempo de ejecuci�n sin complicar su proyecto.

Adem�s de los operadores matem�ticos est�ndar y la precedencia, TinyExpr tambi�n admite las funciones matem�ticas est�ndar de C y el enlace de variables en tiempo de ejecuci�n.

Caracter�sticas

- C99 sin dependencias .
- Funciona s�lo con un archivo fuente en ANSI C y un archivo de encabezado.
- Sencillo y r�pido.
- Implementa la precedencia de los operadores est�ndar.
- Usa funciones matem�ticas est�ndar de C (sin, sqrt, ln, etc.).
- Puede agregar funciones y variables personalizadas f�cilmente.
- Puede vincular variables en el momento de la evaluaci�n.
- Publicado bajo la licencia zlib, gratis para casi cualquier uso.
- F�cil de usar e integrar con su c�digo
- Seguro para subprocesos, siempre y cuando lo sea su malloc.

