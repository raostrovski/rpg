#ifndef PERSONAGEM_H_INCLUDED
#define PERSONAGEM_H_INCLUDED
#include "armas.h"
#include "classes.h"
#include <string>

class personagem
{
    public:
        void set_level(int level);
        int get_level();

        void set_hp(int hp);
        void set_hp_durante_batalha(float hp);
        float get_hp();

        void set_mana(int mana);
        int get_mana();

        void set_atk(int atk, int arma_atk);
        int get_atk();

        void set_def(int def, int arma_def);
        int get_def();

        void update_xp(int xp_ganho);
        float get_xp();

        void update_xp_max();
        float get_xp_max();

        void set_arma(int weapown);
        std::string get_tipo_arma(int indice);
        std::string get_arma();
        int get_arma_atk();
        int get_arma_def();

        void set_str(int str);
        void set_dex(int dex);
        void set_cons(int cons);
        void set_intel(int intel);
        void set_wisdom(int wisdom);
        void set_charism(int charism);
        void set_classe(int classe);
        void print_batalha(personagem heroi, personagem monstro);

        int get_str();
        int get_dex();
        int get_cons();
        int get_intel();
        int get_wisdom();
        int get_charism();
        std::string get_classe();
        virtual void set_xp(int hero_level);

        void set_name(std::string name);
        std::string get_name();
        int get_heroi();
        void set_heroi(int sim);

        void set_tipo();
        int get_tipo_numero();
        std::string get_tipo();
        void set_status(int str, int dex, int cons, int intel, int wisdom, int charism);

        virtual ~personagem();
    private:
        std::string name = "";
        int level    = 1;
        int tipo     = 0;
        int str      = 0;
        int dex      = 0;
        int cons     = 0;
        int intel    = 0;
        int wisdom   = 0;
        int charism  = 0;
        float hp     = 0.0;
        float xp     = 0.0;
        float xp_max = 1.0;
        int mana     = 0;
        int atk      = 0;
        int def      = 0;
        int heroi    = 0;
        armas arma;
        classe classe;
} ;


#endif // PERSONAGEM_H_INCLUDED
