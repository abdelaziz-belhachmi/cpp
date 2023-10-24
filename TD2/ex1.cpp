#include <iostream>
int counter;

void func(){
int *p = &counter;
    ++(*p);
    std::cout <<"appel numero :" << counter << "\n";
}

int main(){

    for (int i = 0; i < 5; ++i) {
        func();

    }

    return 0;
}