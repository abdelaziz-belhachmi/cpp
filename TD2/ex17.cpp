#include <iostream>
#include <cmath>
using std::cout, std::cin, std::endl;

int main(){

    unsigned long long  X;
    cout<<"input:"<<endl;
    cin>>X;
//    150920011424
//    JJ MM AAAA HH NN

int JJ = X / pow(10,10);
cout<<"JJ="<<JJ<<endl;
X = X - JJ*pow(10,10);

int MM = X / pow(10,8);
    cout<<"MM="<<MM<<endl;
    X = X - MM*pow(10,8);

    int AAAA = X / pow(10,4);
    cout<<"AAAA="<<AAAA<<endl;
    X = X - AAAA*pow(10,4);

    int HH = X / pow(10,2);
    cout<<"HH="<<HH<<endl;
    X = X - HH*pow(10,2);

    int NN = X;

    cout<<JJ<<MM<<AAAA<<HH<<NN<<endl;


    return 0;
}