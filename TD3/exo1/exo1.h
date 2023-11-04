#ifndef C_EXO1_H
#define C_EXO1_H
#include <iostream>

using std::cout, std::cin, std::endl;

template<class T,class T2> class complexe {
public:
    complexe(T r , T im): reel(r), img(im){}


    complexe operator+(complexe & c){
        return complexe(this->reel + c.reel,this->img + c.img);
    }

    complexe operator*(complexe & c){
        return complexe(this->reel * c.reel,this->img * c.img);
    }

    complexe operator/(complexe & c){
        return complexe(this->reel / c.reel,this->img / c.img);
    }

    complexe operator-(complexe & c){
        return complexe(this->reel - c.reel,this->img - c.img);
    }

    T getreel(){
        return this->reel;
    }
    T getimg(){
        return this->img;
    }
private:
    T reel;
    T2 img;

};


#endif //C_EXO1_H
