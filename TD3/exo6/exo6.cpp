//
// Created by abdelaziz belhachmi on 11/4/2023.
//
#include <iostream>
#include "exo6.h"

//using std::std::cout, std::cin , std::std::endl;

int main(){
    vectok v1(5);
    std::cout<<"v taille :"<< v1.taille()<<std::endl;

    // using constructor by copy
    vectok v_copy(v1);
    std::cout<<"v copy taille : "<<v_copy.taille()<<std::endl;

// copying using = operator overload
    vectok v2(8);
    vectok v3 = v2;
    std::cout<<"v2 taille :"<<std::endl;
    std::cout<<"v3 should be assigned v2 values properly , v3 taille : "<<v3.taille()<<std::endl;

}