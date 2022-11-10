#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "seleccion.h"

struct SeleccionE{
    char nombre[30];
    int ranking;
    int copas;

};



SeleccionP crearSeleccion(char n[],int r, int c){
    SeleccionP s = malloc(sizeof(struct SeleccionE));

    strcpy(s->nombre,n);
    s->ranking=r;
    s->copas=c;

    return s;
};
void mostrarSeleccion(SeleccionP s){
    printf("\n---MOSTRANDO SELECCION---\n");
    printf("NOMBRE: %s",s->nombre);
    printf("\nRANKING: %d",s->ranking);
    printf("COPAS: %d",s->copas);

};
