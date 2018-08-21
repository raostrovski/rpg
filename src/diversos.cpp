#include "diversos.h"
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <random>

int true_random(int minimo, int maximo){

    srand((unsigned)time(nullptr));
    return ((rand() % maximo) + minimo);

}

int dado(int d){

    int retorno;
    switch(d){
    case 20:
        retorno = true_random(1,20);
        break;
    case 10:
        retorno = true_random(1,10);
        break;
    case 4:
        retorno = true_random(1,4);
        break;
    case 6:
        retorno = true_random(1,6);
        break;
    }
    return retorno;
}

int numero_valido(char verifica[]){

    for(int i = 0; i < (int)strlen(verifica); i++){
        if( (verifica[i] >= '0' && verifica[i] <= '9') == 0 ){
            return -1;
        }
    }
    return 0;
}

void setcolor(unsigned short color) {

HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);

SetConsoleTextAttribute(hcon,color);

 /*for (int i = 0;; i++){ laço eterno que gera as cores para procurar a que quer
    setcolor(i);
    cout << "Color " << i << endl;
    system("pause");
    exemplo: 10 verde hacker, 12 vermelho erro.' 7 cinza igual o comentario //. 8 cinza escuro. 14 amaerelo. 15 branco.

 }
FORMA QUE A FUNCAO FUNCIONA*/
}

