#include <iostream>

template<class T>
T square(T & v){
    return v*v;
}

int main (){
    float f = 2.5;
    int i = 5;

    std::cout<<square(f)<<std::endl;
    std::cout<<square(i)<<std::endl;

}
