#include "texto.h"
#include "viloes.h"
#include "batalha.h"
#include "hero.h"
#include "diversos.h"
#include <iomanip>
#include <math.h>

int batalha(hero heroi) {

    system("cls");
    viloes vilao;
    while(heroi.get_hp() > 0){
        vilao.createvilain(true_random(1,11), heroi.get_level());
        std::cout << texto(19) << std::endl;
        vilao.print_viloes_stats();
        int i = 0;
        if (heroi.get_dex() > vilao.get_dex()){
            i = 1;
        } else {
            i = 2;
            setcolor(12);
            std::cout << "\n\nO monstro foi mais rapido que o heroi\nMonstro atacou.\n" << std::endl;
            setcolor(7);
        }
        do {
            if(i%2 != 0){
                int acao = 0;
                std::cout << texto(16) << std::endl;
                std::cin >> acao;
                switch(acao){
                    case 1:
                        float dano = ataque(heroi, vilao);
                        vilao.set_hp_durante_batalha(dano);
                        system("pause>>null");
                        system("cls");
                        heroi.print_batalha(heroi, vilao);
                        break;
                }
            } else {
                std::cout << "O monstro atacou!" <<  std::endl;
                float dano = ataque(vilao, heroi);
                heroi.set_hp_durante_batalha(dano);
                system("Pause>>null");
                system("cls");
                vilao.print_batalha(heroi, vilao);
            }
        i++;
        } while(heroi.get_hp() > 0 && vilao.get_hp() > 0);
        if(vilao.get_hp() == 0.0){

            std::cout << texto(18) << std::endl;
            heroi.update_xp(vilao.get_xp());
            heroi.set_hp(ceil(heroi.get_hp()*0.3));
            system("pause>>null");
        } else if (heroi.get_hp() == 0.0){
            std::cout << std::setw(80) << std::internal << "Você morreu." << std::endl;
            system("pause>>null");
            system("Cls");
            std::cout << std::setw(80) << std::internal << "Game Over" << std::endl;
            system("pause>>null");
            return 1;
        }
    }
    vilao.~viloes();
    return 0;
}



float ataque(personagem batendo, personagem levando){

    int d_vinte = dado(20);
    float dano = 0.0;
    if (d_vinte == 20){
        if (batendo.get_atk() - levando.get_def() > 0){
            dano = (batendo.get_atk() - levando.get_def()) * 2;
        } else {
            dano = 2;
        }
        std::cout << texto(13) << std::endl;
        std::cout << "Dado: " << d_vinte << std::endl;
        std::cout << texto(15) << dano << std::endl;
    } else if ( d_vinte == 1){
        dano = 0;
        std::cout << texto(14) << std::endl;
        std::cout << "Dado: " << d_vinte << std::endl;
        std::cout << texto(15) << dano << std::endl;

    } else {
        if (d_vinte > 10) {
            if (batendo.get_atk() - levando.get_def() > 0){
                dano = (batendo.get_atk() - levando.get_def()) + ((batendo.get_atk() - levando.get_def()) * (1 + ((d_vinte*100)/20)/100));
            } else {
                dano = 1;
            }
        std::cout << "Dado: " << d_vinte << std::endl;
        std::cout << texto(15) << dano << std::endl;
        } else {
            if (batendo.get_atk() - levando.get_def() > 0){
                std::cout << batendo.get_atk() - levando.get_def() << std::endl;
                dano = (batendo.get_atk() - levando.get_def()) + (((batendo.get_atk() - levando.get_def()) * ((d_vinte*100)/20))/100);
            } else {
                dano = 1;
            }
            std::cout << "Dado: " << d_vinte << std::endl;
            std::cout << texto(15) << dano << std::endl;
        }
    }
    return dano;
}

/*float vilain_ataque(viloes vilao, hero heroi){

    int d_vinte = dado(20);
    float dano = 0;
    if (d_vinte == 20){
        dano = (vilao.get_atk() - heroi.get_def()) * 2;
        std::cout << texto(17) << d_vinte << std::endl;
        std::cout << texto(13) << std::endl;
        std::cout << texto(14) << dano << std::endl;
    } else if( d_vinte == 1){
        dano = 0;
        std::cout << texto(17) << d_vinte << std::endl;
        std::cout << texto(14) << std::endl;
        std::cout << texto(15) << dano << std::endl;
    } else {
        if (d_vinte > 10) {
            std::cout << texto(17) << d_vinte << std::endl;
            dano = (vilao.get_atk() - heroi.get_def()) * (1 +(d_vinte/100));
            std::cout << texto(15) << dano << std::endl;
        } else {
            std::cout << texto(17) << d_vinte << std::endl;
            dano = (vilao.get_atk() - heroi.get_def()) * (d_vinte/10);
            std::cout << texto(15) << dano << std::endl;
        }
    }
    return dano;
}*/




