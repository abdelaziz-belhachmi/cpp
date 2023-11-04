//
// Created by unknow on 11/4/2023.
//

#ifndef WORKSPACE_EXO6_H
#define WORKSPACE_EXO6_H

class vect{

protected : // en prévision d'une éventuelle classe dérivée
    int nelem ; // nombre d'éléments
    int * adr ; // adresse zone dynamique contenant les éléments

public :
    vect (int) ; // constructeur
    ~vect () ; // destructeur
    int & operator [] (int) ; // accès à un élément par son "indice"

} ;


class vectok : public vect {

public:
    //default constrcutor
    vectok(int i): vect(i){}
    // constructor by copy , prendre comme valeur un object vectok , and initialise an object vect using nelem of the given object , and copying the values of nelem to nelemok and adr to adrok
    vectok(vectok & v): vect(v) { }

    vectok & operator = (vectok & vok) {

        // just in case if i pass the same object to it self
        if (this == &vok ){
            return *this;
        }
        //
         this->nelem = vok.nelem;
         this->adr = vok.adr;

         return *this;
    }

    int taille(){
        return this->nelem;
    }
};


#endif //WORKSPACE_EXO6_H
