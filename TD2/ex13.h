//
// Created by unknow on 10/24/2023.
//

#ifndef C_EX13_H
#define C_EX13_H
#include <iostream>

class point {
public:

    point(float x, float y):x(x),y(y){}

    void deplace(float x, float y);
    void affiche();

private:
    float x,y;
};


#endif //C_EX13_H
