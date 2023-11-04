//
// Created by unknow on 11/4/2023.
//

#ifndef WORKSPACE_EXO10_H
#define WORKSPACE_EXO10_H

class erreur
{
public :
int num;
};

class A{

public :
 A(int n){

    if (n==1) {
        erreur er;
        er.num = 999;
        throw er;
    }
 }

} ;


#endif //WORKSPACE_EXO10_H
