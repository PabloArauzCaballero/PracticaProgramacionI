// PROBLEMA 12 - ESTACION DEL ANIO SEGUN FECHA (Condicion)
// Solicita una fecha (dia, mes, anio) y muestra a que estacion del
// anio corresponde (hemisferio sur: primavera, verano, otonio, invierno).
Proceso EstacionDelAnio
	Definir dia, mes, anio Como Entero;

	Escribir "Ingrese el dia (1-31): ";
	Leer dia;

	Escribir "Ingrese el mes (1-12): ";
	Leer mes;

	Escribir "Ingrese el anio: ";
	Leer anio;

	Si (mes = 12 Y dia >= 21) O mes = 1 O mes = 2 O (mes = 3 Y dia <= 20) Entonces
		Escribir "La fecha ", dia, "/", mes, "/", anio, " corresponde a: VERANO";
	SiNo
		Si (mes = 3 Y dia >= 21) O mes = 4 O mes = 5 O (mes = 6 Y dia <= 20) Entonces
			Escribir "La fecha ", dia, "/", mes, "/", anio, " corresponde a: OTONIO";
		SiNo
			Si (mes = 6 Y dia >= 21) O mes = 7 O mes = 8 O (mes = 9 Y dia <= 20) Entonces
				Escribir "La fecha ", dia, "/", mes, "/", anio, " corresponde a: INVIERNO";
			SiNo
				Escribir "La fecha ", dia, "/", mes, "/", anio, " corresponde a: PRIMAVERA";
			FinSi
		FinSi
	FinSi
FinProceso
