// PRACTICO N.4 - PROBLEMA 01 - TARIFA DE AGUA POTABLE (Cooperativa Local)
// Solicita el nombre del cliente y el consumo en m3, y calcula el pago
// total (monto fijo + consumo * valor por m3) y la categoria asignada
// segun el tramo de la tabla al que pertenece el consumo.
Proceso TarifaDeAguaPotable
	Definir MONTO_FIJO Como Real;
	Definir nombre, categoria Como Cadena;
	Definir consumo, valorM3, montoConsumo, pagoTotal Como Real;

	MONTO_FIJO <- 10;

	Escribir "Ingrese el nombre del cliente: ";
	Leer nombre;

	Escribir "Ingrese el consumo del hogar (m3): ";
	Leer consumo;

	Si consumo <= 0 Entonces
		Escribir "Consumo invalido: debe ingresar un valor mayor a 0 m3.";
	SiNo
		Si consumo <= 15 Entonces
			valorM3 <- 1.20;
			categoria <- "Consumo Minimo";
		SiNo
			Si consumo <= 35 Entonces
				valorM3 <- 2.50;
				categoria <- "Consumo Domestico";
			SiNo
				Si consumo <= 70 Entonces
					valorM3 <- 4.00;
					categoria <- "Consumo Comercial";
				SiNo
					valorM3 <- 6.50;
					categoria <- "Consumo Alto / Industrial";
				FinSi
			FinSi
		FinSi

		montoConsumo <- consumo * valorM3;
		pagoTotal <- MONTO_FIJO + montoConsumo;

		Escribir "";
		Escribir "--- FACTURA DE AGUA POTABLE ---";
		Escribir "Cliente: ", nombre;
		Escribir "Monto fijo: Bs ", MONTO_FIJO;
		Escribir "Categoria: ", categoria;
		Escribir "Pago total: Bs ", pagoTotal;
	FinSi
FinProceso
