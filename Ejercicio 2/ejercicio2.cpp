#include <iostream>
#include <string>
using namespace std;

/*
    
*/

int main()
{
    // Declaracion de variables
    int opcionElegida, cantidad;
    double subtotal;
    string comida [] = {"Hamburguesas", "Hamburgueas con queso", "Papas fritas", "Soda"};

    // Imprimir el menu
    cout<<"================= MENU TIENDA PEPITA ================="<<endl;
    cout<<"1. Hamburguesas (Precio = 3 Bs.)"<<endl;
    cout<<"2. Hamburguesas  con queso (Precio = 5 Bs.)"<<endl;
    cout<<"3. Papas fritas (Precio = 2 Bs.)"<<endl;
    cout<<"4. Soda (Precio = 2.5 Bs.)"<<endl;
    cout<<"0. Salir"<<endl;
    cout<<"Ingrese un numero de la opcion que quiere comprar: "<<endl;

    cin>>opcionElegida;
    
    cout<<"Ingrese la cantidad de '"<<comida[opcionElegida-1]<<"'4: "<<endl;
    cin>>cantidad;

    
    switch (opcionElegida)
    {
        case 1:
            subtotal = cantidad  * 3; break;

        case 2:
            subtotal = cantidad  * 5;  break;

        case 3: 
            subtotal = cantidad  * 2;  break;

        case 4: 
            subtotal = cantidad  * 2.5;  break;
            
        case 0:
            return 0;

        default: // en cualquier otro caso
            cout<<"Opcion invalida"<<endl;
            return 0; // MATAR EL PROCESO
    }

    cout<<"El monto a pagar es: "<<subtotal;
    
    return 0;
}