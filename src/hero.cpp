#include "hero.h"
#include "hero_creation.h"
#include "personagem.h"
#include "classes.h"
#include <stdlib.h>
#include <string>
#include <iostream>


/*void hero::set_name(std::string name){

    this->name = name;

}*/

/*std::string hero::get_classe(int indice){

    std::string classe = "";
    switch(indice) {
        case 1:
            classe = "Barbaro";
            break;
        case 2:
            classe =  "Bardo";
            break;
        case 3:
            classe =  "Clerigo";
            break;
        case 4:
            classe =  "Druida";
            break;
        case 5:
            classe =  "Feiticeiro";
            break;
        case 6:
            classe =  "Guerreiro";
            break;
        case 7:
            classe =  "Ladino";
            break;
        case 8:
            classe =  "Mago";
            break;
        case 9:
            classe =  "Monge";
            break;
        case 10:
            classe =  "Paladino";
            break;
        case 11:
            classe =  "Ranger";
            break;
    }
    return classe;
}*/



/*void hero::set_str(int str){

    this->str += str;

}
void hero::set_dex(int dex){

    this->dex += dex;

}
void hero::set_cons(int cons){

    this->cons += cons;

}
void hero::set_intel(int intel){

    this->intel += intel;

}
void hero::set_wisdom(int wisdom){

    this->wisdom += wisdom;

}
void hero::set_charism(int charism){

    this->charism += charism;

}*/

void hero::createhero(std::string name, int str, int dex, int cons, int intel, int wisdom, int charism, int classe){

    set_name(name);
    set_str(str);
    set_dex(dex);
    set_cons(cons);
    set_intel(intel);
    set_wisdom(wisdom);
    set_charism(charism);
    set_level(1);;
    set_classe(classe);
    set_hp(100.0);
    set_arma(1);
    set_atk(get_str(), get_arma_atk());
    set_def(get_cons(), get_arma_def());
    set_heroi(1);

}


/*void hero::set_classe(int indice){

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

/*void hero::set_arma(int weapown){

    switch(weapown){
        case 1:
            this->arma.nome = "Punhos";
            this->arma.atk    = 5;
            this->arma.def    = 1;
            this->arma.type   = 1;
            break;
        case 2:
            this->arma.nome = "Espada de Madeira";
            this->arma.atk    = 7;
            this->arma.def    = 3;
			this->arma.type   = 3;
            break;
        case 3:
            this->arma.nome = "Espada de Aco";
            this->arma.atk    = 9;
            this->arma.def    = 4;
			this->arma.type   = 3;
            break;
        case 4:
            this->arma.nome = "Espada de Obsidiana";
            this->arma.atk    = 15;
            this->arma.def    = 7;
			this->arma.type   = 3;
            break;
        case 5:
            this->arma.nome = "Revolver Calibre .43";
            this->arma.atk    = 21;
            this->arma.def    = 3;
			this->arma.type   = 5;
            break;
        case 6:
            this->arma.nome = "Espingarda Calibre .23";
            this->arma.atk    = 32;
            this->arma.def    = 3;
			this->arma.type   = 5;
            break;
        case 7:
            this->arma.nome = "Fuzil de Assalto";
            this->arma.atk    = 27;
            this->arma.def    = 3;
			this->arma.type   = 5;
            break;
        case 8:
            this->arma.nome = "Serra Eletrica";
            this->arma.atk    = 75;
            this->arma.def    = 4;
			this->arma.type   = 4;
            break;
        case 9:
            this->arma.nome = "Sniper";
            this->arma.atk    = 65;
            this->arma.def    = 4;
			this->arma.type   = 5;
            break;
    }
}*/

/*void hero::altera_status(int indice){

    switch(indice) {

        case 1:

            this->status[1] = 1;

        case 2:

            this->status[2] = 1;

        case 3:

            this->status[3] = 1;
    }
}*/

void hero::update_stats(){

    int pontos_distribuicao = 5, acao = 0;
    std::cout << "Distribua os 5 pontos ganhos: \nDigite a quantidade de pontos desejados para Forca" << std::endl;
    std::cin >> acao;
    set_str(acao);
    if(pontos_distribuicao  > 0 ){
        pontos_distribuicao -= acao;
        std::cout << "Para Destreza: ";
        std::cin >> acao;
    }
    if(pontos_distribuicao > 0){
        set_dex(acao);
        pontos_distribuicao -= acao;
        std::cout << "\nPara Constituicao: ";
        std::cin >> acao;
        set_cons(acao);
        pontos_distribuicao -= acao;
    }
    if(pontos_distribuicao > 0){
        std::cout << "\nPara Inteligencia: ";
        std::cin >> acao;
        set_intel(acao);
        pontos_distribuicao -= acao;
    }
    if(pontos_distribuicao > 0){
        std::cout << "\nPara Sabedoria: ";
        std::cin >> acao;
        set_wisdom(acao);
        pontos_distribuicao -= acao;
    }
    if(pontos_distribuicao > 0){
        std::cout << "\nPara Carisma: ";
        std::cin >> acao;
        set_charism(acao);
        pontos_distribuicao -= acao;
    }
    system("cls");

}


///////DAQUI PARA BAIXO METODOS GET//////
////////////////////////////////////////
/*char* hero::get_name(){

    return this->name;

}*/

/*std::string hero::get_classe(){

    return this->classe.nome;

}*/

/*std::string hero::get_name(){

    return this->name;

}*/
/*
int hero::get_str(){

    return this->str;

}
int hero::get_dex(){

    return this->dex;

}
int hero::get_cons(){

    return this->cons;

}
int hero::get_intel(){

    return this->intel;

}
int hero::get_wisdom(){

    return this->wisdom;

}
int hero::get_charism(){

    return this->charism;

}


int hero::get_level(){

    return this->level;
}
std::string hero::get_classe() {

    return this->classe;

}*/

/*std::string hero::get_tipo_arma(int indice){

    std::string type_arma = "";
    switch(indice){
    case 1:
        type_arma = "Desarmado";
        break;
    case 2:
        type_arma = "Armas leves";
        break;
    case 3:
        type_arma = "Uma mao";
        break;
    case 4:
        type_arma = "Duas maos";
        break;
    case 5:
        type_arma = "A distancia";
        break;
    }
    return type_arma;

}*/

/*std::string hero::get_arma(){

    std::string status_arma = "\n\tNome: " + arma.nome + "\n\tAtaque: " += std::to_string(arma.atk) + "\n\tDefesa: " + std::to_string(arma.def) + "\n\tTipo: " + get_tipo_arma(this->arma.type);
    return status_arma;
}*/

void hero::print_hero_stats(){

    std::cout << "Classe: " << get_classe() << std::endl;
    std::cout << "Level: " << get_level() << std::endl;
    std::cout << "Nome: " << get_name() << std::endl;
    std::cout << "Pontos de vida: " << get_hp() << std::endl;
    std::cout << "Pontos de experiencia: " << get_xp() << std::endl;
    std::cout << "Forca: " << get_str() << std::endl;
    std::cout << "Destreza: " << get_dex() << std::endl;
    std::cout << "Constituicao: " << get_cons() << std::endl;
    std::cout << "Inteligencia: " << get_intel() << std::endl;
    std::cout << "Sabedoria: " << get_wisdom() << std::endl;
    std::cout << "Carisma: " << get_charism() << std::endl;
    std::cout << "Ataque: " << get_atk() << std::endl;
    std::cout << "Defesa: " << get_def() << std::endl;
    std::cout << "Arma empunhada: " << get_arma() << std::endl;
    system("pause>>null");

}

/*char* hero::get_status(){

    const char* burn[10], poison[11], dizzy[8];
    if(status[1] == 1){
        burn[1] = "Queimando";
    }
    if(status[2] == 1){
        poison[1] = "Envenenado";
    }
    if(status[3] == 1){
        dizzy[1] = "Confuso";
    }
    return burn;
}*/

hero::hero()
{
    //ctor
}
hero::~hero()
{
    //dtor
}
