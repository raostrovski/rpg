#ifndef VILOES_H_INCLUDED
#define VILOES_H_INCLUDED
#include "personagem.h"
#include "classes.h"
#include <string>

class viloes: public personagem
{
    public:
        viloes();
        virtual ~viloes();

        //void set_classe(int indice);
        //void set_tipo();
        //void set_xp(int hero_level) override;
        void createvilain(int classe, int level);
        //void set_status(int str, int dex, int cons, int intel, int wisdom, int charism);
        /*void set_str(int str);
        void set_dex(int dex);
        void set_cons(int cons);
        void set_intel(int intel);
        void set_wisdom(int wisdom);
        void set_charism(int charism);
        void set_level(int level);*/

        /*int get_tipo_numero();
        //std::string get_classe();
        std::string get_tipo();
        std::string get_nome(int classe);*/
        /*int get_str();
        int get_dex();
        int get_cons();
        int get_intel();
        int get_wisdom();
        int get_charism();*/


        void print_viloes_stats();
    private:
        //int tipo = 0;
        /*int str = 0;
        int dex = 0;
        int cons = 0;
        int intel = 0;
        int wisdom = 0;
        int charism = 0;
        int xp = 0;*/
};

#endif // VILOES_H_INCLUDED
