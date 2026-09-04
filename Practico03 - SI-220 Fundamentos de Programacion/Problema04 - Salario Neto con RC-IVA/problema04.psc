// PROBLEMA 4 - SALARIO NETO CON RC-IVA (Practico N 3, SI-220, Condicion)
// Lee nombre, horas trabajadas y precio por hora; calcula el salario
// bruto y, si supera 8272 Bs, descuenta el 13% de RC-IVA para obtener
// el salario neto.
Proceso SalarioNetoConRCIVA
	Definir nombre Como Caracter;
	Definir horasTrabajadas, precioPorHora Como Real;
	Definir salarioBruto, descuentoRCIVA, salarioNeto Como Real;
	Definir LIMITE_RCIVA, TASA_RCIVA Como Real;

	LIMITE_RCIVA <- 8272;
	TASA_RCIVA <- 0.13;

	Escribir "Ingrese el nombre del trabajador: ";
	Leer nombre;

	Escribir "Ingrese las horas trabajadas en el mes: ";
	Leer horasTrabajadas;

	Escribir "Ingrese el precio por hora (Bs): ";
	Leer precioPorHora;

	salarioBruto <- horasTrabajadas * precioPorHora;

	Si salarioBruto > LIMITE_RCIVA Entonces
		descuentoRCIVA <- salarioBruto * TASA_RCIVA;
		salarioNeto <- salarioBruto - descuentoRCIVA;
		Escribir "Se aplica el descuento RC-IVA (13%)";
	SiNo
		descuentoRCIVA <- 0;
		salarioNeto <- salarioBruto;
		Escribir "No corresponde descuento RC-IVA";
	FinSi

	Escribir "--- LIQUIDACION DE SALARIO ---";
	Escribir "Trabajador: ", nombre;
	Escribir "Salario bruto: ", salarioBruto, " Bs";
	Escribir "Descuento RC-IVA: ", descuentoRCIVA, " Bs";
	Escribir "Salario neto a pagar: ", salarioNeto, " Bs";
FinProceso
