#include <iostream>
#include <cmath>


int main(){
    int input;
    std::cout<<"input array size:"<<std::endl;
    std::cin>>input;

//    dynamically allocating array
int * arr = new int[input];
// inserting array values from user
    for (int i = 0; i < input; ++i) {
        std::cout<<"input a number:"<<std::endl;
        std::cin>>*(arr+i);
    }
//    dynamically allocating 2nd array
int *arr2 = new int[input];
    // storing the sqrt of each element from arr to arr2
    for (int i = 0; i < input; ++i) {
        *(arr2 + i) = pow(*(arr +i),2);
    }

// printing first array
    for (int i = 0; i < input; ++i) {
        std::cout<<"arr["<<i<<"]="<<*(arr+i)<<std::endl;
    }

// clearing the first array
delete[] arr;
// printing 2nd array
    for (int i = 0; i < input; ++i) {
        std::cout<<"arr["<<i<<"]="<<*(arr2+i)<<std::endl;
    }
// clearing 2nd array
delete[] arr2;

    return 0;
}