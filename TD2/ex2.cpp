#include <iostream>

int func1(int a){

   return a%2;
}

int func2(int a){

    return a%3;
}

int main(){
int user_input;
    for (int i = 0; i < 3; ++i) {

std::cout<<"donnez un entier :";
std::cin>>user_input;

    if (func1(user_input) == 0){
        std::cout<<"il est pair"<<std::endl;
    }
    //
    if (func2(user_input) == 0){
        std::cout<<"il est multiple de 3"<<std::endl;
    }
    //
    if (func2(user_input) == 0 && func1(user_input) == 0){
        std::cout<<"il est divisible par 6"<<std::endl;
    }
std::cout<<"==========\n";
    }

    return 0;
}