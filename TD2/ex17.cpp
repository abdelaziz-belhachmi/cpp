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
    switch (MM) {
        case 1:
            cout<<JJ<<" janvier "<<AAAA<<" à "<<HH<<"h"<<NN<<endl;

            break;
        case 2:
            cout<<JJ<<" fevrier "<<AAAA<<" à "<<HH<<"h"<<NN<<endl;

            break;
        case 3:
            cout<<JJ<<" mars "<<AAAA<<" à "<<HH<<"h"<<NN<<endl;

            break;
        case 4:
            cout<<JJ<<" avril "<<AAAA<<" à "<<HH<<"h"<<NN<<endl;

            break;
        case 5:
            cout<<JJ<<" mai "<<AAAA<<" à "<<HH<<"h"<<NN<<endl;

            break;
        case 6:
            cout<<JJ<<" juin "<<AAAA<<" à "<<HH<<"h"<<NN<<endl;

            break;
        case 7:
            cout<<JJ<<" juin "<<AAAA<<" à "<<HH<<"h"<<NN<<endl;

            break;
        case 8:
            cout<<JJ<<" août "<<AAAA<<" à "<<HH<<"h"<<NN<<endl;

            break;
        case 9:
            cout<<JJ<<" septembre "<<AAAA<<" à "<<HH<<"h"<<NN<<endl;

            break;
        case 10:
            cout<<JJ<<" octobre "<<AAAA<<" à "<<HH<<"h"<<NN<<endl;

            break;
        case 11:
            cout<<JJ<<" novembre  "<<AAAA<<" à "<<HH<<"h"<<NN<<endl;

            break;
        case 12:
            cout<<JJ<<" décembre  "<<AAAA<<" à "<<HH<<"h"<<NN<<endl;

            break;
        default:
cout<<"invalid month entred!!\n";
            break;

    }

    return 0;
}