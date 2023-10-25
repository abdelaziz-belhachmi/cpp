//
// Created by unknow on 10/25/2023.
//

#ifndef C_EX14_H
#define C_EX14_H
#include <stack>
#include <iostream>

using std::cout,std::cin,std::endl;

class pile {

public:
    pile(){}

    void push(int a){
        this->S.push(a);
}
    void pop(){
        this->S.pop();
    }
private:
    std::stack<int> S;

};


#endif //C_EX14_H
