/*
    PRACTICO N 3 - SI-220 Fundamentos de Programacion
    PROBLEMA 9 - SEGUNDOS A HORAS, MINUTOS Y SEGUNDOS (Secuencial)

    Enunciado:
    Construir un algoritmo que lea una cantidad de SEGUNDOS y los convierta
    en HORAS, MINUTOS Y SEGUNDOS.
    Ejemplo: 3750 Segundos -> 1 Hora, 2 minutos, 30 Segundos

    ---------------------------------------------------------------------------
    ANALISIS DEL PROBLEMA (Entrada - Proceso - Salida)
    ---------------------------------------------------------------------------
    ENTRADA : totalSegundos (cantidad total de segundos que ingresa el usuario).
    PROCESO : separar totalSegundos en horas, minutos y segundos usando
              division entera (/) y el operador modulo (%).
    SALIDA  : horas, minutos y segundos resultantes de esa conversion.

    ---------------------------------------------------------------------------
    TABLA DE OBJETOS (variables usadas)
    ---------------------------------------------------------------------------
    Nombre           | Tipo | Descripcion
    -----------------|------|--------------------------------------------------
    totalSegundos    | int  | Cantidad total de segundos ingresada por el usuario
    horas            | int  | Horas completas contenidas en totalSegundos
    segundosRestantes| int  | Lo que sobra despues de sacar las horas completas
    minutos          | int  | Minutos completos contenidos en segundosRestantes
    segundosFinales  | int  | Segundos que sobran despues de sacar los minutos
*/

#include <iostream>
using namespace std;

int main()
{
    // 1) DECLARACION DE VARIABLES.
    // Usamos "int" (numeros enteros) a proposito: en este problema SI nos
    // interesa que la division "recorte" los decimales, porque una hora no
    // puede ser "1.04166..." horas, tiene que ser un numero entero de horas
    // completas, y lo que sobra se sigue repartiendo en minutos y segundos.
    int totalSegundos, horas, segundosRestantes, minutos, segundosFinales;

    // 2) ENTRADA DE DATOS
    cout << "Ingrese la cantidad total de segundos: ";
    cin >> totalSegundos;

    // 3) PROCESO: aqui esta el corazon del algoritmo, usando dos operadores:
    //
    //    - La DIVISION ENTERA (/) entre enteros en C++ descarta los
    //      decimales. Por ejemplo 3750 / 3600 da 1 (no 1.041666...), porque
    //      solo nos interesa saber cuantas "horas completas" caben.
    //
    //    - El operador MODULO (%) nos da el RESTO de una division entera,
    //      es decir, lo que "sobra" y no alcanza a formar una unidad
    //      completa mas. Por ejemplo 3750 % 3600 da 150 (los segundos que
    //      quedan despues de sacar 1 hora completa de 3600 segundos).
    //
    //    Repetimos la misma idea dos veces: primero para separar las horas
    //    del resto, y luego para separar los minutos de los segundos que
    //    finalmente sobran.

    // Cuantas horas completas (bloques de 3600 segundos) hay en total.
    horas = totalSegundos / 3600;

    // Lo que sobra despues de haber sacado esas horas completas.
    segundosRestantes = totalSegundos % 3600;

    // De ese resto, cuantos minutos completos (bloques de 60 segundos) hay.
    minutos = segundosRestantes / 60;

    // Lo que finalmente sobra ya no alcanza para formar ni un minuto mas:
    // son los segundos finales.
    segundosFinales = segundosRestantes % 60;

    // 4) SALIDA: mostramos el resultado de la conversion con etiquetas claras.
    cout << totalSegundos << " Segundos equivalen a: "
         << horas << " Horas, " << minutos << " minutos, "
         << segundosFinales << " Segundos" << endl;

    return 0;
}
