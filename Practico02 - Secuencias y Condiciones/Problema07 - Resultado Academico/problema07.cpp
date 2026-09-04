/*
 * PROBLEMA 7 - RESULTADO ACADEMICO (Condicion)
 *
 * Enunciado:
 * En una plataforma educativa se necesita determinar si un estudiante
 * aprobo o reprobo una materia. Desarrollar un algoritmo que solicite
 * la nota final de un estudiante. Si la nota es mayor o igual a 51, el
 * sistema debe mostrar Aprobado. Caso contrario, debe mostrar Reprobado.
 *
 * ANALISIS:
 *   ENTRADA:
 *     - notaFinal: la calificacion final que el estudiante obtuvo en la
 *       materia (numero real, ya que las notas pueden tener decimales).
 *   PROCESO:
 *     - Se compara notaFinal contra el valor limite 51 usando el
 *       operador relacional >=.
 *     - Esa comparacion produce un valor booleano (verdadero o falso)
 *       que la instruccion "if" usa para decidir que rama ejecutar.
 *   SALIDA:
 *     - Un mensaje que indica si el estudiante fue Aprobado o Reprobado.
 *
 * Tabla de objetos:
 * +------------+--------+--------------------------------------------+
 * | Nombre     | Tipo   | Descripcion                                 |
 * +------------+--------+--------------------------------------------+
 * | notaFinal  | double | Nota final del estudiante (0 a 100, admite  |
 * |            |        | decimales), leida desde el teclado.         |
 * +------------+--------+--------------------------------------------+
 */

#include <iostream>
using namespace std;

int main() {
    // Declaramos la variable donde guardaremos el dato leido del usuario.
    // Usamos "double" porque una nota puede incluir decimales (ej: 65.5).
    double notaFinal;

    // Pedimos el dato por pantalla. El mensaje termina en ": " para que
    // el usuario escriba justo despues, en la misma linea.
    cout << "Ingrese la nota final del estudiante: ";
    cin >> notaFinal;

    // La expresion "notaFinal >= 51" es una condicion booleana: al
    // evaluarla, C++ obtiene un unico resultado, verdadero (true) o
    // falso (false). Nunca ambos a la vez.
    //
    // Si el resultado es verdadero, el programa entra al bloque del
    // "if" y muestra "Aprobado". Si el resultado es falso, el flujo
    // salta directamente al bloque del "else" y muestra "Reprobado".
    // Solo una de las dos ramas se ejecuta en cada corrida del programa.
    if (notaFinal >= 51) {
        // Rama verdadera: la nota alcanza o supera el minimo de aprobacion.
        cout << "Resultado: Aprobado" << endl;
    } else {
        // Rama falsa: la nota esta por debajo del minimo de aprobacion.
        cout << "Resultado: Reprobado" << endl;
    }

    return 0;
}
