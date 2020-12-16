#include "funciones.h"

int main(int argc, char *argv[]){

    string help = "--help";

    if(argc == 6){

        int metodo = stoi(argv[3]);
        char operacion = *argv[5];
        string clave = argv[4];

        FILE* archivoIn = fopen(argv[1], "r");
        FILE* archivoOut = fopen(argv[2], "w");

        if (archivoIn == NULL){

            cout << "Error abriendo archivo" << endl;
        }

        //XOR
        if(metodo == 1){

            //Encriptar
            if(operacion == '+'){
   
                char letra = ' ';
                char letraCript[256];
                char clave = *argv[4];
                int j = 0;

                while(letra != EOF){

                    letra = fgetc(archivoIn);

                    if(letra != EOF){

                        letraCript[j] = (XOR(letra, clave));
                        j++;
                    }

                }

                fseek(archivoOut, 0, EOF);
                fputs(letraCript,  archivoOut);
            }

            //Desencriptar
            else if(operacion == '-'){
   
                char letra = ' ';
                char letraCript[256];
                char clave = *argv[4];
                int j = 0;

                while(letra != EOF){

                    letra = fgetc(archivoIn);

                    if(letra != EOF){

                        letraCript[j] = (XOR(letra, clave));
                        j++;
                    }

                }

                fseek(archivoOut, 0, EOF);
                fputs(letraCript,  archivoOut);
            }
            else {
                cout << "./cripto -- Cifrado de ficheros \nModo de uso: ./cripto fichero_entrada fichero_salida método password operación \nPruebe ./cripto --help para más información" << endl;
            }
            fclose(archivoIn);
            fclose(archivoOut);
        }

        //CESAR
        else if(metodo == 2){

            //Encriptar
            if(operacion == '+'){

                char letra = ' ';
                char letraCript[256];
                int clave = *argv[4];
                int j = 0;

                while(letra != EOF){

                    letra = fgetc(archivoIn);

                    if(letra != EOF){

                        letraCript[j] = (cesarEncriptar(letra, clave));
                        j++;
                    }

                }

                fseek(archivoOut, 0, EOF);
                fputs(letraCript,  archivoOut);

            }

            //Desencriptar
            else if (operacion == '-'){

                char letra = ' ';
                char letraCript[256];
                int clave = *argv[4];
                int j = 0;

                while(letra != EOF){

                    letra = fgetc(archivoIn);

                    if(letra != EOF){

                        letraCript[j] = (cesarDesencriptar(letra, clave));
                        j++;
                    }

                }

                fseek(archivoOut, 0, EOF);
                fputs(letraCript,  archivoOut);

            }
            else {
                cout << "./cripto -- Cifrado de ficheros \nModo de uso: ./cripto fichero_entrada fichero_salida método password operación \nPruebe ./cripto --help para más información" << endl;
            }

            fclose(archivoIn);
            fclose(archivoOut);
            
        }
        else{
            cout << "./cripto -- Cifrado de ficheros \nModo de uso: ./cripto fichero_entrada fichero_salida método password operación \nPruebe ./cripto --help para más información" << endl;
        }
    }
    else if(help == argv[1]){
        cout << "./cripto -- Cifrado de ficheros \n\nModo de uso: ./cripto fichero_entrada fichero_salida método password operación \n\nfichero_entrada: Fichero a codificar \nfichero_salida:  Fichero codificado \nmétodo:          Indica el método de encriptado \n\t\t\t1: Cifrado xor \n\t\t\t2: Cifrado de César \npassword:        Palabra secreta en el caso de método 1, Valor de K en el método 2 \noperación:       Operación a realizar en el fichero \n\t\t\t+: encriptar el fichero \n\t\t\t-: desencriptar el fichero" << endl;
    }
    else{
        cout << "./cripto -- Cifrado de ficheros \nModo de uso: ./cripto fichero_entrada fichero_salida método password operación \nPruebe ./cripto --help para más información" << endl;
    }

    return 0;
}