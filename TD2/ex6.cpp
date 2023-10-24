#include <iostream>

/*
 * 1. en transmettant l’adresse des variables concernées :
 */

void permuter1(int* p, int* q){
int tmp = *p;
*p = *q;
*q = tmp;
}

void incrementer1(int *r){
    (*r)++;
}

/*
 * 2. en utilisant la transmission par référence :
 */

void permuter2(int & p , int & q){
    int t = q;
    q = p;
    p = t;
}

void incrementer2(int & r){
++r;
}

/*
 * main()
 */

int main(){
    int a=1,b=2,c=3,d=4,e=5,f=6;

    std::cout<<"a=1\tb=2\tc=3\td=4\te=5\tf=6"<<'\n';

    incrementer1(&a);
    std::cout<<"new a = "<<a<<'\n';

    incrementer2(b);
    std::cout<<"new b = "<<b<<'\n';

    permuter1(&c,&d);
    std::cout<<"new c = "<<c<<" | new d = "<<d<<'\n';

    permuter2(e,f);
    std::cout<<"new e = "<<e<<" | new f = "<<f<<'\n';

    return 0;
}
