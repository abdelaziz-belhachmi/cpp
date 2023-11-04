#include <iostream>
#include <list>
#include <iterator>

using std::cout, std::cin , std::endl;

void printList(std::list<int> &Lx){
    std::list<int> :: iterator it;
    int index=0;
    for (it = Lx.begin() ; it != Lx.end() ; ++it){
        cout<<"L{"<<index<<"} = "<<*it<<"\t,"<<endl;
        index++;
    }
}

std::list<int> bull(std::list<int> &L){

    std::list<int>::iterator it,t;

    // applying bull algorithm to have a sorted list by the end
    for (t = L.begin() ; t != L.end() ; ++t) {
        for (it = L.begin() ; it != L.end() ; ++it) {
            auto nxt = next(it);
            if (nxt != L.end() && *it > *nxt) {
                std::swap(*it, *nxt);
            }
        }
    }
        return L;
}

//
std::list<int> insertion(std::list<int> &L) {
    std::list<int> sorted_list;
    std::list<int>::iterator it;
/**
 *
 * to do tomorrow
 *
 */

    return sorted_list;
}

std::list<int> selection(std::list<int> &L){
    std::list<int> sorted_list;
    std::list<int>::iterator it;

/**
 *
 * to do tomorrow
 *
 */
    return sorted_list;
}

int main(){
    int Taille;
    int input;

    std::list<int> L1,L2,L3;

    cout<<"Entrez la taille de la List:"<<endl;
    cin>>Taille;

    // remplire la list L1
    for (int i = 0; i < Taille; ++i) {
        cout<<"Inserer la valeur ["<<i<<"] :"<<endl;
        cin>>input;
        L1.push_back(input);
    }

    // copier L1 en L2 et L3
    L3 = L1;
//    L2 = L1;


    //afficher la liste L1
    printList(L1);

    // sort each list with a function

//    std::list<int> output1 = insertion(L1);
//    cout<<"resultas de tri avec insertion"<<endl;
//    printList(L1);
//
//    std::list<int> output2 = selection(L2);
//    cout<<"resultas de tri avec selection"<<endl;
//    printList(L2);

    std::list<int> output3 = bull(L3);
    cout<<"resultas de tri avec bull"<<endl;
    printList(L3);


    return 0;
}