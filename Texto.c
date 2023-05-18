//
// Created by Administrador on 18/5/2023.
//

#include "Texto.h"
#include <stdio.h>
#include <malloc.h>
#include <string.h>

Palabra * newPalabra(char * pal, int frecuencia){
    Palabra * auxPalabra = NULL;
    auxPalabra = malloc(sizeof(Palabra));
    if(auxPalabra == NULL){
        printf("Error al asignar memoria\n");
        exit (-1);
    }else{ /*Es necesario poner else estando la salida inesperada?*/
        strcpy(auxPalabra->pal, pal);
    }
    return auxPalabra;
}

Texto *newTexto() {
    Texto * auxTexto = NULL;
    auxTexto = malloc(sizeof(Texto));
    if(auxTexto == NULL){
        printf("Error al asignar memoria\n");
        exit (-1);
    }else{
        auxTexto->cabecera = NULL;
    }
    return auxTexto;
}

void enlistar(Palabra *palabra, Texto *texto) {
    Palabra * auxPalabra = texto->cabecera;
    if(auxPalabra == NULL) { /*lista vacia*/
        auxPalabra = palabra;
    }else{
        while(auxPalabra!=NULL){
            auxPalabra = auxPalabra->sig;
        }
        auxPalabra = palabra;
    }
}

void result(Palabra *palabra, Texto *texto) {
    int cont;
    Palabra * auxPalabra = texto->cabecera;
    while(auxPalabra != NULL){
        cont=0;
        while(auxPalabra!=NULL){
            cont=0;
            if(strcpy(auxPalabra->pal, auxPalabra->sig)==0){
                cont++;
                auxPalabra = auxPalabra->sig;
        }

        }
        auxPalabra = auxPalabra->sig;
    }

}



