/*
    PROBLEMA 12 - ESTACION DEL ANIO SEGUN FECHA (Condicion)
    Practico N3 - SI-220 Fundamentos de Programacion

    Enunciado:
    Dada una fecha en dia, mes y anio, hacer un programa que determine si
    es "primavera", "verano", "otonio" o "invierno". Se sabe que la
    primavera comienza el 21 de septiembre, el verano el 21 de diciembre,
    el otonio el 21 de marzo, y el invierno el 21 de junio.
    (Estas fechas corresponden al hemisferio sur, como en Bolivia).

    ---------------------------------------------------------------------------
    ANALISIS DEL PROBLEMA (Entrada - Proceso - Salida)
    ---------------------------------------------------------------------------
    ENTRADA : dia, mes, anio (la fecha que ingresa el usuario).
    PROCESO : comparar el par (mes, dia) contra los 4 rangos de estaciones
              del hemisferio sur, para decidir en cual de ellos cae la fecha.
    SALIDA  : el nombre de la estacion correspondiente a esa fecha.

    ---------------------------------------------------------------------------
    TABLA DE OBJETOS (variables usadas)
    ---------------------------------------------------------------------------
    Nombre  | Tipo | Descripcion
    --------|------|-----------------------------------------------------
    dia     | int  | Dia de la fecha ingresada (1-31)
    mes     | int  | Mes de la fecha ingresada (1-12)
    anio    | int  | Anio de la fecha ingresada (solo se usa para mostrarlo)

    ---------------------------------------------------------------------------
    RANGOS DE LAS ESTACIONES (hemisferio sur):
    ---------------------------------------------------------------------------
    VERANO    : 21/dic -> 20/mar  (el rango "cruza" el fin de anio)
    OTONIO    : 21/mar -> 20/jun
    INVIERNO  : 21/jun -> 20/sep
    PRIMAVERA : 21/sep -> 20/dic
*/

#include <iostream>
using namespace std;

int main()
{
    // 1) DECLARACION DE VARIABLES: guardamos la fecha en tres variables
    //    enteras separadas, porque el usuario la ingresa en tres partes.
    int dia, mes, anio;

    // 2) ENTRADA DE DATOS: pedimos cada dato por separado, con un mensaje
    //    claro que indica exactamente que se espera (y el rango valido).
    cout << "Ingrese el dia (1-31): ";
    cin >> dia;

    cout << "Ingrese el mes (1-12): ";
    cin >> mes;

    cout << "Ingrese el anio: ";
    cin >> anio;

    // 3) PROCESO: aqui esta el corazon del problema. Como los datos que
    //    entraron por cin (dia, mes) ya estan guardados en sus variables,
    //    los "leemos" dentro de cuatro condiciones booleanas -una por
    //    estacion- para decidir en cual cae la fecha ingresada.
    //
    //    Cada condicion combina dos ideas con el operador logico OR (||):
    //      a) el mes es uno de los meses "completos" de esa estacion, o
    //      b) el mes es el mes de transicion, pero el dia ya alcanzo (o
    //         todavia no supero) el dia 21 que marca el cambio de estacion.
    //
    //    Por ejemplo, para el OTONIO (21/mar -> 20/jun):
    //      - marzo cuenta solo si dia >= 21 (mes==3 && dia>=21)
    //      - abril y mayo cuentan completos (mes==4 || mes==5)
    //      - junio cuenta solo si dia <= 20 (mes==6 && dia<=20)
    //
    //    El VERANO es especial porque "cruza" el fin de anio (empieza en
    //    diciembre y termina en marzo del anio siguiente), pero la logica
    //    es la misma: se arma con OR igual que las demas.
    //
    //    Como las cuatro condiciones son mutuamente excluyentes (una fecha
    //    valida cae en una sola estacion), usamos if / else if / else if /
    //    else: el programa evalua las condiciones EN ORDEN y, apenas una
    //    resulta verdadera, ejecuta esa rama y se salta el resto.

    if ((mes == 12 && dia >= 21) || mes == 1 || mes == 2 || (mes == 3 && dia <= 20))
    {
        // VERANO: 21/dic -> 20/mar
        cout << "La fecha " << dia << "/" << mes << "/" << anio
             << " corresponde a: VERANO" << endl;
    }
    else if ((mes == 3 && dia >= 21) || mes == 4 || mes == 5 || (mes == 6 && dia <= 20))
    {
        // OTONIO: 21/mar -> 20/jun
        cout << "La fecha " << dia << "/" << mes << "/" << anio
             << " corresponde a: OTONIO" << endl;
    }
    else if ((mes == 6 && dia >= 21) || mes == 7 || mes == 8 || (mes == 9 && dia <= 20))
    {
        // INVIERNO: 21/jun -> 20/sep
        cout << "La fecha " << dia << "/" << mes << "/" << anio
             << " corresponde a: INVIERNO" << endl;
    }
    else
    {
        // PRIMAVERA: 21/sep -> 20/dic (todo lo que no cayo en las 3
        // condiciones anteriores cae aqui, por descarte).
        cout << "La fecha " << dia << "/" << mes << "/" << anio
             << " corresponde a: PRIMAVERA" << endl;
    }

    return 0;
}
