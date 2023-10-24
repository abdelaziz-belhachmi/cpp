
#include "ex15.h"
#include <iostream>

int main(){

    // la function deconstructeur va s'executer lorsque le programe quit le block
    {
    Fichier* f = new Fichier();
    f->Creation(50);
    f->Remplit();
    f->Remplit();
    delete f;
    }

    return 0;
}