#ifndef MUNDIAL_H_INCLUDED
#define MUNDIAL_H_INCLUDED

struct MundialE;

typedef struct MundialE * MundialP;

MundialP crearMundial(char s[], int a, char mas[]);

void mostrarMundial(MundialP m);

void agregarJugadores(MundialP m, char nom[], int e, int cami);

void ordenarJugadores(MundialP m);

void buscarJugador(MundialP m, char jugadorABuscar[], int edadABuscar);

void guardarMundial(MundialP m);

#endif // MUNDIAL_H_INCLUDED
