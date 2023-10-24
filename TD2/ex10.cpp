//
// Created by unknow on 10/23/2023.
//

#include "ex10.h"


int main() {
    Personne personne( "aziz",  "belh",  "01-01-1980");
    Employe employe( "sho",  "mage", "05/10/1990", 500);
    Chef chef("bob", "marley", "12 03 1985", 600, "R&D");
    Directeur directeur("Johnson", "Jane", "20,06,1975", 800, "Management", "FSTT");

    personne.Afficher();
    employe.Afficher();
    chef.Afficher();
    directeur.Afficher();

    return 0;
}
