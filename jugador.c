#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "jugador.h"

struct JugadorE{
    char nombre[30];
    int edad;
    int camiseta;

};



JugadorP cargarJugador(char n[], int a, int c){
    JugadorP j = malloc(sizeof(struct JugadorE));

    strcpy(j->nombre,n);
    j->edad=a;
    j->camiseta=c;

    return j;
};
JugadorP cargarJugadorVacio(){
    JugadorP j = malloc(sizeof(struct JugadorE));

    strcpy(j->nombre,"VACIO");
    j->edad=-1;
    j->camiseta=-1;


    return j;
};
void mostrarJugador(JugadorP j){
    printf("\n--MOSTRANDO JUGADOR--\n");
    printf("NOMBRE: %s",j->nombre);
    printf("\nEDAD: %d",j->edad);
    printf("\nCAMISETA: %d",j->camiseta);


};
void guardarJugador(JugadorP j){
    FILE * archivo;
    archivo=fopen("jugador.txt","a");
    if(j->edad!=-1){
        fprintf(archivo,"\n%s;%d;%d",j->nombre,j->edad,j->camiseta);
    }


    fclose(archivo);
};


int getEdad(JugadorP j){
    return j->edad;
};
char* getNombre(JugadorP j){
    return j->nombre;
};
int getCamiseta(JugadorP j){
    return j->camiseta;
};
