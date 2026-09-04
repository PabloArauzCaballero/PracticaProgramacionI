/*
    PRACTICO N.3 - SI-220 Fundamentos de Programacion
    PROBLEMA 6 - CONVERSION DE HORA 24H A 12H (Condicion)

    Enunciado:
    Construir un programa que permita convertir una hora dada en formato de
    24 horas (hora, minuto, segundo) a su equivalente en formato de 12 horas
    (AM o PM). Por ejemplo si se introduce 14, 45, 10 (formato de 24 horas),
    debe imprimirse 2, 45, 10 PM (formato 12 horas).

    ---------------------------------------------------------------------------
    ANALISIS DEL PROBLEMA (Entrada - Proceso - Salida)
    ---------------------------------------------------------------------------
    ENTRADA : hora24 (0 a 23), minuto (0 a 59), segundo (0 a 59).
    PROCESO : convertir la hora de formato 24h a formato 12h, decidiendo el
              periodo (AM/PM) segun estos 4 casos:
                - hora24 == 0            -> hora12 = 12, periodo = "AM" (medianoche)
                - hora24 > 0 y < 12       -> hora12 = hora24, periodo = "AM"
                - hora24 == 12            -> hora12 = 12, periodo = "PM" (mediodia)
                - hora24 > 12             -> hora12 = hora24 - 12, periodo = "PM"
              El minuto y el segundo NO cambian, solo se re-imprimen.
    SALIDA  : hora12, minuto, segundo y el periodo (AM/PM).

    ---------------------------------------------------------------------------
    TABLA DE OBJETOS (variables usadas)
    ---------------------------------------------------------------------------
    Nombre   | Tipo   | Descripcion
    ---------|--------|---------------------------------------------------
    hora24   | int    | Hora ingresada por el usuario, en formato 24h (0-23)
    minuto   | int    | Minuto ingresado (0-59), no cambia entre formatos
    segundo  | int    | Segundo ingresado (0-59), no cambia entre formatos
    hora12   | int    | Hora ya convertida a formato 12h (1-12)
    periodo  | string | Texto "AM" o "PM" segun corresponda
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 1) DECLARACION DE VARIABLES.
    // Usamos "int" porque horas, minutos y segundos son siempre numeros
    // enteros (no tiene sentido, por ejemplo, "14.5 horas" en un reloj).
    int hora24, minuto, segundo;
    int hora12;
    string periodo;

    // 2) ENTRADA DE DATOS: pedimos los tres valores por separado, dejando
    // claro que la hora debe venir en formato de 24 horas (0 a 23).
    cout << "Ingrese la hora en formato 24h (0-23): ";
    cin >> hora24;

    cout << "Ingrese los minutos (0-59): ";
    cin >> minuto;

    cout << "Ingrese los segundos (0-59): ";
    cin >> segundo;

    // 3) PROCESO: aqui es donde el dato "hora24" que guardamos en el paso
    // anterior se transforma en dos datos nuevos: "hora12" y "periodo".
    // Como la regla de conversion NO es una sola formula matematica sino
    // que depende de EN QUE RANGO cae la hora, necesitamos una cadena de
    // decisiones (if / else if / else). El programa evalua las condiciones
    // en orden, de arriba hacia abajo, y en cuanto una es verdadera ejecuta
    // SOLO ese bloque y se salta el resto.
    if (hora24 == 0)
    {
        // Caso especial: la medianoche (00:xx:xx) se muestra como 12 AM,
        // no como "0 AM", que no tendria sentido en un reloj de 12 horas.
        hora12 = 12;
        periodo = "AM";
    }
    else if (hora24 < 12)
    {
        // De 1 a 11 horas, el numero de la hora no cambia, y como todavia
        // no llegamos al mediodia, el periodo es AM.
        hora12 = hora24;
        periodo = "AM";
    }
    else if (hora24 == 12)
    {
        // Caso especial: el mediodia (12:xx:xx) ya se muestra como 12 PM
        // (no le restamos 12, porque 12 - 12 seria 0, que tampoco existe
        // en un reloj de 12 horas).
        hora12 = 12;
        periodo = "PM";
    }
    else
    {
        // Este "else" final cubre el ultimo caso posible: hora24 > 12
        // (13 a 23). Le restamos 12 para "traer" la hora al rango de 1 a
        // 11, y el periodo pasa a ser PM.
        hora12 = hora24 - 12;
        periodo = "PM";
    }

    // 4) SALIDA: mostramos la hora ya convertida, junto con los minutos y
    // segundos (que nunca cambiaron) y el periodo calculado.
    cout << hora12 << ", " << minuto << ", " << segundo << " " << periodo << endl;

    return 0;
}
