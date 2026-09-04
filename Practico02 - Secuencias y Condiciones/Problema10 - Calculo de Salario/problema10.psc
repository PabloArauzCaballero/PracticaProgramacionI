// PROBLEMA 10 - CALCULO DE SALARIO (Condicion)
Proceso CalculoDeSalario
	Definir horasTrabajadas, pagoPorHora, salarioBase, salarioTotal Como Real;

	Escribir "Ingrese las horas trabajadas: ";
	Leer horasTrabajadas;

	Escribir "Ingrese el pago por hora: ";
	Leer pagoPorHora;

	salarioBase <- horasTrabajadas * pagoPorHora;

	Si horasTrabajadas > 40 Entonces
		salarioTotal <- salarioBase * 1.10;
		Escribir "El trabajador supero las 40 horas: se aplica un bono del 10%.";
	SiNo
		salarioTotal <- salarioBase;
		Escribir "El trabajador no supero las 40 horas: no hay bono.";
	FinSi

	Escribir "El salario total del trabajador es: ", salarioTotal, " Bs";
FinProceso
