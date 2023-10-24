//
// Created by unknow on 10/24/2023.
//
#include "ex13.h"
#include <iostream>

float x,y;
void point::affiche(){
std::cout<<"P(x,y)=";
    if (y>0){
        std::cout<<this->x<<"x";
        std::cout<<"+";
        std::cout<<this->y<<"y"<<std::endl;
    }
    else {
        std::cout<<this->x<<"x";
        std::cout<<this->y<<"y"<<std::endl;
    }

}
void point::deplace(float x, float y){
    this->x = this->x + x;
    this->y = this->y + y;

}