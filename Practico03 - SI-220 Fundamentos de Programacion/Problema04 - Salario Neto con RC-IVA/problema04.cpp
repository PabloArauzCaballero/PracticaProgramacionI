/*
    PROBLEMA 4 - SALARIO NETO CON RC-IVA (Practico N 3, SI-220, Condicion)

    Enunciado:
    Deducir el salario neto de un trabajador a partir de la lectura del
    nombre, horas trabajadas al mes, precio por hora, sabiendo que todo lo
    que se descuenta es un impuesto RC-IVA de 13% sobre el salario bruto.
    Los trabajadores que ganan mas de 8.272 bolivianos estan obligados a
    pagar el impuesto al Regimen Complementario al Impuesto al Valor
    Agregado (RC-IVA).

    ---------------------------------------------------------------------------
    ANALISIS DEL PROBLEMA (Entrada - Proceso - Salida)
    ---------------------------------------------------------------------------
    ENTRADA : nombre (texto), horasTrabajadas, precioPorHora (numeros).
    PROCESO : salarioBruto = horasTrabajadas * precioPorHora.
              Si salarioBruto > 8272 => descuentoRCIVA = salarioBruto * 0.13
                                         salarioNeto = salarioBruto - descuentoRCIVA
              Si no                 => descuentoRCIVA = 0
                                         salarioNeto = salarioBruto
    SALIDA  : nombre del trabajador, si se aplico o no el descuento, el monto
              del descuento y el salario neto final.

    ---------------------------------------------------------------------------
    TABLA DE OBJETOS (variables usadas)
    ---------------------------------------------------------------------------
    Nombre           | Tipo   | Descripcion
    -----------------|--------|-----------------------------------------------
    nombre           | string | Nombre del trabajador
    horasTrabajadas  | double | Horas que trabajo durante el mes
    precioPorHora    | double | Pago que recibe por cada hora trabajada (Bs)
    salarioBruto     | double | horasTrabajadas * precioPorHora, antes de impuestos
    descuentoRCIVA   | double | Monto que se descuenta por el impuesto RC-IVA (13%)
    salarioNeto      | double | Lo que el trabajador recibe realmente (bruto - descuento)
*/

#include <iostream>
#include <string>
#include <iomanip> // Para "fixed" y "setprecision", que controlan cuantos
                    // decimales se muestran al imprimir numeros con cout.

using namespace std;

int main()
{
    // 1) DECLARACION DE VARIABLES, segun la tabla de objetos.
    string nombre;
    double horasTrabajadas, precioPorHora;
    double salarioBruto, descuentoRCIVA, salarioNeto;

    // Umbral fijo que da el enunciado: a partir de este monto de salario
    // bruto corresponde pagar el impuesto RC-IVA. Lo guardamos en una
    // constante (no cambia durante la ejecucion) para que el codigo sea
    // mas claro y facil de mantener si el monto cambiara en el futuro.
    const double LIMITE_RCIVA = 8272.0;
    const double TASA_RCIVA = 0.13; // 13% de impuesto

    // 2) ENTRADA DE DATOS: pedimos un dato a la vez.
    // El nombre puede tener espacios (ej. "Maria Lopez"), por eso usamos
    // getline en vez de "cin >> nombre" (que solo leeria "Maria").
    cout << "Ingrese el nombre del trabajador: ";
    getline(cin, nombre);

    cout << "Ingrese las horas trabajadas en el mes: ";
    cin >> horasTrabajadas;

    cout << "Ingrese el precio por hora (Bs): ";
    cin >> precioPorHora;

    // 3) PROCESO
    // Primero calculamos el salario bruto: es el dinero que gano el
    // trabajador ANTES de que se le descuente cualquier impuesto. Sale de
    // multiplicar las horas trabajadas por el precio de cada hora.
    salarioBruto = horasTrabajadas * precioPorHora;

    // Ahora decidimos, con una condicion (if/else), si corresponde
    // descontar el impuesto RC-IVA. La regla del enunciado es clara: SOLO
    // se descuenta si el salario bruto supera los 8.272 Bs.
    if (salarioBruto > LIMITE_RCIVA)
    {
        // Rama verdadera: el trabajador SI debe pagar el impuesto.
        // El descuento es el 13% del salario bruto, y el salario neto
        // (lo que finalmente recibe) es el bruto menos ese descuento.
        descuentoRCIVA = salarioBruto * TASA_RCIVA;
        salarioNeto = salarioBruto - descuentoRCIVA;
    }
    else
    {
        // Rama falsa: no se le descuenta nada, por lo tanto el salario
        // neto es exactamente igual al salario bruto.
        descuentoRCIVA = 0.0;
        salarioNeto = salarioBruto;
    }

    // 4) SALIDA: mostramos toda la informacion de forma clara y ordenada.
    // "fixed << setprecision(2)" hace que los numeros con decimales se
    // impriman siempre con exactamente 2 decimales (formato de dinero).
    cout << fixed << setprecision(2);

    cout << "\n--- LIQUIDACION DE SALARIO ---" << endl;
    cout << "Trabajador: " << nombre << endl;
    cout << "Salario bruto: " << salarioBruto << " Bs" << endl;

    if (salarioBruto > LIMITE_RCIVA)
    {
        cout << "Se aplica el descuento RC-IVA (13%), porque el salario bruto supera los " << LIMITE_RCIVA << " Bs." << endl;
    }
    else
    {
        cout << "No corresponde descuento RC-IVA, porque el salario bruto no supera los " << LIMITE_RCIVA << " Bs." << endl;
    }

    cout << "Descuento RC-IVA: " << descuentoRCIVA << " Bs" << endl;
    cout << "Salario neto a pagar: " << salarioNeto << " Bs" << endl;

    return 0;
}
