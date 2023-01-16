# affichage2d_with_SDL

Classe facilitant l'utilisation de la librairie SDL. Elle fonctionne sur tous les systèmes.

## Comment l'utiliser ?

Alors pour utiliser cette classe, il faut déjà la déclarer tel que : 
```c++
//paramètre : largeur , hauteur, délai sdl et échelle
Affichage2d affichage(100,100, 50,8);
```

Ensuite, il faut l'initialiser tel que :

```c++
affichage.initalisationAffichage();
```

L'initialisation est effectuée, on peut maintenant utiliser le reste des fonctions membres, déjà, je recommande de nettoyer l'affichage avec cette commande :

```c++
affichage.nettoyerAffichage(Couleur::blanc);
```

Cette commande nettoyera l'affichage tout en blanc.
Maintenant que votre canva est blanc, vous pouvez ajouter des pixels avec la commande suivante :

```C++
// paramètre : position x, position y, couleur du pixel
affichage.ajouterElementAffichage(10,10, Couleur::noir);
```

Une fois que vous avez dessiné tous les pixels que vous voulez, utilisez cette fonction pour mettre à jour l'affichage :

```c++
affichage.mettreAjourAffichage();
```

Une fois que vous avez fini d'utiliser sdl, utilisez cette fonction pour fermer l'instance :

```c++
affichage.fermerAffichage();
```

### Couleur

Il y a trois couleurs disponible, noir, blanc et rouge. Vous pouvez les indiquer tel que :
```c++
Couleur::noir
Couleur::blanc
Couleur::rouge
```



