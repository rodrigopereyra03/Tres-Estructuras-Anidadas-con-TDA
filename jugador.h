#ifndef JUGADOR_H_INCLUDED
#define JUGADOR_H_INCLUDED

struct JugadorE;

typedef struct JugadorE * JugadorP;

JugadorP cargarJugador(char n[], int a, int c);
JugadorP cargarJugadorVacio();
void mostrarJugador(JugadorP j);

int getEdad(JugadorP j);
char* getNombre(JugadorP j);
int getCamiseta(JugadorP j);

void guardarJugador(JugadorP j);

#endif // JUGADOR_H_INCLUDED
