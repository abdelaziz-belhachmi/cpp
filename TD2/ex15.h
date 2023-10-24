//
// Created by unknow on 10/24/2023.
//

#ifndef C_EX15_H
#define C_EX15_H
#include <iostream>
#include <cstring>

class Fichier {

public:
    Fichier(){}
    ~Fichier(){
        delete[] this->pt;
    }

    // va afficher la zone mémoire pointée par P.
    void Affiche(){
        for (size_t i = 0; i < lenght; i++) {
            std::cout << *(pt+i);
        }
        std::cout << std::endl;
    }


    /* va remplir arbitrairement cet espace (ces remplissages
arbitraires sont la preuve de la bonne gestion mémoire car l’accès à une zone non
déclarée provoque une violation d’accès)*/
    void Remplit(){
        for (size_t i = 0; i < lenght; i++) {
            *(pt+i) = 'A' + (i % 26);
        }
    }

    // va allouer un certain espace à partir du pointeur P
    void Creation(size_t t){
        this->pt = new char[t];
        this->lenght = t;
    }

private:
char *pt;
size_t lenght;

};


#endif //C_EX15_H
