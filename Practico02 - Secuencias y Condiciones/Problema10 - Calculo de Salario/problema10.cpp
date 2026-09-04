/*
    PROBLEMA 10 - CALCULO DE SALARIO (Condicion)

    Una empresa paga a sus trabajadores por hora trabajada.
    Desarrollar un algoritmo que solicite:
        - Horas trabajadas
        - Pago por hora
    Si el trabajador trabaja mas de 40 horas, recibira un bono adicional
    del 10% sobre el salario.
    El sistema debe calcular y mostrar el salario total del trabajador.

    ---------------------------------------------------------------------------
    ANALISIS DEL PROBLEMA (Entrada - Proceso - Salida)
    ---------------------------------------------------------------------------
    ENTRADA : horasTrabajadas, pagoPorHora.
    PROCESO : salarioBase = horasTrabajadas * pagoPorHora
              si horasTrabajadas > 40 -> salarioTotal = salarioBase * 1.10
              si no                   -> salarioTotal = salarioBase
    SALIDA  : salarioTotal, indicando si incluyo bono.

    ---------------------------------------------------------------------------
    TABLA DE OBJETOS (variables usadas)
    ---------------------------------------------------------------------------
    Nombre           | Tipo   | Descripcion
    -----------------|--------|---------------------------------------------
    horasTrabajadas  | double | Cantidad de horas que trabajo el empleado
    pagoPorHora      | double | Pago que recibe el empleado por cada hora
    salarioBase      | double | horasTrabajadas * pagoPorHora, sin bono
    salarioTotal     | double | Salario final, con o sin el 10% de bono
*/

#include <iostream>
using namespace std;

int main()
{
    double horasTrabajadas, pagoPorHora, salarioBase, salarioTotal;

    cout << "Ingrese las horas trabajadas: ";
    cin >> horasTrabajadas;

    cout << "Ingrese el pago por hora: ";
    cin >> pagoPorHora;

    // PROCESO paso 1: primero calculamos el salario "base", sin bono,
    // multiplicando las horas por el pago de cada hora.
    salarioBase = horasTrabajadas * pagoPorHora;

    // PROCESO paso 2: segun la condicion (mas de 40 horas), decidimos si
    // ese salario base se queda igual o si se le agrega un 10% extra
    // (multiplicar por 1.10 equivale a sumarle el 10% del mismo valor).
    if (horasTrabajadas > 40) {
        salarioTotal = salarioBase * 1.10;
        cout << "El trabajador supero las 40 horas: se aplica un bono del 10%." << endl;
    }
    else {
        salarioTotal = salarioBase;
        cout << "El trabajador no supero las 40 horas: no hay bono." << endl;
    }

    // SALIDA: mostramos el salario final ya calculado.
    cout << "El salario total del trabajador es: " << salarioTotal << " Bs" << endl;

    return 0;
}
