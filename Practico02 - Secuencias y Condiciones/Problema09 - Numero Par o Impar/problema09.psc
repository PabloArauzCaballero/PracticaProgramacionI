// PROBLEMA 9 - NUMERO PAR O IMPAR (Condicion)
Proceso NumeroParOImpar
	Definir numero Como Entero;

	Escribir "Ingrese un numero entero: ";
	Leer numero;

	Si numero MOD 2 = 0 Entonces
		Escribir "El numero ", numero, " es PAR";
	SiNo
		Escribir "El numero ", numero, " es IMPAR";
	FinSi
FinProceso
