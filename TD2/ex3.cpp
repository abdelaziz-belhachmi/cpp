#include <iostream>

typedef struct MaxMin {
    int max;
    int min;
};

// formalisme tableau
MaxMin func1(){
    int arr[10];
    MaxMin mn;

    // get array values
    for (int i = 0; i < 10; ++i) {
        std::cout<<i+1<<"- input a number :";
        std::cin>>arr[i];
    }
    // finding max and min
    int tmpMax;
    int tmpMin;
    for (int i = 0; i < 10; i++){
//
        if (arr[i]>tmpMax){
            tmpMax= arr[i];
        }

    }

    // giving the min the max value , so every other value in the array is smaller , so we will keep going down to the last small number
    tmpMin = tmpMax;
    for (int i = 0; i < 10; ++i) {
        //
        if (arr[i] < tmpMin){
            tmpMin = arr[i];
        }

    }

    mn.min = tmpMin;
    mn.max = tmpMax;

    return mn;
}

// formalisme pointeur
MaxMin func2(){
    MaxMin mn;
    int* arr = new int[10];

    // get array values
    for (int i = 0; i < 10; ++i) {
        std::cout<<i+1<<"- input a number :";
        std::cin>> *(arr+i);
    }
    // finding max and min
    int tmpMax;
    int tmpMin;
    for (int i = 0; i < 10; i++){
//
        if (*(arr+i)>tmpMax){
            tmpMax= *(arr+i);
        }

    }

    // giving the min the max value , so every other value in the array is smaller , so we will keep going down to the last small number
    tmpMin = tmpMax;
    for (int i = 0; i < 10; ++i) {
        //
        if (*(arr+i) < tmpMin){
            tmpMin = *(arr+i);
        }

    }

    mn.min = tmpMin;
    mn.max = tmpMax;

    return mn;
}

// main
int main(){
// initialising MinMax structs , each will be returned from a function
    MaxMin a;
    MaxMin b;

//    calling first function
    a = func1();
//    calling 2nd function
    b = func2();


    std::cout<<"------- formalisme tableau ---------\n";
    std::cout <<"min :"<< a.min<<std::endl;
    std::cout <<"max :"<< a.max<<std::endl;
    std::cout<<"------- formalisme pointeur ---------\n";
    std::cout <<"min :"<< b.min<<std::endl;
    std::cout <<"max :"<< b.max<<std::endl;
    return 0;
}