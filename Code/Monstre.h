#ifndef TICTACTOE_H
#define TICTACTOE_H

#include <string>

class Monstre{

    private:
        int _pV;
        int _scoreAttaque;
        char _dispo;

    public:
        Monstre();
        void afficheStatMonstre();
        void monstrePerdVie();
        void monstreAttaque();
        bool testeVictoire();

        void finTour();

};

#endif