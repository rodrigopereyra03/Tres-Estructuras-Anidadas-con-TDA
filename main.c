#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mundial.h"

int main()
{
    MundialP m1 = crearMundial("QATAR",2022,"LAEEB");
    mostrarMundial(m1);

    agregarJugadores(m1,"MESSI",36,10);
    agregarJugadores(m1,"AGUERO",35,19);
    agregarJugadores(m1,"De Paul",28,8);

    mostrarMundial(m1);

    ordenarJugadores(m1);

    mostrarMundial(m1);

    buscarJugador(m1,"De Paul",28);

    guardarMundial(m1);
    return 0;
}
