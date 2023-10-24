#ifndef C_EX12_H
#define C_EX12_H
#include <iostream>

class Test{

    static int count;

public:
     void call(){
        count += 1;
    }
     void print_count(){
        std::cout<<"the count now is :"<<count<<"\n";
    }
};

#endif //C_EX12_H
