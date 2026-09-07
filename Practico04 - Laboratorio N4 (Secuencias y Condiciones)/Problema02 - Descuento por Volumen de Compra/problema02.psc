// PRACTICO N.4 - PROBLEMA 02 - DESCUENTOS POR VOLUMEN DE COMPRA
// Solicita el nombre del cliente y el monto total de la compra, y
// calcula el descuento y el total a pagar segun el tramo de la tabla
// al que pertenece el monto.
Proceso DescuentosPorVolumenDeCompra
	Definir nombre, categoria Como Cadena;
	Definir monto, porcentaje, descuento, total Como Real;

	Escribir "Ingrese el nombre del cliente: ";
	Leer nombre;

	Escribir "Ingrese el monto total de la compra (Bs): ";
	Leer monto;

	Si monto <= 0 Entonces
		Escribir "Monto invalido: debe ingresar un valor mayor a 0 Bs.";
	SiNo
		Si monto <= 100 Entonces
			porcentaje <- 0.00;
			categoria <- "Sin descuento";
		SiNo
			Si monto <= 500 Entonces
				porcentaje <- 0.05;
				categoria <- "Descuento Bronce";
			SiNo
				Si monto <= 1000 Entonces
					porcentaje <- 0.10;
					categoria <- "Descuento Plata";
				SiNo
					porcentaje <- 0.15;
					categoria <- "Descuento Oro";
				FinSi
			FinSi
		FinSi

		descuento <- monto * porcentaje;
		total <- monto - descuento;

		Escribir "";
		Escribir "--- RESUMEN DE VENTA ---";
		Escribir "Nombre Cliente: ", nombre;
		Escribir "Categoria: ", categoria, " (", porcentaje * 100, "%)";
		Escribir "Subtotal: Bs ", monto;
		Escribir "Descuento aplicado: Bs ", descuento;
		Escribir "Total a pagar: Bs ", total;
	FinSi
FinProceso
