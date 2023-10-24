//
// Created by unknow on 10/23/2023.
//
#include <iostream>
#include "ex12.h"



int Test::count = 0;

int main(){

    Test *a = new Test;
    a->call(); //1
    a->call(); //2
    a->print_count();
    a->call(); //3
    a->call(); //4
    a->call(); //5
    a->print_count();
   return 0;
}