// PRACTICO N.3 - SI-220 Fundamentos de Programacion
// PROBLEMA 6 - CONVERSION DE HORA 24H A 12H (Condicion)
// Convierte una hora en formato 24h (hora, minuto, segundo) a su
// equivalente en formato de 12h, indicando AM o PM.
Proceso ConversionHora24hA12h
	Definir hora24, minuto, segundo Como Entero;
	Definir hora12 Como Entero;
	Definir periodo Como Caracter;

	Escribir "Ingrese la hora en formato 24h (0-23): ";
	Leer hora24;

	Escribir "Ingrese los minutos (0-59): ";
	Leer minuto;

	Escribir "Ingrese los segundos (0-59): ";
	Leer segundo;

	Si hora24 = 0 Entonces
		hora12 <- 12;
		periodo <- "AM";
	SiNo
		Si hora24 < 12 Entonces
			hora12 <- hora24;
			periodo <- "AM";
		SiNo
			Si hora24 = 12 Entonces
				hora12 <- 12;
				periodo <- "PM";
			SiNo
				hora12 <- hora24 - 12;
				periodo <- "PM";
			FinSi
		FinSi
	FinSi

	Escribir hora12, ", ", minuto, ", ", segundo, " ", periodo;
FinProceso
