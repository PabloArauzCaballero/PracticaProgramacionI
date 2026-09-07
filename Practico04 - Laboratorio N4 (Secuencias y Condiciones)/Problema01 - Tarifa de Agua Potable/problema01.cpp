/*
    PRACTICO N.4 - Laboratorio (SI-220 Fundamentos de Programacion)
    PROBLEMA 01 - TARIFA DE AGUA POTABLE (Cooperativa Local) [Condicion]

    Enunciado:
    Una cooperativa de agua potable cobra la tarifa mensual en funcion del
    consumo del hogar medido en metros cubicos. Elaborar un programa en
    C++ que solicite el ingreso del nombre del cliente, calcule el monto
    a pagar y la categoria tarifaria correspondiente segun el consumo
    registrado. Se aplicara ademas un monto fijo de 10 Bs.

        Condicion (m3)      Valor por m3    Categoria asignada
        0  < m3 <= 15       Bs 1.20 / m3    Consumo Minimo
        15 < m3 <= 35       Bs 2.50 / m3    Consumo Domestico
        35 < m3 <= 70       Bs 4.00 / m3    Consumo Comercial
        m3 > 70             Bs 6.50 / m3    Consumo Alto / Industrial

    El programa debe mostrar: el nombre del cliente, el monto fijo a
    pagar, el pago total y la categoria asignada.

    ---------------------------------------------------------------------
    ANALISIS DEL PROBLEMA (Entrada - Proceso - Salida)
    ---------------------------------------------------------------------
    ENTRADA : nombre (nombre del cliente), consumo (consumo del hogar en
              metros cubicos).
    PROCESO : comparar "consumo" contra los limites superiores de cada
              tramo de la tabla (15, 35, 70) para decidir a que tramo
              pertenece, y asignarle el valor por m3 y la categoria
              correspondiente. Luego: montoConsumo = consumo * valorM3,
              y pagoTotal = MONTO_FIJO + montoConsumo. Un consumo menor o
              igual a 0 no es un dato valido.
    SALIDA  : nombre del cliente, monto fijo, pago total y categoria
              asignada (o un mensaje de error si el consumo no es
              valido).

    ---------------------------------------------------------------------
    TABLA DE OBJETOS (variables usadas)
    ---------------------------------------------------------------------
    Nombre        | Tipo         | Descripcion
    --------------|--------------|-----------------------------------------
    MONTO_FIJO    | const double | Monto fijo mensual, no cambia (10 Bs)
    nombre        | string       | Nombre del cliente, ingresado por el usuario
    consumo       | double       | Consumo del hogar en m3, ingresado por el usuario
    valorM3       | double       | Precio por m3 segun el tramo de consumo
    categoria     | string       | Categoria tarifaria asignada segun el tramo
    montoConsumo  | double       | consumo * valorM3
    pagoTotal     | double       | MONTO_FIJO + montoConsumo
*/

#include <iostream>
#include <iomanip> // Para fixed y setprecision(), y mostrar 2 decimales.
using namespace std;

int main()
{
    // 1) CONSTANTE: el monto fijo no cambia mientras el programa corre,
    // por eso se declara como "const double".
    const double MONTO_FIJO = 10.0;

    // 2) DECLARACION DE VARIABLES.
    // Usamos "string" para el nombre porque puede tener espacios (se lee
    // con getline), y "double" para el consumo porque puede tener
    // decimales (ej. 24.5 m3).
    string nombre;
    double consumo, valorM3, montoConsumo, pagoTotal;
    string categoria;

    // 3) ENTRADA DE DATOS.
    cout << "Ingrese el nombre del cliente: ";
    getline(cin, nombre);

    cout << "Ingrese el consumo del hogar (m3): ";
    cin >> consumo;

    // 4) PROCESO: para clasificar el consumo en uno de los tramos de la
    // tabla usamos una CASCADA de "else if". Cada condicion solo se
    // evalua si TODAS las anteriores fueron falsas, asi que dentro de
    // cada bloque ya sabemos que el consumo es MAYOR que el limite del
    // tramo anterior. Cada tramo se prueba con su LIMITE SUPERIOR usando
    // "<=", tal como indica la tabla del enunciado, sin dejar huecos.
    if (consumo <= 0)
    {
        // Un consumo cero o negativo no tiene sentido fisico: no es un
        // dato valido, asi que avisamos al usuario en vez de calcular.
        cout << "Consumo invalido: debe ingresar un valor mayor a 0 m3." << endl;
    }
    else
    {
        if (consumo <= 15)
        {
            valorM3 = 1.20;
            categoria = "Consumo Minimo";
        }
        else if (consumo <= 35)
        {
            valorM3 = 2.50;
            categoria = "Consumo Domestico";
        }
        else if (consumo <= 70)
        {
            valorM3 = 4.00;
            categoria = "Consumo Comercial";
        }
        else
        {
            valorM3 = 6.50;
            categoria = "Consumo Alto / Industrial";
        }

        // Con el valor por m3 y la categoria ya definidos, calculamos el
        // monto por el consumo y el pago total (monto fijo + consumo).
        montoConsumo = consumo * valorM3;
        pagoTotal = MONTO_FIJO + montoConsumo;

        // 5) SALIDA.
        cout << fixed << setprecision(2);
        cout << "\n--- FACTURA DE AGUA POTABLE ---" << endl;
        cout << "Cliente: " << nombre << endl;
        cout << "Monto fijo: Bs " << MONTO_FIJO << endl;
        cout << "Categoria: " << categoria << endl;
        cout << "Pago total: Bs " << pagoTotal << endl;
    }

    return 0;
}
