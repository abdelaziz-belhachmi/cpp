//
// Created by abdelaziz belhachmi on 11/6/2023.
// apogee 19006027
// filiere idai
//


#include "stack.h"

int main(){

    int n1=6 , n2=4 ,n3=5 ;

    // par default on aura tail de p 20
    stack p;

    // p2 de taille 5
    stack p2(5);

    p << n1 << n2 << n3 ;
    p >> n1 >> n2 << n3 ;

    return 0;
}