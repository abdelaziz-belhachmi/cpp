//
// Created by unknow on 10/24/2023.
//

#include "ex13.h"
#include <iostream>

int main(){
    point a(1.23,-5.25);
    point b(14.98,2.5);

    a.affiche();
    b.affiche();
    std::cout<<std::endl;

    a.deplace(2.3,6);
    b.deplace(-7.3,2.5);

    a.affiche();
    b.affiche();
    std::cout<<std::endl;

    return 0;
}