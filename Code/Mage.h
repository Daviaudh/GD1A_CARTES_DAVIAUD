#include <string>

//définir la classe
class Mage{

    private:
        int _pV;
        int _nom;
        //int _zone;

    public:
        Mage();
        void afficheStatMage();
        void jouerNouveauMonstre();
        void attaqueMonstre();
        void attaqueMage();

        void finTour();

};