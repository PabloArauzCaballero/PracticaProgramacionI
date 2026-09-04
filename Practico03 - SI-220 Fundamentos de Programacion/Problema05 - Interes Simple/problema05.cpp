/*
    PRACTICO N 3 - SI-220 Fundamentos de Programacion
    PROBLEMA 5 - INTERES SIMPLE (Secuencial)

    Enunciado:
    Calcular el interes simple que ganara un capital C en un periodo de N
    anios, conociendo que la tasa de interes es T. Suponer que el interes
    es pagadero por cada anio y no es capitalizable.

    ---------------------------------------------------------------------
    ANALISIS DEL PROBLEMA (Entrada - Proceso - Salida)
    ---------------------------------------------------------------------
    ENTRADA : capital (C), tasa de interes anual en porcentaje (T),
              numero de anios (N).
    PROCESO : interes = C * (T/100) * N
              montoFinal = C + interes
    SALIDA  : el interes ganado y el monto final acumulado.

    ---------------------------------------------------------------------
    TABLA DE OBJETOS (variables usadas)
    ---------------------------------------------------------------------
    Nombre       | Tipo   | Descripcion
    -------------|--------|-------------------------------------------------
    capital      | double | Capital inicial C, en bolivianos
    tasaInteres  | double | Tasa de interes anual T, en PORCENTAJE (ej. 5 = 5%)
    anios        | double | Numero de anios N que dura la inversion
    interesGanado| double | Interes simple ganado al final del periodo
    montoFinal   | double | Capital + interes ganado (lo que se tiene al final)
*/

#include <iostream>
#include <iomanip> // Para fixed y setprecision: mostrar los Bs con 2 decimales
using namespace std;

int main()
{
    // 1) DECLARACION DE VARIABLES.
    // Usamos "double" porque el capital, la tasa y el resultado casi
    // siempre van a tener decimales (dinero, porcentajes).
    double capital, tasaInteres, anios, interesGanado, montoFinal;

    // 2) ENTRADA DE DATOS: pedimos cada dato por separado, con un mensaje
    // claro que indica exactamente que se espera (unidad incluida).
    cout << "Ingrese el capital inicial (en Bs): ";
    cin >> capital;

    cout << "Ingrese la tasa de interes anual (en %, ej. 5 para 5%): ";
    cin >> tasaInteres;

    cout << "Ingrese el numero de anios que dura la inversion: ";
    cin >> anios;

    // 3) PROCESO: aqui es donde los datos que entraron por cin "fluyen"
    // hacia el resultado.
    //
    // La formula del interes simple es: I = C * i * N
    // donde "i" es la tasa EXPRESADA COMO FRACCION (no como porcentaje).
    // Como el usuario ingresa la tasa como un numero tipo 5 (para 5%),
    // primero la convertimos a fraccion dividiendo entre 100.0
    // (tasaInteres/100.0 = 0.05). Luego multiplicamos ese valor por el
    // capital y por la cantidad de anios: el resultado es el interes
    // total ganado en todo el periodo (ya que el interes simple NO se
    // capitaliza, cada anio gana lo mismo sobre el capital original).
    interesGanado = capital * (tasaInteres / 100.0) * anios;

    // El monto final es simplemente el capital original mas el interes
    // que se gano durante esos N anios.
    montoFinal = capital + interesGanado;

    // 4) SALIDA: mostramos ambos resultados con 2 decimales (dinero) y
    // etiquetas claras que digan que representa cada numero.
    cout << fixed << setprecision(2);
    cout << "El interes ganado en " << anios << " anio(s) es: " << interesGanado << " Bs" << endl;
    cout << "El monto final (capital + interes) es: " << montoFinal << " Bs" << endl;

    return 0;
}
