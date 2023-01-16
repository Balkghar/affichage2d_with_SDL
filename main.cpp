/*
  ---------------------------------------------------------------------------
  Fichier     : main.cpp
  Nom du labo : Labo8 - Snake
  Auteur(s)   : Delétraz Alexandre - Germano Hugo
  Date        : 10.01.2022
  But         : 

  Remarque(s) :

  Compilateur : gcc version 11.2.0
  ---------------------------------------------------------------------------
*/

#include <SDL2/SDL.h>
#include "affichage2d.hpp"

using namespace std;


//-----------------------------------------------------------------------------
int main() {

   Affichage2d affichage(1000,1000, 100,200);

   affichage.initalisationAffichage();
   affichage.nettoyerAffichage(Couleur::blanc);
   affichage.ajouterElementAffichage(10,10, Couleur::noir);
   affichage.ajouterElementAffichage(10,11, Couleur::noir);
   affichage.ajouterElementAffichage(10,12, Couleur::noir);
   affichage.ajouterElementAffichage(10,13, Couleur::noir);
   affichage.ajouterElementAffichage(10,14, Couleur::noir);
   affichage.ajouterElementAffichage(10,15, Couleur::noir);
   affichage.mettreAjourAffichage();
   affichage.fermerAffichage();

   return EXIT_SUCCESS;
}
