//
// Created by unknow on 10/24/2023.
//

#include "ex8.h"
#include <string>
#include <iostream>
#include <cmath>

using std::string , std::cout, std::cin, std::endl;

complexe somme(float reel1,float reel2 , float img1, float img2);
complexe substraction(float reel1,float reel2 , float img1, float img2);
complexe division(float reel1,float reel2 , float img1, float img2);
complexe multiplication(float reel1,float reel2 , float img1, float img2);

void print_formatted_complexe(complexe c);

void print_menu(){
    cout<<"======entrer le numero d'opperation a faire ======\n1- addition\n2- multiplication\n3- substrction\n4- division\n0- pour quiter le menu.\n";
}


int main(){
    int r,m;
// asking user for 1st imaginary number details
    cout<<"--1ere nombre complexe--\n\tEntrez le nombre reel:\n";
    cin>>r;
    cout<<"--1ere nombre complexe--\n\tEntrez le nombre imaginaire:\n";
    cin>>m;
    complexe A(r,m);
// asking user for 2nd imaginary number details
    cout<<"--2eme nombre complexe--\n\tEntrez le nombre reel:\n";
    cin>>r;
    cout<<"--2eme nombre complexe--\n\tEntrez le nombre imaginaire:\n";
    cin>>m;
    complexe B(r,m);

bool looop_flag = true;
int x;

while(looop_flag){
    print_menu();
    cin>>x;
    switch (x) {
        case 0:
            looop_flag = false;
            break;
        case 1:
            //addition
            print_formatted_complexe(
                    somme(A.get_reel(),B.get_reel(),A.get_imaginary(),B.get_imaginary())
                    );
            break;
        case 2:
            //multiplication
            print_formatted_complexe(
                    multiplication(A.get_reel(),B.get_reel(),A.get_imaginary(),B.get_imaginary())
                    );
            break;
        case 3:
            //substrction
            print_formatted_complexe(
                    substraction(A.get_reel(),B.get_reel(),A.get_imaginary(),B.get_imaginary())
                    );
            break;
        case 4:
            //division
            print_formatted_complexe(
                    division(A.get_reel(),B.get_reel(),A.get_imaginary(),B.get_imaginary())
                    );
            break;
        default:
            cout<<"invalid input\n";
            break;
    }// fin switch case

}// fin while loop


    return 0;
}
// fin main

complexe somme(float reel1,float reel2 , float img1, float img2){
    complexe r(reel1 + reel2,img1 + img2);
    return r;
}

complexe substraction(float reel1,float reel2 , float img1, float img2){
    complexe r(reel1 - reel2,img1 - img2);
    return r;
}

/*
la relation de division complexe z1/z2 = ( (ac+bd) / (c^2+d^2) ) + i * ( (bc-ad)/ (c^2+d^2) )
a = reel 1
c = reel 2
b = img1
d = img2
*/

complexe division(float reel1,float reel2 , float img1, float img2){
    float x,y;
    x = ((reel1*reel2)+(img1*img2))/(pow(reel2,2)+pow(img2,2));
    y= ((img1*reel2)-(reel1*img2))/(pow(reel2,2)+ pow(img2,2));
    complexe r(x,y);
    return r;
}

complexe multiplication(float reel1,float reel2 , float img1, float img2){
    float x,y;
    x = ((reel1*reel2)-(img1*img2));
    y= ((img1*reel2)+(reel1*img2));
    complexe r(x,y);
    return r;
}

void print_formatted_complexe(complexe c){
cout<<"\n==========\t";
if (c.get_reel() !=0 && c.get_imaginary() != 0){
    if (c.get_imaginary()>0){
        cout<<"C = "<<c.get_reel()<<" + "<<c.get_imaginary()<<"i";
    }else {
        cout<<"C = "<<c.get_reel()<<c.get_imaginary()<<"i";
    }
}else if (c.get_reel() !=0 && c.get_imaginary() == 0){
    cout<<"C = "<<c.get_reel();
}else if(c.get_reel() ==0 && c.get_imaginary() == 0){
    cout<<"C = 0";
}else if (c.get_reel() ==0 && c.get_imaginary() != 0){
    cout<<"C = "<<c.get_imaginary()<<"i";

}
    cout<<"\t==========\n"

}