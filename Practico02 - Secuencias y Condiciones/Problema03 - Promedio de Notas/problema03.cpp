/*
    PROBLEMA 3 - PROMEDIO DE NOTAS (Secuencial)

    Un docente desea calcular el promedio de las calificaciones de un estudiante.
    Desarrollar un algoritmo que solicite tres notas, calcule el promedio de
    las tres y muestre el resultado.

    ---------------------------------------------------------------------------
    ANALISIS DEL PROBLEMA (Entrada - Proceso - Salida)
    ---------------------------------------------------------------------------
    ENTRADA : nota1, nota2, nota3 (tres calificaciones ingresadas por el usuario).
    PROCESO : promedio = (nota1 + nota2 + nota3) / 3
    SALIDA  : el valor de "promedio".

    ---------------------------------------------------------------------------
    TABLA DE OBJETOS (variables usadas)
    ---------------------------------------------------------------------------
    Nombre    | Tipo   | Descripcion
    ----------|--------|---------------------------------------------
    nota1     | double | Primera calificacion ingresada
    nota2     | double | Segunda calificacion ingresada
    nota3     | double | Tercera calificacion ingresada
    promedio  | double | Resultado de (nota1+nota2+nota3)/3
*/

#include <iostream>
using namespace std;

int main()
{
    // 1) DECLARACION DE VARIABLES.
    // Usamos "double" y no "int" aunque las notas pudieran escribirse como
    // numeros enteros (ej. 80), porque el PROMEDIO casi siempre da un
    // resultado con decimales (ej. (80+90+70)/3 = 80, pero (80+85+70)/3 =
    // 78.33...). Si declararamos todo como int, C++ haria una "division
    // entera" y descartaria los decimales, dando un resultado incorrecto.
    double nota1, nota2, nota3, promedio;

    // 2) ENTRADA DE DATOS: se piden las tres notas, una por una.
    cout << "Ingrese la primera nota: ";
    cin >> nota1;

    cout << "Ingrese la segunda nota: ";
    cin >> nota2;

    cout << "Ingrese la tercera nota: ";
    cin >> nota3;

    // 3) PROCESO: las tres notas (ya guardadas en sus variables) se suman,
    //    y esa suma se divide entre 3.0. El resultado final se guarda en
    //    una nueva variable, "promedio". Usamos 3.0 (y no 3) para dejar en
    //    claro que queremos una division real, con decimales.
    promedio = (nota1 + nota2 + nota3) / 3.0;

    // 4) SALIDA: mostramos el promedio calculado.
    cout << "El promedio de las tres notas es: " << promedio << endl;

    return 0;
}
