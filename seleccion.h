#ifndef SELECCION_H_INCLUDED
#define SELECCION_H_INCLUDED

struct SeleccionE;

typedef struct SeleccionE * SeleccionP;

SeleccionP crearSeleccion(char n[],int r, int c);
void mostrarSeleccion(SeleccionP s);

#endif // SELECCION_H_INCLUDED
