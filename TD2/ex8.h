//
// Created by unknow on 10/24/2023.
//

#ifndef C_EX8_H
#define C_EX8_H


class complexe {
public:

    complexe(float reel , float imaginary):reel(reel), imaginary(imaginary){}

    ~complexe();

    int get_reel(){
        return this->reel;
    }

    int get_imaginary(){
        return this->imaginary;
    }

private:
    float reel;
    float imaginary;
};


#endif //C_EX8_H
