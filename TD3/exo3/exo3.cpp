//
// Created by unknow on 11/4/2023.
//

#include "exo3.h"

int main(){

    std::list<persone> pl;
    int n;

    cout<<"combien de personne vous vouler remplire :";
    cin>>n;

    for (int i = 0; i < n; ++i) {
        string nom, prenom;
        int age;

        cout<<"Nom de personne N"<<i<<": ";
        cin >> nom;
        cout<<"prenom de personne N"<<i<<": ";
        cin >> prenom;
        cout<<"age de personne N"<<i<<": ";
        cin >> age;
        persone p(nom,prenom,age);
        pl.push_back(p);
    }

    // je vais utiliser la function .sort qui va utiliser l operateur < que j'ai overloader dans la class personne

    pl.sort();

    // affichant la list apres le tri

    for (persone& person : pl) {
        std::cout << "Nom : " << person.get_nom() << ", Prenom : " << person.get_prenom() << ", age : " << person.get_age() << std::endl;
    }

    return 0;

}