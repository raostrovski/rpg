#include "personagem.h"
#include "hero.h"
#include "diversos.h"
#include "armas.h"
#include <iomanip>
#include <iostream>
#include <math.h>

void personagem::set_name(std::string name){

    this->name = name;

}

void personagem::set_level(int level){

    if (level <= 0){
        this->level = 1;
    } else {
        this->level = level;
    }
}

void personagem::set_xp(int hero_level){

    this->xp = rand()%(hero_level + get_level() + 10);

}

void personagem::set_hp(int hp){

    this->hp += hp;

}

void personagem::set_hp_durante_batalha(float hp){

    this->hp -= hp;

}

void personagem::set_mana(int mana){

    this->mana = mana;

}

void personagem::set_atk(int atk, int arma_atk){

    this->atk += ceil(arma_atk+((atk*get_level())/2));

}

void personagem::update_xp(int xp_ganho){

    this->xp += xp_ganho;
    if(this->xp >= this->xp_max){

        this->xp_max += ceil(this->xp_max*0.30);
        this->xp = 0;
        this->level += 1;
        //update_stats();
    }

}

void personagem::set_def(int def, int arma_def){

    this->def += ceil(arma_def+((def*get_level())/2));

}

void personagem::set_arma(int weapown){

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
}

void personagem::set_tipo(){

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

}

void personagem::set_status(int str, int dex, int cons, int intel, int wisdom, int charism){

    set_str(str);
    set_dex(dex);
    set_cons(cons);
    set_intel(intel);
    set_wisdom(wisdom);
    set_charism(charism);

}

void personagem::set_classe(int indice){

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
}

void personagem::set_str(int str){

    this->str += str;

}
void personagem::set_dex(int dex){

    this->dex += dex;

}
void personagem::set_cons(int cons){

    this->cons += cons;

}
void personagem::set_intel(int intel){

    this->intel += intel;

}
void personagem::set_wisdom(int wisdom){

    this->wisdom += wisdom;

}
void personagem::set_charism(int charism){

    this->charism += charism;

}

void personagem::set_heroi(int sim){

    this->heroi = sim;

}

int personagem::get_tipo_numero(){

    return this->tipo;
}

std::string personagem::get_tipo(){

    int indice = this->tipo;
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
}

/*INICIA OS GET*/

std::string personagem::get_name(){

    return this->name;

}

float personagem::get_hp(){

    return this->hp;

}

int personagem::get_level(){

    return this->level;
}

int personagem::get_mana(){

    return this->mana;

}

int personagem::get_atk(){

    return this->atk;

}

int personagem::get_def(){

    return this->def;

}

float personagem::get_xp(){

    return this->xp;

}

int personagem::get_str(){

    return this->str;

}
int personagem::get_dex(){

    return this->dex;

}
int personagem::get_cons(){

    return this->cons;

}
int personagem::get_intel(){

    return this->intel;

}
int personagem::get_wisdom(){

    return this->wisdom;

}
int personagem::get_charism(){

    return this->charism;

}

std::string personagem::get_classe(){

    return this->classe.nome;

}

std::string personagem::get_arma(){

    std::string status_arma = "\n\tNome: " + arma.nome + "\n\tAtaque: " += std::to_string(arma.atk) + "\n\tDefesa: " + std::to_string(arma.def) + "\n\tTipo: " + get_tipo_arma(this->arma.type);
    return status_arma;
}

std::string personagem::get_tipo_arma(int indice){

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

}

int personagem::get_heroi(){

    return this->heroi;
}

int personagem::get_arma_atk(){
    return this->arma.atk;
}
int personagem::get_arma_def(){
    return this->arma.def;
}

void personagem::print_batalha(personagem heroi, personagem monstro){

    std::cout << std::left << std::setw(14) << "Classe:...... " << std::left << std::setw(74) << std::left << heroi.get_classe()
              << std::left << std::setw(14) << "Classe: " << std::left << std::setw(10) << std::left << monstro.get_classe() << std::endl;
    std::cout << std::left << std::setw(14) << "Level:....... " << std::left << std::setw(75) << std::left << heroi.get_level()
              << std::left << std::setw(14) << "Level: " << std::left << std::setw(2)  << std::left << monstro.get_level() << std::endl;
    std::cout << std::left << std::setw(14) << "Nome:........ " << std::left << std::setw(83) << std::left << heroi.get_name()
              << std::left << std::setw(14) << "Ra\x87a: " << std::left << std::setw(10) << std::left << monstro.get_tipo() << std::endl;
    std::cout << std::left << std::setw(14) << "HP:.......... " << std::left << std::setw(78) << std::left << heroi.get_hp()
              << std::left << std::setw(14) << "HP: " << std::left << std::setw(6)  << std::left << monstro.get_hp() << std::endl;
    std::cout << std::left << std::setw(14) << "XP:.......... " << std::left << std::setw(78) << std::left << heroi.get_xp()
              << std::left << std::setw(14) << "XP: " << std::left << std::setw(6)  << std::left << monstro.get_xp() << std::endl;
    std::cout << std::left << std::setw(14) << "Forca:....... " << std::left << std::setw(75) << std::left << heroi.get_str()
              << std::left << std::setw(14) << "Forca: " << std::left << std::setw(2)  << std::left << monstro.get_xp() << std::endl;
    std::cout << std::left << std::setw(14) << "Destreza:.... " << std::left << std::setw(72) << std::left << heroi.get_dex()
              << std::left << std::setw(14) << "Destreza: " << std::left << std::setw(2)  << std::left << monstro.get_dex() << std::endl;
    std::cout << std::left << std::setw(14) << "Constituicao: " << std::left << std::setw(68) << std::left << heroi.get_cons()
              << std::left << std::setw(14) << "Constituicao: " << std::left << std::setw(2)  << std::left << monstro.get_cons() << std::endl;
    std::cout << std::left << std::setw(14) << "Inteligencia: " << std::left << std::setw(68) << std::left << heroi.get_intel()
              << std::left << std::setw(14) << "Inteligencia: " << std::left << std::setw(2)  << std::left << monstro.get_intel() << std::endl;
    std::cout << std::left << std::setw(14) << "Sabedoria:... " << std::left << std::setw(71) << std::left << heroi.get_wisdom()
              << std::left << std::setw(14) << "Sabedoria: " << std::left << std::setw(2)  << std::left << monstro.get_wisdom() << std::endl;
    std::cout << std::left << std::setw(14) << "Carisma:..... " << std::left << std::setw(73) << std::left << heroi.get_charism()
              << std::left << std::setw(14) << "Carisma: " << std::left << std::setw(2)  << std::left << monstro.get_charism() << std::endl;
    std::cout << std::left << std::setw(14) << "Ataque:...... " << std::left << std::setw(74) << std::left << heroi.get_atk()
              << std::left << std::setw(14) << "Ataque: " << std::left << std::setw(6)  << std::left << monstro.get_atk() << std::endl;
    std::cout << std::left << std::setw(14) << "Defesa:...... " << std::left << std::setw(74) << std::left << heroi.get_def()
              << std::left << std::setw(14) << "Defesa: " << std::left << std::setw(6)  << std::left << monstro.get_def() << std::endl;
    std::cout << "--------------------------------------------------------------------------------------\n\n";
}

personagem::~personagem(){

}
