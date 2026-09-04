/*
    PROBLEMA 9 - NUMERO PAR O IMPAR (Condicion)

    En un sistema de calculo se necesita identificar el tipo de numero.
    Desarrollar un algoritmo que solicite un numero entero y determine si
    el numero es par o impar. El sistema debe mostrar el resultado
    correspondiente.

    ---------------------------------------------------------------------------
    ANALISIS DEL PROBLEMA (Entrada - Proceso - Salida)
    ---------------------------------------------------------------------------
    ENTRADA : numero (entero).
    PROCESO : residuo = numero % 2 ; si residuo es 0 -> par, si no -> impar.
    SALIDA  : "Par" o "Impar".

    ---------------------------------------------------------------------------
    TABLA DE OBJETOS (variables usadas)
    ---------------------------------------------------------------------------
    Nombre   | Tipo | Descripcion
    ---------|------|---------------------------------------------
    numero   | int  | Numero entero ingresado por el usuario
    residuo  | int  | Resto de dividir numero entre 2
*/

#include <iostream>
using namespace std;

int main()
{
    int numero, residuo;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    // El operador % (modulo) devuelve el RESTO de una division entera.
    // Si un numero es divisible exactamente entre 2, el resto es 0 y por
    // lo tanto es PAR; si el resto es distinto de 0 (1, en este caso), es
    // IMPAR. En C++, el operador % tambien funciona correctamente con
    // numeros negativos para este proposito (ej. -8 % 2 = 0, sigue siendo par).
    //
    // Ejemplo numerico:
    //   numero = 7  ->  7 % 2 = 1  ->  residuo != 0  ->  IMPAR
    //   numero = 8  ->  8 % 2 = 0  ->  residuo == 0  ->  PAR
    residuo = numero % 2;

    // El residuo calculado se usa como condicion: si es 0, el flujo entra
    // al bloque "if"; si es distinto de 0 (1), entra al bloque "else".
    if (numero % 2 == 0) {
        cout << "El numero " << numero << " es PAR" << endl;
    }
    else {
        cout << "El numero " << numero << " es IMPAR" << endl;
    }

    return 0;
}
