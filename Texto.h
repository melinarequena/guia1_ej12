//
// Created by Administrador on 18/5/2023.
//

#ifndef GUIA1_EJ12_TEXTO_H
#define GUIA1_EJ12_TEXTO_H

typedef struct palabra{
    char pal[20];
    int frecuencia;
    struct palabra * sig;
}Palabra;

typedef struct texto{
    Palabra * cabecera;
}Texto;

Palabra * newPalabra(char * pal, int frecuencia);
Texto * newTexto();
void enlistar(Palabra * palabra, Texto * texto);
void result(Palabra * palabra, Texto * texto);

#endif //GUIA1_EJ12_TEXTO_H
