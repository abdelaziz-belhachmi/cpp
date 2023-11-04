/*
    *
    * Code output :
    *
    * dans f : 999
    * suite main
    *
    * */

#include "exo10.h"
#include <iostream>
using namespace std ;
void f() ;
int main(){


    try{
        f();

    }catch(erreur er){
        cout << "dans main : " << er.num << "\n" ;
    }


    cout << "suite main\n" ;
}

void f(){

    try{
        A a(1);
    }catch (erreur er){
        cout << "dans f : " << er.num << "\n" ;
    }

}

    /*
     *
     * Code output :
     *
     * dans f : 999
     * suite main
     *
     * */