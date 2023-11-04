#include <iostream>
//On a défini la Template de classes suivant :
template <class T> class point{
    T x, y ; // coordonnees
public :
    point (T abs, T ord) { x = abs ; y = ord ; }
    void affiche () ;
} ;

template <class T> void point<T>::affiche ()
{ std::cout << "Coordonnees : " << x << " " << y << "\n" ;
}

//a. Que se passe-t-il avec ces instructions :
//point <char> p (60, 65) ;
//p.affiche () ;

/*
 *
 * il va afficher les valeurs ASCII correspandante de 60 et 65
 *
 * */



//b. Comment faut-il modifier la définition de notre patron pour que les instructions
//précédentes affichent bien :
//Coordonnees : 60 65

/*
 *
 * il suffit de initialiser p comme ca :
 *
 *   point <int> p (60, 65) ;
 *
 * */