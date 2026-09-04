// PROBLEMA 6 - NUMERO MAYOR (Condicion)
// Solicita dos numeros y muestra cual de los dos es el mayor
// (o indica si son iguales).
Proceso NumeroMayor
	Definir numero1, numero2 Como Real;

	Escribir "Ingrese el primer numero: ";
	Leer numero1;

	Escribir "Ingrese el segundo numero: ";
	Leer numero2;

	Si numero1 > numero2 Entonces
		Escribir "El numero mayor es: ", numero1;
	SiNo
		Si numero1 = numero2 Entonces
			Escribir "Ambos numeros son iguales";
		SiNo
			Escribir "El numero mayor es: ", numero2;
		FinSi
	FinSi
FinProceso
