/*
    PRACTICO N.3 - SI-220 Fundamentos de Programacion
    PROBLEMA 3 - NOTA FINAL PONDERADA (Secuencial)

    Enunciado:
    Construir un algoritmo para calcular la nota final de un alumno
    sabiendo que rindio 3 examenes parciales ponderados como 40 puntos,
    un examen final de 40 puntos, un proyecto final de 20 puntos.
    La nota final es la suma de los tres conceptos.

    Nota de interpretacion: se asume que el docente ya reparte los 40
    puntos del componente "examenes parciales" entre los 3 parciales al
    calificarlos (por ejemplo, cada parcial puede valer hasta 13.33
    puntos). Por eso el algoritmo simplemente SUMA los tres parciales
    ya calificados sobre ese total de 40, sin volver a repartir nada.

    ---------------------------------------------------------------------------
    ANALISIS DEL PROBLEMA (Entrada - Proceso - Salida)
    ---------------------------------------------------------------------------
    ENTRADA : notaParcial1, notaParcial2, notaParcial3 (suman hasta 40 puntos),
              examenFinal (hasta 40 puntos), proyecto (hasta 20 puntos).
    PROCESO : notaFinal = (notaParcial1 + notaParcial2 + notaParcial3)
                          + examenFinal + proyecto
    SALIDA  : el valor de "notaFinal" (sobre 100 puntos en total).

    ---------------------------------------------------------------------------
    TABLA DE OBJETOS (variables usadas)
    ---------------------------------------------------------------------------
    Nombre        | Tipo   | Descripcion
    --------------|--------|---------------------------------------------
    notaParcial1  | double | Puntaje obtenido en el primer examen parcial
    notaParcial2  | double | Puntaje obtenido en el segundo examen parcial
    notaParcial3  | double | Puntaje obtenido en el tercer examen parcial
    examenFinal   | double | Puntaje obtenido en el examen final (sobre 40)
    proyecto      | double | Puntaje obtenido en el proyecto final (sobre 20)
    notaFinal     | double | Suma de todos los componentes (sobre 100)
*/

#include <iostream>
using namespace std;

int main()
{
    // 1) DECLARACION DE VARIABLES.
    // Usamos "double" porque las calificaciones pueden tener decimales
    // (por ejemplo, 12.5 puntos).
    double notaParcial1, notaParcial2, notaParcial3;
    double examenFinal, proyecto, notaFinal;

    // 2) ENTRADA DE DATOS: cada componente de la nota se pide por
    //    separado. Asi el flujo de datos queda claro: cada cout hace
    //    UNA pregunta especifica, y el cin que le sigue guarda esa
    //    respuesta en su propia variable, sin mezclarla con las demas.
    cout << "Ingrese la nota del primer examen parcial (sobre 13.33): ";
    cin >> notaParcial1;

    cout << "Ingrese la nota del segundo examen parcial (sobre 13.33): ";
    cin >> notaParcial2;

    cout << "Ingrese la nota del tercer examen parcial (sobre 13.33): ";
    cin >> notaParcial3;

    cout << "Ingrese la nota del examen final (sobre 40): ";
    cin >> examenFinal;

    cout << "Ingrese la nota del proyecto final (sobre 20): ";
    cin >> proyecto;

    // 3) PROCESO: aqui es donde "fluyen" los datos hacia el resultado.
    //    Los tres parciales se suman entre si (dan el componente de 40
    //    puntos de los parciales), y a ese subtotal se le suma el
    //    examen final y el proyecto. El resultado de toda esa suma se
    //    guarda en una variable nueva: notaFinal. Ninguna de las
    //    variables de entrada se modifica en este paso.
    notaFinal = (notaParcial1 + notaParcial2 + notaParcial3)
              + examenFinal
              + proyecto;

    // 4) SALIDA: mostramos el resultado final con una etiqueta clara.
    cout << "La nota final del alumno es: " << notaFinal << " sobre 100" << endl;

    return 0;
}
