/*
---------------------------------------------------------------------------
Fichier     : affichage2d.cpp
Nom du labo : Labo8 - Snake
Auteur(s)   : Delétraz Alexandre - Germano Hugo
Date        : 10.01.2022
But         : Permet d'afficher une fenêtre d'une taille personnalisée en utilisant
              la libraire SDL (simple DirectMedia Layer)

Remarque(s) :

Compilateur : gcc version 11.2.0
---------------------------------------------------------------------------
*/

#include <iomanip>
#include <iostream>
#include "affichage2d.hpp"
#include <SDL2/SDL.h>

using namespace std;


// SDL library
SDL_Window*    window         = nullptr;
SDL_Renderer*  renderer       = nullptr;
SDL_Event      event;
bool           appIsRunning   = true;


bool Affichage2d::initalisationAffichage (){
   //--------------------------------------------------------------------------
   //    SDL settings
   //--------------------------------------------------------------------------
   const int  SCREEN_WIDTH  =  this->largeur;
   const int  SCREEN_HEIGTH =  this->hauteur;

   SDL_Init(SDL_INIT_VIDEO);
   SDL_CreateWindowAndRenderer(SCREEN_WIDTH, SCREEN_HEIGTH, SDL_WINDOW_SHOWN, &window, &renderer);
   if (window == nullptr or renderer == nullptr) {
      cout << "SDL not ready ... quitting" << endl;
      return true;
   }
   SDL_RenderSetScale(renderer, (float)SCREEN_WIDTH/(float)this->nbre_values, (float)SCREEN_HEIGTH/(float)this->nbre_values);
   return false;
}

bool Affichage2d::mettreAJourAffichage(){


   //-----------------------------------------------------------------
            //    SDL drawing
            //-----------------------------------------------------------------
            SDL_PollEvent(&event);
            if (event.type == SDL_QUIT) {
               appIsRunning = false;
               return true;
            }
            
            // clear the screen => all black
            SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
            SDL_RenderClear(renderer);


            // SDL display the window
            SDL_RenderPresent(renderer);
            SDL_Delay(this->sdl_delay);
            //-----------------------------------------------------------------
   
   return false;
}

bool Affichage2d::fermerAffichage (){

   cout << "press ENTER to quit ...";
   cin.ignore(numeric_limits<streamsize>::max(), '\n');

   // clear SDL ressources
   SDL_DestroyWindow(window);
   SDL_DestroyRenderer(renderer);
   SDL_Quit();

   return false;
}