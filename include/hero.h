#ifndef HERO_H
#define HERO_H
#include <string>
#include "armas.h"
#include "personagem.h"
#include "classes.h"

class hero: public personagem
{
    public:
        virtual ~hero();

        hero();
        //void set_name(std::string name);
        /*void set_str(int str);
        void set_dex(int dex);
        void set_cons(int cons);
        void set_intel(int intel);
        void set_wisdom(int wisdom);
        void set_charism(int charism);
        void set_level(int level);
        void set_classe(int classe);*/
        void createhero(std::string name, int str, int dex, int cons, int intel, int wisdom, int charism, int classe);
        void altera_status(int indice);
        void update_stats();
        //void set_arma(int weapown);

        //char* get_name();
        //std::string get_name();
        /*int get_str();
        int get_dex();
        int get_cons();
        int get_intel();
        int get_wisdom();
        int get_charism();*/
        //std::string get_arma();
        //std::string get_tipo_arma(int indice);

        void print_hero_stats();
        //char* get_status();
        //std::string get_classe();

    private:
        //std::string name = "";
        /*classe classe;
        int str = 0;
        int dex = 0;
        int cons = 0;
        int intel = 0;
        int wisdom = 0;
        int charism = 0;*/
};

#endif // HERO_H
