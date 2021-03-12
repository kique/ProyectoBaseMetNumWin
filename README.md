### Programa de Análisis Numérico

Este proyecto servirá como base para el desarrollo del proyecto final del curso de Métodos Numéricos para la carrera de Ingeniería Eléctrica de la ESIME Zacatenco.

El proyecto es desarollado por los profesores:

- Enrique Martínez Roldán
- Jose Antonio Sixto Berrocal
- Manuel Torres Sabino
- Javier E. Aviles Nuñez

El proyecto se distribuye bajo licencia Zlib

El repositorio del proyecto se encuentra en Github donde se seguirá actualizando para mejorar las características de este proyecto base. Se puede descargar de la siguiente liga:

Plantilla proyecto Métodos numéricos


El proyecto está escrito en *ANSI C*, y se utilizó el *IDE Code::Blocks* para su construcción, está compuesto por los siguientes archivos:

1. **analizador.c** Contiene las funciones para analizar y evaluar expresiones matemáticas.
2. **arreglos.c** Contiene funciones que servirán como apoye para el trabajo con matrices.
3. **grafica.c** Contiene funciones para graficar espresiones matemáticas o datos de un archivo usando el graficador Gnuplot.
4. **main.c** Archivo con la función principal main() con el menu principal del programa.
5. **menus.c** Contiene las funciones que imprimen el menú y los submenus, asi como las funciones para la elección de las opciones correspondientes.
6. **raices.c** Contiene las funciones para la localización de raíces.
7. **cabecera.h** Archivo donde se agregan directivas del preprocesador y prototipos de funciones.
8. **tinyexpr.c** y **tinyexpr.h** Archivos

El proyecto usa dos herramietas de codigo abierto para la graficación y el analisis de expresiones matemáticas:

####Gnuplot
<img style="float: right;" src="http://www.gnuplot.info/figs/gaussians.png">

[Gnuplot](http://www.gnuplot.info) es una utilidad gráfica de línea de comandos portátil para Linux, OS/2, MS Windows, OSX, VMS y muchas otras plataformas. El código fuente está protegido por derechos de autor pero se distribuye libremente (es decir, no tiene que pagar por él). Originalmente se creó para permitir que los científicos y los estudiantes visualicen funciones matemáticas y datos de forma interactiva, pero ha crecido para admitir muchos usos no interactivos, como las secuencias de comandos web. También se utiliza como motor de graficación por aplicaciones de terceros como Octave. Gnuplot ha recibido apoyo y está en desarrollo activo desde 1986.

Gnuplot admite muchos tipos diferentes de gráficos 2D y 3D
    Aquí hay una [galería de demostración](http://www.gnuplot.info/screenshots/index.html#demos "galería gnuplot").

Gnuplot admite muchos tipos diferentes de salida
    - Visualización de pantalla interactiva: 		multiplataforma (Qt, wxWidgets, x11) o específico del sistema (MS Windows, OS / 2)
    - Salida directa al archivo: 		postscript (incluido eps), pdf, png, gif, jpeg, LaTeX, metafont, emf, svg, ...

Formatos de visualización web que se pueden usar con el mouse: 		HTML5, svg

#### Tinyexpr
<img style="float: right;" src="https://codeplea.com/public/content/tinyexpr_logo.png">

[Tinyexpr](https://github.com/codeplea/tinyexpr) es un pequeño motor de evaluación recursivo descendente y analizador de expresiones matemáticas. Es útil cuando desea agregar la capacidad de evaluar expresiones matemáticas en tiempo de ejecución sin complicar su proyecto.

Además de los operadores matemáticos estándar y la precedencia, TinyExpr también admite las funciones matemáticas estándar de C y el enlace de variables en tiempo de ejecución.

Características

- C99 sin dependencias .
- Funciona sólo con un archivo fuente en ANSI C y un archivo de encabezado.
- Sencillo y rápido.
- Implementa la precedencia de los operadores estándar.
- Usa funciones matemáticas estándar de C (sin, sqrt, ln, etc.).
- Puede agregar funciones y variables personalizadas fácilmente.
- Puede vincular variables en el momento de la evaluación.
- Publicado bajo la licencia zlib, gratis para casi cualquier uso.
- Fácil de usar e integrar con su código
- Seguro para subprocesos, siempre y cuando lo sea su malloc.

