// PRACTICO N 3 - PROBLEMA 9 - SEGUNDOS A HORAS, MINUTOS Y SEGUNDOS
// Lee una cantidad de segundos y la convierte en horas, minutos y segundos.
Proceso SegundosAHorasMinutosSegundos
	Definir totalSegundos, horas, segundosRestantes, minutos, segundosFinales Como Entero;

	Escribir "Ingrese la cantidad total de segundos: ";
	Leer totalSegundos;

	horas <- totalSegundos / 3600;
	segundosRestantes <- totalSegundos MOD 3600;
	minutos <- segundosRestantes / 60;
	segundosFinales <- segundosRestantes MOD 60;

	Escribir totalSegundos, " Segundos equivalen a: ", horas, " Horas, ", minutos, " minutos, ", segundosFinales, " Segundos";
FinProceso
