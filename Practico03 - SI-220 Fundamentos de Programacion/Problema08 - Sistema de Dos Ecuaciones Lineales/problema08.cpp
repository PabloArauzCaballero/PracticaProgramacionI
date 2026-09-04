/*
    PRACTICO N 3 - SI-220 Fundamentos de Programacion
    PROBLEMA 8 - SISTEMA DE DOS ECUACIONES LINEALES (Condicion)

    Enunciado:
    Calcule la solucion de un sistema de dos ecuaciones con 2 variables de
    la forma:
        A*x + B*y = C
        D*x + E*y = F
    El algoritmo debe leer como entrada los 6 coeficientes de la ecuacion,
    y dar como salida la solucion X, Y, considerando TODOS los tipos de
    solucion posibles para todos los valores.

    ---------------------------------------------------------------------------
    ANALISIS DEL PROBLEMA (Entrada - Proceso - Salida)
    ---------------------------------------------------------------------------
    ENTRADA : A, B, C, D, E, F (los 6 coeficientes de las dos ecuaciones).
    PROCESO : Usamos el METODO DE CRAMER. No hace falta saber algebra lineal
              para seguir el codigo: un "determinante" aqui es solo un
              numero que se calcula con una formula fija a partir de los
              coeficientes.
                  det  = A*E - B*D            (determinante principal)
              Si det es distinto de 0, el sistema tiene UNA UNICA solucion:
                  x = (C*E - B*F) / det
                  y = (A*F - C*D) / det
              Si det es igual a 0, el sistema NO tiene solucion unica.
              En ese caso miramos dos numeros auxiliares:
                  numX = C*E - B*F
                  numY = A*F - C*D
              - Si numX y numY son AMBOS cero, las dos ecuaciones representan
                la MISMA recta -> hay INFINITAS soluciones.
              - Si al menos uno de los dos NO es cero, las rectas son
                paralelas y nunca se cruzan -> NO HAY solucion.
    SALIDA  : Un mensaje indicando que tipo de solucion tiene el sistema,
              y los valores de X e Y cuando la solucion es unica.

    ---------------------------------------------------------------------------
    TABLA DE OBJETOS (variables usadas)
    ---------------------------------------------------------------------------
    Nombre  | Tipo   | Descripcion
    --------|--------|------------------------------------------------------
    A       | double | Coeficiente de x en la primera ecuacion
    B       | double | Coeficiente de y en la primera ecuacion
    C       | double | Termino independiente de la primera ecuacion
    D       | double | Coeficiente de x en la segunda ecuacion
    E       | double | Coeficiente de y en la segunda ecuacion
    F       | double | Termino independiente de la segunda ecuacion
    det     | double | Determinante principal del sistema (A*E - B*D)
    numX    | double | Numerador auxiliar para X (solo se usa si det == 0)
    numY    | double | Numerador auxiliar para Y (solo se usa si det == 0)
    x       | double | Solucion para la variable x (si existe solucion unica)
    y       | double | Solucion para la variable y (si existe solucion unica)
*/

#include <iostream>
#include <iomanip> // Para fixed y setprecision: mostrar los decimales prolijos
using namespace std;

int main()
{
    // 1) DECLARACION DE VARIABLES.
    // Usamos "double" porque los coeficientes de una ecuacion pueden tener
    // decimales (ej. 2.5), no solo numeros enteros.
    double A, B, C, D, E, F;
    double det, numX, numY, x, y;

    // 2) ENTRADA DE DATOS: pedimos los 6 coeficientes, uno por uno, dejando
    // clarisimo a que ecuacion y a que variable pertenece cada uno. Asi el
    // usuario nunca se confunde sobre que numero va en cada casilla.
    cout << "--- Ecuacion 1: A*x + B*y = C ---" << endl;
    cout << "Ingrese el coeficiente A (de Ax + By = C): ";
    cin >> A;
    cout << "Ingrese el coeficiente B (de Ax + By = C): ";
    cin >> B;
    cout << "Ingrese el termino independiente C (de Ax + By = C): ";
    cin >> C;

    cout << "--- Ecuacion 2: D*x + E*y = F ---" << endl;
    cout << "Ingrese el coeficiente D (de Dx + Ey = F): ";
    cin >> D;
    cout << "Ingrese el coeficiente E (de Dx + Ey = F): ";
    cin >> E;
    cout << "Ingrese el termino independiente F (de Dx + Ey = F): ";
    cin >> F;

    // Mostramos los resultados con 2 decimales fijos, para que la salida
    // sea siempre legible (ej. "1.00" en vez de "1" o "0.999999").
    cout << fixed << setprecision(2);

    // 3) PROCESO: calculamos primero el determinante principal. Este UN
    // solo numero nos dice de entrada si el sistema tiene o no una
    // solucion unica, ANTES de calcular nada mas.
    det = (A * E) - (B * D);

    // PRIMERA DECISION: el determinante es distinto de cero?
    // (Usamos != 0.0 porque estamos comparando numeros con decimales;
    // en un caso real de examen tambien podria compararse contra un
    // margen muy pequenio, pero para este ejercicio basico comparamos
    // directamente contra 0.0 como pide el enunciado).
    if (det != 0.0)
    {
        // Camino 1: SOLUCION UNICA. Aplicamos las formulas de Cramer:
        // cada variable se calcula dividiendo un "determinante auxiliar"
        // (que reemplaza una columna por los terminos independientes)
        // entre el determinante principal.
        x = ((C * E) - (B * F)) / det;
        y = ((A * F) - (C * D)) / det;

        cout << "\nEl sistema tiene SOLUCION UNICA." << endl;
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
    else
    {
        // Camino 2: det == 0, no hay solucion unica. Para distinguir si
        // son INFINITAS soluciones o NINGUNA solucion, calculamos dos
        // numeros auxiliares (los mismos numeradores que usariamos en
        // Cramer, pero como el det es 0 no podemos dividir por el).
        numX = (C * E) - (B * F);
        numY = (A * F) - (C * D);

        // SEGUNDA DECISION (anidada dentro de la primera): ambos
        // numeradores son cero?
        if (numX == 0.0 && numY == 0.0)
        {
            // Las dos ecuaciones son en realidad la misma recta:
            // cualquier punto de esa recta es solucion -> infinitas.
            cout << "\nEl sistema tiene INFINITAS SOLUCIONES "
                 << "(las dos ecuaciones representan la misma recta)." << endl;
        }
        else
        {
            // Las rectas son paralelas pero distintas: nunca se cruzan.
            cout << "\nEl sistema NO TIENE SOLUCION "
                 << "(las rectas son paralelas y no se cruzan)." << endl;
        }
    }

    return 0;
}
