#include <iostream>

//définir un constructeur
 Monstre::Monstre() : _Pv(2), _scoreAttaque(2), _dispo(true) {}

//définir les méthodes
 void Monstre::afficheStatMonstre(){
     std::cout <<"PV : "_pV << std:: endl;
     std::cout <<"Atk : "_attaque << std::endl;
     std::cout <<"dispo : " _dispo << std::endl;
 }

 void Monstre::monstrePerdVie(){
     
 }