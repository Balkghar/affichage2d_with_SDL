/*
---------------------------------------------------------------------------
Fichier     : affichage2d.hpp
Nom du labo : Labo8 - Snake
Auteur(s)   : Delétraz Alexandre - Germano Hugo
Date        : 10.01.2022
But         : Déclaration des fonctions qui permettent d'afficher une fenêtre d'une
              taille personnalisée en utilisant la libraire SDL
              (simple DirectMedia Layer)

Remarque(s) :

Compilateur : gcc version 11.2.0
---------------------------------------------------------------------------
*/

#ifndef LABO8_SNAKES_OUTILS_AFFICHAGE2D_HPP
#define LABO8_SNAKES_OUTILS_AFFICHAGE2D_HPP

#if defined(__linux__)  // Or #if __linux__
#include <SDL2/SDL.h>
#elif _WIN32
#include <SDL.h>
#else
#include <SDL2/SDL.h>
#endif

enum Couleur{blanc, noir, rouge};

   class Affichage2d {
      public:
         /// @brief constructeur de la classe Affichage2d
         /// @param larg largeur en pixel de la fenêtre
         /// @param haut hauteur en pixel de la fenêtre
         /// @param sdl_del delai sdl
         /// @param ech echèlle de l'affichage, par si 4, 1 pixel dessiné vaudra 4 pixels sur l'écran
         Affichage2d(const unsigned larg, const unsigned haut, const unsigned sdl_del, const unsigned ech) : largeur(larg), hauteur(haut), sdl_delay(sdl_del), echelle(ech){}
         /// @brief initialisation de l'affichage
         /// @return si l'affichage bien été initialisé
         bool initalisationAffichage();
         /// @brief ajoute un pixel à la fenetre
         /// @param x position x
         /// @param y position y
         /// @param couleur couleur à afficher
         /// @return si ça a réussi
         bool ajouterElementAffichage(unsigned x, unsigned y, Couleur couleur);
         /// @brief nettoie la fenetre
         /// @param couleur la couleur qui va s'afficher
         /// @return si cela a réussi
         bool nettoyerAffichage(Couleur couleur);
         /// @brief ferme l'affichage
         /// @return si cela à réussi
         bool fermerAffichage();
         /// @brief met à jour l'affichage
         /// @return si ça a réussi
         bool mettreAjourAffichage();
      private:
         /// @brief change la couleur de sdl
         /// @param couleur la couleur à appliquer
         void confCouleur(Couleur couleur);
         const unsigned largeur;
         const unsigned hauteur;
         const unsigned sdl_delay;
         const unsigned echelle;
   };



#endif