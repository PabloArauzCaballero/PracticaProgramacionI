/*
    PROBLEMA 7 - INTERES COMPUESTO (Practico N.3, SI-220)

    Enunciado:
    Calcular el interes compuesto I que ganara un capital C en un periodo
    de N anios, conociendo que la tasa de interes es T.

    ---------------------------------------------------------------------------
    ANALISIS DEL PROBLEMA (Entrada - Proceso - Salida)
    ---------------------------------------------------------------------------
    ENTRADA : capital (C), tasaInteres (T, en porcentaje), anios (N).
    PROCESO : A diferencia del interes SIMPLE (donde cada anio se gana el
              mismo interes fijo sobre el capital original), en el interes
              COMPUESTO los intereses generados en un anio se SUMAN al
              capital y, al anio siguiente, tambien generan intereses.
              Es decir, se gana "interes sobre interes".
              La formula que resume ese efecto acumulado es:
                  montoFinal = C * (1 + T/100)^N
                  interesCompuesto = montoFinal - C
    SALIDA  : el interes compuesto ganado y el monto final acumulado.

    ---------------------------------------------------------------------------
    TABLA DE OBJETOS (variables usadas)
    ---------------------------------------------------------------------------
    Nombre            | Tipo   | Descripcion
    ------------------|--------|-----------------------------------------------
    capital           | double | Capital inicial C, en bolivianos
    tasaInteres       | double | Tasa de interes T, en porcentaje anual
    anios             | double | Cantidad de anios N del periodo
    montoFinal        | double | Capital + intereses acumulados al final
    interesCompuesto  | double | Ganancia total por intereses (montoFinal - C)
*/

#include <iostream>
#include <cmath>     // Para la funcion pow(base, exponente)
#include <iomanip>   // Para fixed y setprecision (mostrar 2 decimales)

using namespace std;

int main()
{
    // 1) DECLARACION DE VARIABLES
    double capital, tasaInteres, anios, montoFinal, interesCompuesto;

    // 2) ENTRADA DE DATOS: pedimos cada dato por separado, con un mensaje
    //    claro y preciso, y lo leemos de inmediato con cin.
    cout << "Ingrese el capital inicial C (en Bs): ";
    cin >> capital;

    cout << "Ingrese la tasa de interes anual T (en %): ";
    cin >> tasaInteres;

    cout << "Ingrese la cantidad de anios N del periodo: ";
    cin >> anios;

    // 3) PROCESO: aqui esta la formula del interes compuesto.
    //
    //    "tasaInteres" llega como un numero de porcentaje (por ejemplo 5,
    //    que representa 5%). Para poder operar matematicamente con ella
    //    la convertimos a su forma decimal dividiendola entre 100.0
    //    (5/100.0 = 0.05).
    //
    //    Luego calculamos el factor de crecimiento anual (1 + T/100) y lo
    //    elevamos a la potencia N usando pow(base, exponente) de <cmath>.
    //    Ese resultado, multiplicado por el capital, nos da el monto final
    //    acumulado despues de N anios (capital + todos los intereses que
    //    se fueron "reinvirtiendo" cada anio).
    //
    //    Finalmente, el interes compuesto ganado es simplemente la
    //    diferencia entre ese monto final y el capital original.
    montoFinal = capital * pow(1.0 + tasaInteres / 100.0, anios);
    interesCompuesto = montoFinal - capital;

    // 4) SALIDA: mostramos los resultados con 2 decimales (fixed +
    //    setprecision(2)), que es lo habitual para mostrar dinero.
    cout << fixed << setprecision(2);
    cout << "El interes compuesto ganado es: " << interesCompuesto << " Bs" << endl;
    cout << "El monto final acumulado es: " << montoFinal << " Bs" << endl;

    return 0;
}
