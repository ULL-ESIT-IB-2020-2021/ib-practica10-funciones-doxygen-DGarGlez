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

int numberOfChar(char* fichero, char letraSearch){

    int contador = 0;

    FILE* archivoIn = fopen(fichero, "r");

    if (archivoIn == NULL){

        cout << "Error abriendo archivo" << endl;
    }
    else{

        char letra = ' ';

        while(letra != EOF){

            letra = fgetc(archivoIn);

            if(letra == letraSearch){

                contador++;
            }

        }

    }
    fclose(archivoIn);
    return (contador);
}