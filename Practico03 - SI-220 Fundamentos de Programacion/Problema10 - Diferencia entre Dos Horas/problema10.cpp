/*
    PRACTICO N.3 - SI-220 Fundamentos de Programacion
    PROBLEMA 10 - DIFERENCIA ENTRE DOS HORAS (Secuencial)

    Enunciado:
    Construir un algoritmo que lea dos horas del mismo dia y halle la
    diferencia entre ellas. El ingreso de las horas debe ser en formato
    de 24 horas: HH, MM, SS, como asi tambien la diferencia.

    Ejemplo:
        Hora Inicial: 10 Hr 50 Min 40 Seg
        Hora Final:   21 Hr 30 Min 10 Seg
        Diferencia:   10 Hr 39 Min 30 Seg

    NOTA: Se reutilizan los mismos conceptos del Problema 9 de este
    practico (convertir una cantidad de segundos en horas/minutos/
    segundos usando division entera y el operador modulo).

    ---------------------------------------------------------------------
    ANALISIS DEL PROBLEMA (Entrada - Proceso - Salida)
    ---------------------------------------------------------------------
    ENTRADA : horaIni, minIni, segIni (hora inicial en formato 24h)
              horaFin, minFin, segFin (hora final en formato 24h)
    PROCESO : 1) Convertir la hora inicial a un UNICO numero de segundos
                 desde la medianoche: segIniTotal = horaIni*3600 +
                 minIni*60 + segIni. Hacer lo mismo para la hora final
                 (segFinTotal).
              2) Restar: segDiferencia = segFinTotal - segIniTotal.
                 (Se asume que la hora final es posterior a la inicial,
                 dentro del mismo dia, tal como pide el enunciado.)
              3) Convertir segDiferencia de vuelta a horas, minutos y
                 segundos, igual que en el Problema 9:
                    horasDif = segDiferencia / 3600          (division entera)
                    minutosDif = (segDiferencia % 3600) / 60
                    segundosDif = segDiferencia % 60
    SALIDA  : La hora inicial, la hora final y la diferencia, cada una
              en formato "H Hr M Min S Seg".

    ---------------------------------------------------------------------
    TABLA DE OBJETOS (variables usadas)
    ---------------------------------------------------------------------
    Nombre         | Tipo | Descripcion
    ---------------|------|--------------------------------------------
    horaIni        | int  | Hora de la hora inicial (0-23)
    minIni         | int  | Minuto de la hora inicial (0-59)
    segIni         | int  | Segundo de la hora inicial (0-59)
    horaFin        | int  | Hora de la hora final (0-23)
    minFin         | int  | Minuto de la hora final (0-59)
    segFin         | int  | Segundo de la hora final (0-59)
    segIniTotal    | int  | Hora inicial convertida a segundos totales
    segFinTotal    | int  | Hora final convertida a segundos totales
    segDiferencia  | int  | Diferencia entre ambas horas, en segundos
    horasDif       | int  | Parte de horas de la diferencia
    minutosDif     | int  | Parte de minutos de la diferencia
    segundosDif    | int  | Parte de segundos de la diferencia
*/

#include <iostream>
using namespace std;

int main()
{
    // 1) DECLARACION DE VARIABLES. Usamos "int" porque horas, minutos y
    //    segundos siempre son cantidades enteras (no tiene sentido decir
    //    "10.5 minutos" en un reloj de formato HH:MM:SS).
    int horaIni, minIni, segIni;
    int horaFin, minFin, segFin;

    // 2) ENTRADA DE DATOS: pedimos, uno por uno, los tres componentes de
    //    la hora inicial y luego los tres de la hora final. Cada cout
    //    pide exactamente UN dato para que el flujo "pido -> leo" quede
    //    clarisimo.
    cout << "--- Hora inicial (formato 24 horas) ---" << endl;
    cout << "Ingrese la hora (0-23): ";
    cin >> horaIni;
    cout << "Ingrese los minutos (0-59): ";
    cin >> minIni;
    cout << "Ingrese los segundos (0-59): ";
    cin >> segIni;

    cout << "--- Hora final (formato 24 horas) ---" << endl;
    cout << "Ingrese la hora (0-23): ";
    cin >> horaFin;
    cout << "Ingrese los minutos (0-59): ";
    cin >> minFin;
    cout << "Ingrese los segundos (0-59): ";
    cin >> segFin;

    // 3) PROCESO - PASO A: convertimos cada hora (H,M,S) a un solo numero
    //    de segundos contados desde la medianoche. Esto es lo que permite
    //    "restar horas" con una simple resta aritmetica, en vez de tener
    //    que hacer prestamos manuales entre horas/minutos/segundos.
    int segIniTotal = horaIni * 3600 + minIni * 60 + segIni;
    int segFinTotal = horaFin * 3600 + minFin * 60 + segFin;

    // 3) PROCESO - PASO B: la diferencia en segundos es simplemente la
    //    resta de los dos totales. Como el enunciado asume que la hora
    //    final es posterior a la inicial (mismo dia), este valor siempre
    //    deberia dar positivo.
    int segDiferencia = segFinTotal - segIniTotal;

    // 3) PROCESO - PASO C: ahora hacemos el camino inverso al del Paso A:
    //    convertimos la cantidad total de segundos de la diferencia de
    //    vuelta a horas, minutos y segundos.
    //      - Dividir entre 3600 (segundos que tiene una hora) nos da
    //        cuantas horas COMPLETAS entran en la diferencia (division
    //        entera: se descartan los decimales).
    //      - El operador modulo (%) nos da el "resto" que sobra despues
    //        de sacar esas horas completas; a ese resto lo volvemos a
    //        dividir entre 60 para sacar los minutos completos.
    //      - Finalmente, el modulo entre 60 nos da los segundos que
    //        sobran despues de sacar horas y minutos completos.
    int horasDif = segDiferencia / 3600;
    int minutosDif = (segDiferencia % 3600) / 60;
    int segundosDif = segDiferencia % 60;

    // 4) SALIDA: mostramos la hora inicial, la hora final y la diferencia
    //    ya calculada, todas en el mismo formato "H Hr M Min S Seg".
    cout << "\nHora Inicial: " << horaIni << " Hr " << minIni << " Min " << segIni << " Seg" << endl;
    cout << "Hora Final:   " << horaFin << " Hr " << minFin << " Min " << segFin << " Seg" << endl;
    cout << "Diferencia:   " << horasDif << " Hr " << minutosDif << " Min " << segundosDif << " Seg" << endl;

    return 0;
}
