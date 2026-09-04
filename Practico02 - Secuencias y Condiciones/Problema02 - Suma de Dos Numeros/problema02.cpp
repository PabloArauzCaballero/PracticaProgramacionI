/*
    PROBLEMA 2 - SUMA DE DOS NUMEROS (Secuencial)

    Un sistema de calculo basico necesita realizar operaciones simples.
    Desarrollar un algoritmo que solicite al usuario dos numeros enteros,
    calcule la suma de ambos numeros y muestre el resultado obtenido.

    ---------------------------------------------------------------------------
    ANALISIS DEL PROBLEMA (Entrada - Proceso - Salida)
    ---------------------------------------------------------------------------
    ENTRADA : numero1, numero2 (dos numeros enteros ingresados por el usuario).
    PROCESO : suma = numero1 + numero2
    SALIDA  : el valor de "suma".

    ---------------------------------------------------------------------------
    TABLA DE OBJETOS (variables usadas)
    ---------------------------------------------------------------------------
    Nombre    | Tipo | Descripcion
    ----------|------|---------------------------------------------
    numero1   | int  | Primer numero ingresado por el usuario
    numero2   | int  | Segundo numero ingresado por el usuario
    suma      | int  | Resultado de sumar numero1 + numero2
*/

#include <iostream>
using namespace std;

int main()
{
    // 1) DECLARACION DE VARIABLES
    int numero1, numero2, suma;

    // 2) ENTRADA DE DATOS: cada numero entra por separado, uno a la vez,
    //    y se guarda de inmediato en su propia "casilla" de memoria.
    cout << "Ingrese el primer numero entero: ";
    cin >> numero1;

    cout << "Ingrese el segundo numero entero: ";
    cin >> numero2;

    // 3) PROCESO: aqui es donde realmente "fluyen" los datos: tomamos el
    //    contenido de numero1 y numero2, los combinamos con el operador +,
    //    y el resultado de esa operacion se guarda en una TERCERA variable
    //    (suma). numero1 y numero2 no se modifican en este paso.
    suma = numero1 + numero2;

    // 4) SALIDA: mostramos el contenido final de la variable "suma".
    cout << "El resultado de la suma es: " << suma << endl;

    return 0;
}
