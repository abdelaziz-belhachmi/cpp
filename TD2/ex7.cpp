#include <iostream>
using std::cout, std::cin, std::endl;

int main(){

    int t[10];

    for (int i = 0; i < 10; ++i) {
        cout<<"enter la valeur pour t["<<i<<"]"<<endl;
        cin>>t[i];
    }

//    tri avec tri bulle
int tmp;

    for (int i=0 ; i < 10-1; i++)
    {
        for (int j=0 ; j < 10-i-1; j++)
        {
            /* Pour un ordre décroissant utiliser < */
            if (t[j] > t[j+1])
            {
                tmp = t[j];
                t[j] = t[j+1];
                t[j+1] = tmp;
            }
        }
    }

// affiche le tableau pour voir la resultas
    for (int i = 0; i < 10; ++i) {
        cout<<"t["<<i<<"]="<<t[i]<<endl;
    }


    return 0;
}