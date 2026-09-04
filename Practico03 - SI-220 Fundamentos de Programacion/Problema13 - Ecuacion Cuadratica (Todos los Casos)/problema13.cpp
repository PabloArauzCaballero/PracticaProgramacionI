/*
    PRACTICO N.3 (SI-220) - PROBLEMA 13
    ECUACION CUADRATICA - TODOS LOS CASOS POSIBLES (Condicion)

    Enunciado:
    Calcular la solucion de una ecuacion cuadratica considerando todos los
    casos posibles. La forma general de la ecuacion cuadratica es
    a*x^2 + b*x + c = 0, donde a, b, c son valores conocidos.

    ---------------------------------------------------------------------------
    ANALISIS DEL PROBLEMA (Entrada - Proceso - Salida)
    ---------------------------------------------------------------------------
    ENTRADA : a, b, c (los tres coeficientes de la ecuacion).
    PROCESO : segun los valores de a y b, la ecuacion puede ser:
              1) 0 = 0            -> infinitas soluciones (a=0, b=0, c=0)
              2) 0 = numero != 0  -> sin solucion          (a=0, b=0, c!=0)
              3) una ecuacion LINEAL bx + c = 0            (a=0, b!=0)
              4) una ecuacion CUADRATICA real              (a!=0)
                 En este ultimo caso se calcula el discriminante
                 (b*b - 4*a*c) y, segun su signo, hay:
                   4a) dos raices reales distintas (discriminante > 0)
                   4b) una raiz real doble         (discriminante = 0)
                   4c) dos raices complejas        (discriminante < 0)
    SALIDA  : el tipo de caso detectado y la(s) raiz(raices) correspondiente(s).

    ---------------------------------------------------------------------------
    TABLA DE OBJETOS (variables usadas)
    ---------------------------------------------------------------------------
    Nombre            | Tipo   | Descripcion
    ------------------|--------|-----------------------------------------------
    a                 | double | Coeficiente cuadratico (acompana a x^2)
    b                 | double | Coeficiente lineal (acompana a x)
    c                 | double | Termino independiente
    discriminante     | double | b*b - 4*a*c ; decide cuantas raices reales hay
    x1, x2            | double | Raices reales (cuando existen dos distintas)
    x                 | double | Raiz unica (caso lineal o raiz doble)
    parteReal         | double | Parte real de las raices complejas
    parteImaginaria   | double | Parte imaginaria (positiva) de las raices complejas
*/

#include <iostream>
#include <cmath>   // Para poder usar sqrt() (raiz cuadrada)
using namespace std;

int main()
{
    // 1) DECLARACION DE VARIABLES
    double a, b, c;

    // 2) ENTRADA: pedimos los tres coeficientes, uno por uno.
    cout << "Ingrese el coeficiente a (de x^2): ";
    cin >> a;

    cout << "Ingrese el coeficiente b (de x): ";
    cin >> b;

    cout << "Ingrese el coeficiente c (termino independiente): ";
    cin >> c;

    // ---------------------------------------------------------------
    // PUNTO PEDAGOGICO: este problema no es "una sola formula", es una
    // CASCADA de decisiones (if / else if). El programa va preguntando,
    // en orden, "es este caso?" y solo entra en el primer bloque cuyo
    // "if" resulte verdadero; el resto de bloques se ignoran. Por eso
    // el ORDEN de las preguntas importa muchisimo: primero descartamos
    // los casos "degenerados" (a=0), y solo al final tratamos el caso
    // realmente cuadratico.
    // ---------------------------------------------------------------

    if (a == 0 && b == 0 && c == 0)
    {
        // Caso 1: la ecuacion queda "0 = 0", que es SIEMPRE verdadera,
        // sin importar el valor de x. Por eso hay infinitas soluciones.
        cout << "La ecuacion tiene INFINITAS SOLUCIONES (0 = 0 para cualquier x)." << endl;
    }
    else if (a == 0 && b == 0 && c != 0)
    {
        // Caso 2: la ecuacion queda "c = 0" con c distinto de cero,
        // lo cual es una afirmacion FALSA sin importar x. No hay x que
        // la resuelva.
        cout << "La ecuacion NO TIENE SOLUCION (queda " << c << " = 0, lo cual es falso)." << endl;
    }
    else if (a == 0 && b != 0)
    {
        // Caso 3: como a=0, el termino x^2 desaparece y la ecuacion se
        // reduce a una ecuacion LINEAL: b*x + c = 0  =>  x = -c / b.
        double x = -c / b;
        cout << "No es una ecuacion cuadratica (a = 0): se resuelve como ecuacion LINEAL." << endl;
        cout << "La solucion es: x = " << x << endl;
    }
    else
    {
        // Caso 4: a != 0, por lo tanto SI es una ecuacion cuadratica real.
        // El "discriminante" (b^2 - 4ac) nos dice cuantas raices REALES
        // tiene la ecuacion, sin necesidad de calcularlas primero.
        double discriminante = b * b - 4 * a * c;

        if (discriminante > 0)
        {
            // 4a) Discriminante positivo: la raiz cuadrada existe y es
            // distinta de cero, por lo que obtenemos DOS raices reales
            // diferentes (una sumando la raiz, otra restandola).
            double x1 = (-b + sqrt(discriminante)) / (2 * a);
            double x2 = (-b - sqrt(discriminante)) / (2 * a);
            cout << "Discriminante = " << discriminante << " (positivo) -> DOS raices reales distintas." << endl;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
        else if (discriminante == 0)
        {
            // 4b) Discriminante cero: sqrt(0) = 0, entonces x1 y x2
            // colapsan en un unico valor: una raiz real "doble".
            double x = -b / (2 * a);
            cout << "Discriminante = 0 -> UNA raiz real doble." << endl;
            cout << "x = " << x << endl;
        }
        else
        {
            // 4c) Discriminante negativo: no se puede sacar la raiz
            // cuadrada de un numero negativo dentro de los reales, por
            // eso las dos raices son NUMEROS COMPLEJOS conjugados:
            // parteReal +/- parteImaginaria * i.
            // Usamos sqrt(-discriminante) porque -discriminante ya es
            // positivo (discriminante es negativo en este bloque).
            double parteReal = -b / (2 * a);
            // Si b vale 0, la division puede dar "-0" por como funciona el
            // punto flotante (un cero con signo negativo). Matematicamente
            // -0 y 0 son el mismo valor, pero mostrar "-0" en pantalla
            // confundiria al usuario, asi que lo normalizamos a 0.
            if (parteReal == 0)
            {
                parteReal = 0;
            }
            double parteImaginaria = sqrt(-discriminante) / (2 * a);
            cout << "Discriminante = " << discriminante << " (negativo) -> DOS raices complejas conjugadas." << endl;
            cout << "x1 = " << parteReal << " + " << parteImaginaria << "i" << endl;
            cout << "x2 = " << parteReal << " - " << parteImaginaria << "i" << endl;
        }
    }

    return 0;
}
