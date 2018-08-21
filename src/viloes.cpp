#include "viloes.h"
#include "diversos.h"
#include "classes.h"
#include <iostream>
#include <string>
#include <time.h>

/*void viloes::set_classe(int indice){

    switch(indice) {

        case 1:
            this->classe.nome = "Barbaro";
            this->classe.multi_str = 1.50;
            //this->classe.multi_dex =
            break;
        case 2:
            this->classe.nome =  "Bardo";
            break;
        case 3:
            this->classe.nome =  "Clerigo";
            break;
        case 4:
            this->classe.nome =  "Druida";
            break;
        case 5:
            this->classe.nome =  "Feiticeiro";
            break;
        case 6:
            this->classe.nome =  "Guerreiro";
            break;
        case 7:
            this->classe.nome =  "Ladino";
            break;
        case 8:
            this->classe.nome =  "Mago";
            break;
        case 9:
            this->classe.nome =  "Monge";
            break;
        case 10:
            this->classe.nome =  "Paladino";
            break;
        case 11:
            this->classe.nome =  "Ranger";
            break;
    }
}*/
/*void viloes::set_tipo(){

    this->tipo = true_random(0, 16);
    int monstro = get_tipo_numero();
    switch(monstro){
    case 1:
        set_status(7,3,7,1,1,1);
        break;
    case 2:
        set_status(6,7,7,0,0,0);
        break;
    case 3:
        set_status(4,7,5,2,0,1);
        break;
    case 4:
        set_status(8,2,8,1,0,1);
        break;
    case 5:
        set_status(2,4,5,9,0,0);
        break;
    case 6:
        set_status(7,8,5,9,0,0);
        break;
    case 7:
        set_status(6,8,6,0,0,0);;
        break;
    case 8:
        set_status(9,2,9,0,0,0);
        break;
    case 9:
        set_status(2,7,5,3,0,0);
        break;
    case 10:
        set_status(5,4,11,0,0,0);
        break;
    case 11:
        set_status(5,7,8,0,0,0);
        break;
    case 12:
        set_status(2,3,6,9,0,0);
        break;
    case 13:
        set_status(4,9,7,0,0,0);
        break;
    case 14:
        set_status(4,9,7,0,0,0);
        break;
    case 15:
        set_status(6,7,7,0,0,0);
        break;
    case 16:
        set_status(10,10,6,6,0,0);
        break;
    }

}*/

/*void viloes::set_status(int str, int dex, int cons, int intel, int wisdom, int charism){

    set_str(str);
    set_dex(dex);
    set_cons(cons);
    set_intel(intel);
    set_wisdom(wisdom);
    set_charism(charism);

}*/

/*void viloes::set_xp(int hero_level){

    this->xp = rand()%(hero_level + get_level() + 10);

}*/

void viloes::createvilain(int classe, int level){

    set_classe(classe);
    set_tipo();
    personagem::set_level(true_random(level-2, level+2));
    set_hp(50.0);
    set_arma(1);
    set_xp(1);
    set_atk(get_str(), get_arma_atk());
    set_def(get_cons(), get_arma_def());
}
/*
void viloes::set_str(int str){

    this->str += str;

}
void viloes::set_dex(int dex){

    this->dex += dex;

}
void viloes::set_cons(int cons){

    this->cons += cons;

}
void viloes::set_intel(int intel){

    this->intel += intel;

}
void viloes::set_wisdom(int wisdom){

    this->wisdom += wisdom;

}
void viloes::set_charism(int charism){

    this->charism += charism;

}


std::string viloes::get_classe(){


    return this->classe.nome;
}

*/
/*int viloes::get_tipo_numero(){

    return this->tipo;
}*/

/*std::string viloes::get_tipo(){

    indice = this->tipo;
    std::string tipo;
    switch(indice) {
        case 1:
            tipo = "Orc";
            break;
        case 2:
            tipo = "Humano";
            break;
        case 3:
            tipo = "Goblim";
            break;
        case 4:
            tipo = "Troll";
            break;
        case 5:
            tipo = "Ninfa";
            break;
        case 6:
            tipo = "Ciclope";
            break;
        case 7:
            tipo = "Aracnideos";
            break;
        case 8:
            tipo = "Gigante";
            break;
        case 9:
            tipo = "Elfo";
            break;
        case 10:
            tipo = "Golem";
            break;
        case 11:
            tipo = "Vampiro";
            break;
        case 12:
            tipo = "Duende";
            break;
        case 13:
            tipo = "Centauros";
            break;
        case 14:
            tipo = "Arpia";
            break;
        case 15:
            tipo = "Sereia";
            break;
        case 16:
            tipo = "Dragao";
            break;
    }
    return tipo;
}*/
/*
int viloes::get_str(){

    return this->str;

}
int viloes::get_dex(){

    return this->dex;

}
int viloes::get_cons(){

    return this->cons;

}
int viloes::get_intel(){

    return this->intel;

}
int viloes::get_wisdom(){

    return this->wisdom;

}
int viloes::get_charism(){

    return this->charism;

}
*/
void viloes::print_viloes_stats(){

    //system("cls");
    std::cout << "Tipo: " << get_tipo() << std::endl;
    std::cout << "Classe: " << get_classe() << std::endl;
    std::cout << "Level: " << get_level() << std::endl;
    std::cout << "Pontos de vida: " << get_hp() << std::endl;
    std::cout << "Ataque: " << get_atk() << std::endl;
    std::cout << "Defesa: " << get_def() << std::endl;


}

viloes::viloes()
{
    //ctor
}
viloes::~viloes()
{
    //dtor
}
