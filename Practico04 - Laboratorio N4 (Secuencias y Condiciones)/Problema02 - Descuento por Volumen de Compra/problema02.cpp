/*
    PRACTICO N.4 - Laboratorio (SI-220 Fundamentos de Programacion)
    PROBLEMA 02 - DESCUENTOS POR VOLUMEN DE COMPRA [Condicion]

    Enunciado:
    Una tienda comercial aplica descuentos sobre el importe total de la
    compra segun el monto gastado. Elaborar un programa en C++ que
    solicite el nombre del cliente y el monto total de la compra, calcule
    el monto del descuento y el total final a pagar.

        Monto de Compra (Bs)    % Descuento    Categoria de Descuento
        Monto <= 100             0%             Sin descuento
        100 < Monto <= 500       5%             Descuento Bronce
        500 < Monto <= 1000      10%            Descuento Plata
        Monto > 1000             15%            Descuento Oro

    El programa debe mostrar un resumen de venta con el formato:

        Ingrese el monto total de la compra (Bs): 750

        --- RESUMEN DE VENTA ---
        Nombre Cliente: Daniela
        Categoria: Descuento Plata (10%)
        Subtotal: Bs 750
        Descuento aplicado: Bs 75
        Total a pagar: Bs 675

    ---------------------------------------------------------------------
    ANALISIS DEL PROBLEMA (Entrada - Proceso - Salida)
    ---------------------------------------------------------------------
    ENTRADA : nombre (nombre del cliente), monto (monto total de la
              compra, en Bs).
    PROCESO : comparar "monto" contra los limites superiores de cada
              tramo de la tabla (100, 500, 1000) para decidir a que tramo
              pertenece, y asignarle el porcentaje de descuento y la
              categoria correspondiente. Luego: descuento = monto *
              porcentaje, y total = monto - descuento. Un monto menor o
              igual a 0 no es un dato valido.
    SALIDA  : un resumen de venta con el nombre del cliente, la
              categoria de descuento (con su porcentaje), el subtotal,
              el descuento aplicado y el total a pagar.

    ---------------------------------------------------------------------
    TABLA DE OBJETOS (variables usadas)
    ---------------------------------------------------------------------
    Nombre         | Tipo    | Descripcion
    ---------------|---------|----------------------------------------------
    nombre         | string  | Nombre del cliente, ingresado por el usuario
    monto          | double  | Monto total de la compra, ingresado por el usuario
    porcentaje     | double  | Porcentaje de descuento segun el tramo (0.0 a 0.15)
    categoria      | string  | Categoria de descuento asignada segun el tramo
    descuento      | double  | monto * porcentaje
    total          | double  | monto - descuento
*/

#include <iostream>
#include <iomanip> // Para fixed y setprecision(), y mostrar 2 decimales.
using namespace std;

int main()
{
    // 1) DECLARACION DE VARIABLES.
    // Usamos "string" para el nombre porque puede tener espacios (se lee
    // con getline), y "double" para el monto porque puede tener
    // decimales (ej. 750.50 Bs).
    string nombre;
    double monto, porcentaje, descuento, total;
    string categoria;

    // 2) ENTRADA DE DATOS.
    cout << "Ingrese el nombre del cliente: ";
    getline(cin, nombre);

    cout << "Ingrese el monto total de la compra (Bs): ";
    cin >> monto;

    // 3) PROCESO: para clasificar el monto en uno de los tramos de la
    // tabla usamos una CASCADA de "else if". Cada condicion solo se
    // evalua si TODAS las anteriores fueron falsas, asi que dentro de
    // cada bloque ya sabemos que el monto es MAYOR que el limite del
    // tramo anterior. Cada tramo se prueba con su LIMITE SUPERIOR usando
    // "<=" (por ejemplo "monto <= 100" cubre TODO el primer tramo,
    // incluyendo el valor exacto 100), tal como indica la tabla del
    // enunciado, sin dejar huecos ni superposiciones.
    if (monto <= 0)
    {
        // Un monto cero o negativo no tiene sentido fisico: no es un
        // dato valido, asi que avisamos al usuario en vez de calcular.
        cout << "Monto invalido: debe ingresar un valor mayor a 0 Bs." << endl;
    }
    else
    {
        if (monto <= 100)
        {
            porcentaje = 0.00;
            categoria = "Sin descuento";
        }
        else if (monto <= 500)
        {
            porcentaje = 0.05;
            categoria = "Descuento Bronce";
        }
        else if (monto <= 1000)
        {
            porcentaje = 0.10;
            categoria = "Descuento Plata";
        }
        else
        {
            porcentaje = 0.15;
            categoria = "Descuento Oro";
        }

        // Con el porcentaje y la categoria ya definidos, calculamos el
        // descuento en bolivianos y el total final a pagar.
        descuento = monto * porcentaje;
        total = monto - descuento;

        // 4) SALIDA: resumen de venta, mostrando el porcentaje junto a
        // la categoria (ej. "Descuento Plata (10%)").
        cout << fixed << setprecision(2);
        cout << "\n--- RESUMEN DE VENTA ---" << endl;
        cout << "Nombre Cliente: " << nombre << endl;
        cout << "Categoria: " << categoria << " (" << (porcentaje * 100) << "%)" << endl;
        cout << "Subtotal: Bs " << monto << endl;
        cout << "Descuento aplicado: Bs " << descuento << endl;
        cout << "Total a pagar: Bs " << total << endl;
    }

    return 0;
}
