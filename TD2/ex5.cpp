#include <iostream>

int main(){
    int a=5;
    int &ref_a = a;
    int *p_a =  &a;

        std::cout<<"a   :"<<a<<"\n&a  :"<<&a<<std::endl;
        std::cout<<std::endl;
        std::cout<<"ref_a   :"<<ref_a<<"\n&ref_a  :"<<&ref_a<<std::endl;
        std::cout<<std::endl;
        std::cout<<"p_a :"<<p_a<<"\n&p_a  :"<<&p_a<<"\n*p_a :"<<*p_a<<std::endl;

}