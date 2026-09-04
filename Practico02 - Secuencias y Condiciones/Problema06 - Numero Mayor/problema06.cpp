/*
    PROBLEMA 6 - NUMERO MAYOR (Condicion)

    Enunciado:
    En un sistema matematico se requiere comparar dos numeros. Desarrollar
    un algoritmo que solicite dos numeros al usuario y determine cual de
    los dos es el numero mayor. El sistema debe mostrar el numero mayor.

    ---------------------------------------------------------------------------
    ANALISIS DEL PROBLEMA (Entrada - Proceso - Salida)
    ---------------------------------------------------------------------------
    ENTRADA : numero1, numero2 (los dos numeros que el usuario ingresa).
    PROCESO : comparar numero1 con numero2 para saber si el primero es
              mayor, si el segundo es mayor, o si ambos son iguales.
    SALIDA  : el numero mayor entre los dos, o un aviso de que son iguales
              cuando corresponda.

    ---------------------------------------------------------------------------
    TABLA DE OBJETOS (variables usadas)
    ---------------------------------------------------------------------------
    Nombre     | Tipo   | Descripcion
    -----------|--------|-----------------------------------------------
    numero1    | double | Primer numero ingresado por el usuario
    numero2    | double | Segundo numero ingresado por el usuario
*/

#include <iostream>
using namespace std;

int main()
{
    // Declaramos las dos variables donde se guardaran los numeros.
    // Usamos "double" (no "int") para que el programa tambien admita
    // valores con decimales, por ejemplo 8.5.
    double numero1, numero2;

    // ENTRADA: pedimos UN dato por cada cout, y lo leemos con cin
    // inmediatamente despues. Asi el flujo de datos queda claro:
    // "pido -> leo -> pido -> leo".
    cout << "Ingrese el primer numero: ";
    cin >> numero1;

    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    // PROCESO + SALIDA: aqui esta la estructura condicional if/else,
    // que es el corazon de este problema. La idea de una condicion es
    // que el programa "decide" que camino tomar segun si una expresion
    // es verdadera o falsa: es una bifurcacion en el flujo del programa.
    //
    // Contemplamos TRES caminos (ramas) posibles:
    //   1) numero1 es mayor que numero2.
    //   2) numero1 es igual a numero2 (empate).
    //   3) numero2 es mayor que numero1 (lo que queda si las dos
    //      condiciones anteriores fueron falsas).
    //
    // IMPORTANTE: aunque escribamos tres bloques, en cada ejecucion del
    // programa SOLO UNA de las tres ramas llega a ejecutarse. El programa
    // evalua la primera condicion; si es verdadera, ejecuta ese bloque y
    // se salta todo lo demas. Si es falsa, pasa a evaluar la condicion
    // del "else if"; si esa tambien es falsa, cae automaticamente en el
    // "else" final, sin necesidad de evaluar ninguna condicion adicional.

    if (numero1 > numero2)
    {
        // Camino 1 (verdadero): numero1 es estrictamente mayor.
        cout << "El numero mayor es: " << numero1 << endl;
    }
    else if (numero1 == numero2)
    {
        // Camino 2: la primera condicion fue falsa, pero esta segunda
        // condicion (empate) resulta verdadera.
        cout << "Ambos numeros son iguales" << endl;
    }
    else
    {
        // Camino 3 (else final): si numero1 no es mayor y tampoco es
        // igual a numero2, entonces por descarte numero2 es el mayor.
        cout << "El numero mayor es: " << numero2 << endl;
    }

    return 0;
}
