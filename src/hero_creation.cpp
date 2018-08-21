#include "hero.h"
#include "hero_creation.h"
#include "texto.h"
#include <stdio.h>
#include "diversos.h"
#include <stdlib.h>
#include <iostream>
#include <string.h>

hero hero_creation(){

    hero heroi;
    system("cls");
    descricao_classes();
    std::cout << std::endl << texto(9);
    char heroclasse_string[50];
    int heroclasse = 0;
    gets(heroclasse_string);
    if(numero_valido(heroclasse_string) == -1 || strlen(heroclasse_string) == 0) {
        std::cout << "Classe invalida";
        system("pause>>null");
        hero_creation();
    } else {
        heroclasse = std::stoi(heroclasse_string);
    }
    std::string nomeheroi;
    int heroistr = 0, heroidex = 0, heroicons = 0, heroiintel = 0, heroiwisdom = 0, heroicharism = 0;
    std::cout << texto(1);
    getline(std::cin, nomeheroi);
    int ponto_max = 20;
    std::cout << std::endl;
    std::cout << texto(12);
    std::cout << std::endl << texto(2);
    std::cin >> heroistr;
    ponto_max -= heroistr;
    std::cout << texto(11) << ponto_max << std::endl;
    std::cout << std::endl << texto(3);
    std::cin >> heroidex;
    ponto_max -= heroidex;
    std::cout << texto(11) << ponto_max << std::endl;
    std::cout << std::endl << texto(4);
    std::cin >> heroicons;
    ponto_max -= heroicons;
    std::cout << texto(11) << ponto_max << std::endl;
    std::cout << std::endl << texto(5);
    std::cin >> heroiintel;
    ponto_max -= heroiintel;
    std::cout << texto(11) << ponto_max << std::endl;
    std::cout << std::endl << texto(6);
    std::cin >> heroiwisdom;
    ponto_max -= heroiwisdom;
    std::cout << texto(11) << ponto_max << std::endl;
    std::cout << std::endl << texto(7);
    std::cin >> heroicharism;
    ponto_max -= heroicharism;
    if (ponto_max > 0){
        std::cout << "Pontos restantes: " << ponto_max << std::endl;
        std::cout << "Aonde deseja adicionar os pontos restantes?" << std::endl;
        int resto = 0;
        std::cin >> resto;
        switch(resto){
            case 1:
                heroi.set_str(ponto_max);
                break;
            case 2:
                heroi.set_dex(ponto_max);
                break;
            case 3:
                heroi.set_cons(ponto_max);
                break;
            case 4:
                heroi.set_intel(ponto_max);
                break;
            case 5:
                heroi.set_wisdom(ponto_max);
                break;
            case 6:
                heroi.set_charism(ponto_max);
                break;
        }
        std::cout << std::endl << std::endl;
        heroi.createhero(nomeheroi, heroistr, heroidex, heroicons, heroiintel, heroiwisdom, heroicharism, heroclasse);

        system("cls");
        std::cout << texto(8) << std::endl;
        heroi.print_hero_stats();

        system("pause>>null");
        return heroi;
    } else if (ponto_max < 0){
        system("cls");
        std::cout << "\tOs stats nao pode ser superior a 20 pontos, pressione qualquer tecla para voltar a tela de criacao.\n" << std::endl;
        system("pause");
        hero_creation();

    } else {
        std::cout << std::endl << std::endl;
        heroi.createhero(nomeheroi, heroistr, heroidex, heroicons, heroiintel, heroiwisdom, heroicharism, heroclasse);

        system("cls");
        std::cout << texto(8) << std::endl;
        heroi.print_hero_stats();

        system("pause>>null");
    }
    return heroi;
}
