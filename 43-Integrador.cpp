/*
Ej. MI-43: Desarrollar:
a) Una función que reciba un número natural de 4 dígitos en formato de HHMM que corresponde a un tiempo
determinado en horas y minutos, retorne ese tiempo en minutos.
b) Un procedimiento que reciba el costo en pesos de un abono telefónico, la cantidad de minutos libres que incluye
el abono, el cargo en pesos por minuto excedente y la cantidad de minutos utilizados por un abonado, retorne la
cantidad de minutos excedidos y el monto en pesos a abonar (costo del abono más minutos excedidos por el
costo de minutos excedidos) más el 21% del valor del IVA
Desarrolle un algoritmo que resuelva la siguiente situación problemática: Todos los fines de mes, una
empresa de telefonía celular debe confeccionar las facturas con los consumos de todos sus abonados, que se
realizan en tres turnos de trabajo: Mañana, Tarde y Noche.
Para ello se ingresará por teclado la siguiente información de cada celular:
6

1er Guía de Ejercicios Programación I y Laboratorio I 2019

- Número de celular 9 dígitos ( 0 indica cambio de turno)
- Nombre del abonado 20 caracteres
- Dirección del abonado 25 caracteres
- Tiempo utilizado 4 dígitos en formato HHMM
- Tipo de abono (carácter, A, B, C, D o E)
Dependiendo del tipo de abono que se tenga, el usuario tiene cierta cantidad de minutos libres, por los cuales no abona
cargo extra, pero por cada minuto que se exceda debe abonar una suma extra según la siguiente tabla:
Plan A B C D E
Costo $70 $55 $40 $28 $19
Minutos Libres 300 200 100 60 40
Cargo por minuto excedente $0.09 $0.15 $0.21 $0.29 $0.37

Emitir el siguiente listado por cada turno:

Informar por cada turno de trabajo:
El nombre del abonado que debe abonar la factura más costosa y el monto de ésta.
El nombre y el número de celular de la persona que realizó la mayor cantidad de minutos excedentes, indicando cuántos
fueron.
Al final del día informar:
El monto total facturado
En que turno y en qué orden dentro del turno apareció el abonado que utilizó la menor cantidad de minutos en el mes.
Utilice los subprogramas a) y b).
*/