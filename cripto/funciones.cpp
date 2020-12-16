#include "funciones.h"

int XOR(char letra,char clave){

    int letter = letra;
    int cript = clave;

    int resultado = (clave ^ letra);

    return (resultado);
}

int cesarEncriptar(char letra,int clave){

    clave = clave - 48;
    
    int resultado = letra + clave;

    return (resultado);
}

int cesarDesencriptar(char letra,int clave){

    clave = clave - 48;
    
    int resultado = letra - clave;

    return (resultado);
}