#include "abb.h"

//inicializa o mapa
Map *define(); 

//retorna o elemento com chave k do mapa M, caso exista. Caso contrário, retorna elemento nulo.
Map_elem searchMap(Map *M, int id); 

//insere o elemento x no mapa M e retorna true, caso não exista elemento em M com a mesma chave de x. Se já existir elemento em M com a mesma chave de x, retorna false.
boolean insertMap(Map *M, Map_elem x); 

//Substitui por x o elemento do mapa M com a mesma chave de x, se tal elemento existe em M, retornando true. Caso contrário retorna false. 
boolean replaceMap(Map *M, Map_elem x); 

//remove e retorna o elemento com chave k, caso este exista no mapa M. Caso contrário retorna elemento nulo.
Map_elem removeMap(Map *M, int id) ; 

//coloca todas as distancias no array D
void distVector(Map *M, double **D); 

//imprime a árvore na tela
void printMap(Map *M, char op);

//desaloca o mapa
void freeMap(Map *M, map_node *n);

// retorna o maior Id do mapa
int getLastMap(Map *T);