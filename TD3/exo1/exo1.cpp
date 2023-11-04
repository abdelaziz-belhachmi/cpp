//
// Created by unknow on 11/1/2023.
//

#include "exo1.h"

void printComplexe(complexe<float,float> output){


    if (output.getreel()==0){
        cout<<"output = "<<output.getimg()<<"i \n"<<endl;

    }else{
        if (output.getimg()>0){
            cout<<"output = "<<output.getreel()<<" + i"<<output.getimg()<<"\n"<<endl;

        }else if (output.getimg()<0){
            cout<<"output = "<<output.getreel()<<" - i"<<output.getimg()<<"\n"<<endl;

        }else if (output.getimg()==0){
            cout<<"output = "<<output.getreel()<<"\n"<<endl;

        }
    }

}

int main(){

    float a,b,c,d;

    cout<<"1/ Entrez le nombre reel :"<<endl;
    cin>>a;
    cout<<"1/ Entrez le nombre imaginaire :"<<endl;
    cin>>b;

//
    cout<<"2/ Entrez le nombre reel :"<<endl;
    cin>>c;
    cout<<"2/ Entrez le nombre imaginaire :"<<endl;
    cin>>d;


    complexe<float,float> n1(a,b);
    complexe<float,float> n2(c,d);

//    complexe<float,float> output = n1 + n2;

    printComplexe(n1 + n2);

    return 0;
}