
/*
Una empresa paga a sus trabajadores por hora trabajada.
Desarrollar un algoritmo que solicite:
•	Horas trabajadas
•	Pago por hora
Si el trabajador trabaja más de 40 horas, recibirá un bono adicional 
del 10% sobre el salario. El sistema debe calcular y mostrar el salario 
total del trabajador.

*/

#include <iostream>
using namespace std;

int main()
{
    float horasTrabajadas,pagoPorHora,pagoTotal;
    
    cout<< "ingrese las horas trabajadas: ";
    cin>>horasTrabajadas;
    
    cout<<"Ingrese pago total por hora: ";
    cin>>pagoPorHora;

    pagoTotal = horasTrabajadas*pagoPorHora;

    if (horasTrabajadas>40){
        cout<<"El pago total es de: "<<pagoTotal* 1.1<<endl;
    }
    else {
        cout<<"El pago total es de: "<<pagoTotal<<endl;
    }
    return 0;
}