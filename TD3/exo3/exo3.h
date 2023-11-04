//
// Created by unknow on 11/4/2023.
//

#ifndef WORKSPACE_EXO3_H
#define WORKSPACE_EXO3_H
#include <iostream>
#include <list>
//#include <string>
using std::string ,std::cout , std::cin , std::endl;

class persone {
string nom;
string prenom;
int age;

public:
    // constructeur
    persone(string nom , string prenom ,int age):nom(nom), prenom(prenom),age(age){}
    // i may need the default consturcteur too , so i will keep it just in case
    persone(){}

public:

    // getters
    int get_age(){
        return age;
    }

    string get_nom(){
        return nom;
    }

    string get_prenom(){
        return prenom;
    }

    // Opérateur de comparaison pour trier par nom et prénom
    bool operator<(const persone& other) const {
        if (prenom == other.prenom) {
            return nom < other.nom;
        }
        return prenom < other.prenom;
    }
};


#endif //WORKSPACE_EXO4_H
