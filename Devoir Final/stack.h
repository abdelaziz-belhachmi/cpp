//
// Created by abdelaziz belhachmi on 11/6/2023.
// apogee 19006027
// filiere idai
//

#ifndef WORKSPACE_STACK_H
#define WORKSPACE_STACK_H


class stack {

private:
    int size;
    // tableau dynamique
    int* array;
    // H pointer au head de stack
    int *H;

public:

    // constructeur par defaut , cree un tableau de taille 20
    stack():size(20){
    int* array = new int[size];
    H = &array[0];
    }

    // constructeur qui prend la taile du stack et alloue dynamiquement un tableau
    stack(int x):size(x){
        int* array = new int[size];
        H = &array[0];
    }

    // get stack head
    int * get_Head(){
        return this->H;
    }



    //les operateurs

    bool operator << (int & n) {
        int *tmpH = get_Head();
        tmpH++;
        // si on a l'espace encore , donc on peut ajouter l element
        if (*tmpH < size) {
            array[*tmpH] = n;
            H = &array[*tmpH];
            return true;
        }

        return false;
    }

    bool operator >> (int & n) {
        int *tmpH = get_Head();

        // si on a l'espace encore , donc on peut ajouter l element
        if (*tmpH > 0) {
            // passing la valeur de array au dernier index ou on point
           n=array[*tmpH];

           // vider l emplacement de dernier element
           array[*tmpH] = -1;

// H va pointer au dernier element qui etait le precedent
           H = &array[*tmpH-1];

           //
            return true;
        }

        return false;
    }



        int operator++(){
        int *tmp = get_Head();
        if (*tmp == size){
            // return 1 car p est plain
            return 1;
        }
        else
            return 0;
    }

    int operator--(){
        int *tmp = get_Head();
        if (*tmp == 0){
            // return 1 car p est vide
            return 1;
        }
        else
            return 0;

    }

};


#endif //WORKSPACE_STACK_H
