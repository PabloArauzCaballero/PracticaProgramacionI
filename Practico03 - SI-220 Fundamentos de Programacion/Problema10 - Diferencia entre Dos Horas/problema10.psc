// PRACTICO N.3 - PROBLEMA 10 - DIFERENCIA ENTRE DOS HORAS (Secuencial)
// Lee una hora inicial y una hora final (formato 24h: HH,MM,SS) y calcula
// la diferencia entre ambas, tambien en formato horas/minutos/segundos.
Proceso DiferenciaEntreDosHoras
	Definir horaIni, minIni, segIni Como Entero;
	Definir horaFin, minFin, segFin Como Entero;
	Definir segIniTotal, segFinTotal, segDiferencia Como Entero;
	Definir horasDif, minutosDif, segundosDif Como Entero;

	Escribir "--- Hora inicial (formato 24 horas) ---";
	Escribir "Ingrese la hora (0-23): ";
	Leer horaIni;
	Escribir "Ingrese los minutos (0-59): ";
	Leer minIni;
	Escribir "Ingrese los segundos (0-59): ";
	Leer segIni;

	Escribir "--- Hora final (formato 24 horas) ---";
	Escribir "Ingrese la hora (0-23): ";
	Leer horaFin;
	Escribir "Ingrese los minutos (0-59): ";
	Leer minFin;
	Escribir "Ingrese los segundos (0-59): ";
	Leer segFin;

	segIniTotal <- horaIni * 3600 + minIni * 60 + segIni;
	segFinTotal <- horaFin * 3600 + minFin * 60 + segFin;
	segDiferencia <- segFinTotal - segIniTotal;

	horasDif <- segDiferencia / 3600;
	minutosDif <- (segDiferencia MOD 3600) / 60;
	segundosDif <- segDiferencia MOD 60;

	Escribir "";
	Escribir "Hora Inicial: ", horaIni, " Hr ", minIni, " Min ", segIni, " Seg";
	Escribir "Hora Final:   ", horaFin, " Hr ", minFin, " Min ", segFin, " Seg";
	Escribir "Diferencia:   ", horasDif, " Hr ", minutosDif, " Min ", segundosDif, " Seg";
FinProceso
