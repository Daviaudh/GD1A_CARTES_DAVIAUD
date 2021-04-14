#include <string>

//définir la classe
class Monstre{

    private:
        int _pV;
        int _attaque;
        bool _dispo;

    public:
        Monstre();
        void afficheStatMonstre();
        void monstrePerdVie();
        void monstreAttaque();
        bool testeVictoire();

        void finTour();

};

