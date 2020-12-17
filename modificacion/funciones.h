/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file funciones.h
 * @author alu0101394749@ull.edu.es
 * @date 16 Dic 2020
 * @brief El programa encripta la frase que haya en el documento de texto
 *        designado por el usuario y escribe el texto encriptado
 *        en otro documento de texto designado por el usuario.
 *        El programa permite encriptar y desencriptar por el metodo César y el XOR.
 * @bug No hay bugs conocidos
 * @see https://www.cs.cmu.edu/~410/doc/doxygen.html
 */

#include <iostream>
#include <string>


using namespace std;

int XOR(char letra, char clave);
int cesarEncriptar(char letra, int clave);
int cesarDesencriptar(char letra, int clave);
int numberOfChar(char* fichero, char letraSearch);