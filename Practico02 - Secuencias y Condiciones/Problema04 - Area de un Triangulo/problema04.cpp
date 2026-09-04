/*
    PROBLEMA 4 - AREA DE UN TRIANGULO (Secuencial)

    En una aplicacion de geometria se necesita calcular el area de un triangulo.
    Desarrollar un algoritmo que solicite la base y la altura de un triangulo,
    calcule su area utilizando la formula correspondiente y muestre el resultado.

    ---------------------------------------------------------------------------
    ANALISIS DEL PROBLEMA (Entrada - Proceso - Salida)
    ---------------------------------------------------------------------------
    ENTRADA : base, altura (medidas del triangulo, ingresadas por el usuario).
    PROCESO : area = (base * altura) / 2
    SALIDA  : el valor de "area".

    ---------------------------------------------------------------------------
    TABLA DE OBJETOS (variables usadas)
    ---------------------------------------------------------------------------
    Nombre  | Tipo   | Descripcion
    --------|--------|---------------------------------------------
    base    | double | Base del triangulo
    altura  | double | Altura del triangulo
    area    | double | Resultado de (base*altura)/2
*/

#include <iostream>
using namespace std;

int main()
{
    // 1) DECLARACION DE VARIABLES.
    // Usamos "double" porque la base y la altura de un triangulo casi
    // siempre se miden con decimales (ej. 4.5 cm), y ademas el area
    // resultante tambien puede tener decimales.
    double base, altura, area;

    // 2) ENTRADA DE DATOS.
    cout << "Ingrese la base del triangulo: ";
    cin >> base;

    cout << "Ingrese la altura del triangulo: ";
    cin >> altura;

    // 3) PROCESO: multiplicamos base por altura y dividimos entre 2.0.
    // Usamos 2.0 (en vez de 2) para reforzar que queremos una division
    // real con decimales, aunque aqui base y altura ya son "double" y la
    // division ya seria real de todas formas: es una buena costumbre para
    // no olvidarla el dia que se trabaje con enteros.
    area = (base * altura) / 2.0;

    // 4) SALIDA.
    cout << "El area del triangulo es: " << area << endl;

    return 0;
}
