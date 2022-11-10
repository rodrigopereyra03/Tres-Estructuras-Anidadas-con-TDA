#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mundial.h"
#include "seleccion.h"
#include "jugador.h"
#define TAM 5


struct MundialE{
    char sede[20];
    int anio;
    char mascota[20];
    SeleccionP seleccion;
    JugadorP jugadores[TAM];

};;



MundialP crearMundial(char s[], int a, char mas[]){
    MundialP m = malloc(sizeof(struct MundialE));
    strcpy(m->sede,s);
    m->anio=a;
    strcpy(m->mascota,mas);

    m->seleccion=crearSeleccion("ARGENTINA",2,2);

    for(int i=0; i<TAM; i++){
        m->jugadores[i]=cargarJugadorVacio();
    }

    return m;
};

void mostrarMundial(MundialP m){
    printf("\n---MOSTRANDO MUNDIAL---\n");
    printf("SEDE: %s",m->sede);
    printf("\nANIO: %d",m->anio);
    printf("\nMASCOTA: %s",m->mascota);

    mostrarSeleccion(m->seleccion);

    for(int i=0; i<TAM; i++){
        mostrarJugador(m->jugadores[i]);
    }

};

int buscarPosVacia(MundialP m){
    int pos=-1;
    for(int i=0; i<TAM; i++){
        if(getEdad(m->jugadores[i])==-1){
            pos=i;
            i=TAM+1;
        }
    }


    return pos;
};


void agregarJugadores(MundialP m, char nom[], int e, int cami){
    int pos=-1;
    pos=buscarPosVacia(m);
    for(int i=0; i<TAM; i++){
        if(pos!=-1){
            m->jugadores[pos]=cargarJugador(nom,e,cami);
        }
    }
};

void ordenarJugadores(MundialP m){
    JugadorP aux;
    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM-1; j++){
            if(strcmp(getNombre(m->jugadores[j]),getNombre(m->jugadores[j+1]))==1){
                aux=m->jugadores[j];
                m->jugadores[j]=m->jugadores[j+1];
                m->jugadores[j+1]=aux;
            }
        }
    }

};
void buscarJugador(MundialP m, char jugadorABuscar[], int edadABuscar){
    int pos=-1;

    for(int i=0; i<TAM; i++){
        if((strcmp(getNombre(m->jugadores[i]),jugadorABuscar)==0) && (getEdad(m->jugadores[i]),edadABuscar)){
            pos=i;
            i=TAM+1;
        }
    }
        if(pos!=-1){
            printf("\n\nEl jugador se encontro en la posicion: %d\n",pos);
            mostrarJugador(m->jugadores[pos]);
        }else{
            printf("\nNo se encontro el jugador");
        }

};

void guardarMundial(MundialP m){
    FILE * archivo;
    archivo=fopen("mundial.txt","w");
    fprintf(archivo,"%s;%d;%s",m->sede,m->anio,m->mascota);
    for(int i=0; i<TAM; i++){
        guardarJugador(m->jugadores[i]);
    }
};
