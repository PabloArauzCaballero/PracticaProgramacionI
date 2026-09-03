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
    string comida [] = {"Hamburguesas", "Hamburgueas con queso", "Papas fritas", "Soda", "Dulces"};
    double precios [] = {3, 5, 2, 2.5, 1.5};

    // Imprimir el menu
    cout<<"================= MENU TIENDA PEPITA ================="<<endl;
    cout<<"0. Salir"<<endl;
    cout<<"1. Hamburguesas (Precio = 3 Bs.)"<<endl;
    cout<<"2. Hamburguesas  con queso (Precio = 5 Bs.)"<<endl;
    cout<<"3. Papas fritas (Precio = 2 Bs.)"<<endl;
    cout<<"4. Soda (Precio = 2.5 Bs.)"<<endl;
    cout<<"5. Dulce (Precio = 1.5 Bs.)"<<endl;
    cout<<"Ingrese un numero de la opcion que quiere comprar: "<<endl;

    cin>>opcionElegida;
    
    cout<<"Ingrese la cantidad de '"<<comida[opcionElegida-1]<<"': "<<endl;
    cin>>cantidad;

    if(opcionElegida == 0){
        cout<<"Ha salido del menu"<<endl;
    } 
    else{
        cout<<"El monto a pagar es: "<<cantidad*precios[opcionElegida-1];
    }

    return 0;
}