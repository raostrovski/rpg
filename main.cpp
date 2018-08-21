#include <iostream>
#include "hero.h"
#include <stdio.h>
#include <stdlib.h>
#include "batalha.h"
#include "diversos.h"
#include "hero_creation.h"

using namespace std;


int main()
{
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t   RPG: THE GAME" << endl;
    cout << "  \t\t\t\t\t\t     PROTOTIPO  " << endl;
    cout << endl << endl << endl << endl;
    system("PAUSE>>NULL");
    system("CLS");

    hero heroi;
    heroi = hero_creation();
    int resultado = 0;
    do{
        batalha(heroi);
    }while(resultado == 0);
    return 0;
}
