// PROBLEMA 8 - DESCUENTO EN UNA COMPRA (Condicion)
Proceso DescuentoEnUnaCompra
	Definir montoCompra, descuento, totalFinal Como Real;

	Escribir "Ingrese el monto de la compra en Bs: ";
	Leer montoCompra;

	Si montoCompra > 100 Entonces
		descuento <- montoCompra * 0.10;
		totalFinal <- montoCompra - descuento;
		Escribir "Monto del descuento: ", descuento, " Bs";
	SiNo
		totalFinal <- montoCompra;
	FinSi

	Escribir "Total final a pagar: ", totalFinal, " Bs";
FinProceso
