//
// Created by unknow on 10/23/2023.
//

#include "ex9.h"
#include <iostream>
#include <string>

using std::string, std::cout , std::endl;

int main(){

    Zebra zebra(15,"zebra smith");
    Dolphin dolphin(25,"dolphin bob");

    zebra.set_value("canada");
    dolphin.set_value("usa");

    return 0;
}