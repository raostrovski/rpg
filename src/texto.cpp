#include "texto.h"
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

string texto(int indice){

    string texto = "";
    switch(indice){

        case 1:

            texto = "Digite o nome do heroi: ";
            break;
        case 2:

            texto = "1: Os pontos de forca sao utilizados para combates corpo a corpo e uso de equipamentos mais fortes. \nDigite a forca do heroi: ";
            break;
        case 3:

            texto = "2: Os pontos de destreza sao utilizados em jogadas de ataque a distancia, incluindo arco e flechas, facas de arremesso e outras armas de atque a distancia, utilizado também em testes de equilibrio, furtividade, abrir fechaduras etc. \nDigite os pontos de destreza do heroi: ";
            break;
        case 4:

            texto = "3: Os pontos de constituicao representam os pontos de vida e de resistencia do heroi. \nDigite os pontos de constituicao do heroi: ";
            break;
        case 5:

            texto = "4: Os pontos de inteligencia determina o quao bem o seu heroi aprende e raciocina. Uma habilidade muito importante para magos pois afeta quantas magias eles podem lancar, quao dificil suas magias sao de resistir, e quao poderosas elas podem ser. \nDigite os pontos de inteligencia do heroi: ";
            break;
        case 6:

            texto = "5: Os pontos de sabedoria descreve a forca de vontade do personagem, bom senso, percepcao e intuicao. Enquanto Inteligencia representa a habilidade de analisar informacao, Sabedoria representa estar atento e alerta com o meio-ambiente. \nDigite os pontos de sabedoria do heroi: ";
            break;
        case 7:

            texto = "6: Os pontos de carisma mede a forca da personalidade, capacidade de persuadir, habilidade de liderar. \nDigite os pontos de carisma do personagem: ";
            break;
        case 8:

            texto = "Seu heroi: ";
            break;
        case 9:

            texto = "Escolha a classe do seu heroi: ";
            break;
        case 10:
            texto = "Sua arma padrão será ";
            break;
        case 11:
            texto = "Pontos restantes: ";
            break;
        case 12:
            texto = "O heroi pode receber ate 20 pontos para distrubuicao.";
            break;
        case 13:
            texto = "NAT20!";
            break;
        case 14:
            texto = "Errou!";
            break;
        case 15:
            texto = "Dano dado: ";
            break;
        case 16:
            texto= "O que deseja fazer?\n Digite '1' para atacar";
            break;
        case 17:
            texto = "Valor do dado: ";
            break;
        case 18:
            texto = "Voce derrotou o monstro!";
            break;
        case 19:
            texto = "\t\tUma ameaca se aproxima\n";
            break;
    }
    return texto;
}

void descricao_classes(){

    using namespace std;
    system("cls");
    cout << "Em RPG: THE GAME(TM), possuimos classes de personagens aonde sao definidas os poderes e habilidades que o seu heroi pode ter, sao elas:" << endl;
    cout << "1. Barbaro: Um combatente feroz que usa sua furia e seus instintos para derrotar os inimigos." << endl;
    cout << "2. Bardo: Um artista cuja musica faz magica - um andarilho, um contador de historias, e um faz-tudo." << endl;
    cout << "3. Clerigo: Um mestre da magia divina e tambem um combatente competente" << endl;
    cout << "4. Druida: Um conjurador que retira a energia da natureza para conjurar magias divinas e ganhar poderes magicos estranhos" << endl;
    cout << "5. Feiteiro: Um conjurador arcano com habilidades magicas inatas" << endl;
    cout << "6. Guerreiro: Um combatente com capacidade de combate excepcional e habilidade com armas inigualavel." << endl;
    cout << "7. Ladino: Um batedor e espiao matreiro e habilidoso, que ganha suas batalhas com habilidade, ao inves de forca bruta." << endl;
    cout << "8. Mago: Um conjurador poderoso, estudioso nas artes arcanas." << endl;
    cout << "9. Monge: Mestre nas artes marciais cujos ataques desarmados sao rapidos e destruidores - um mestre dos poderes exoticos" << endl;
    cout << "10. Paladino: Um icone da justica e um destruidor do mal, protegido por uma série de poderes misticos." << endl;
    cout << "11. Ranger: Um esperto e habilidoso combatente da selva." << endl << endl;

}
