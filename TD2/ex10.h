//
// Created by unknow on 10/23/2023.
//

#ifndef C_EX10_H
#define C_EX10_H

#include <iostream>
#include <string>
using std::cout,std::string,std::endl;

class Personne {
private:
    const string nom;
    const string prenom;
    const string dateDeNaissance;

public:
    Personne(const string &n,const string &p,const string &date)
            : nom(n), prenom(p), dateDeNaissance(date) {}

    void Afficher()  {
        cout << "Nom: " << nom << ", Prenom: " << prenom << ", Date de Naissance: " << dateDeNaissance << endl;
    }
};

/*
 * */
class Employe : public Personne {
private:
  int salaire;

public:
    Employe(const string &n, const string &p, const string &date,const int s)
            : Personne(n, p, date), salaire(s) {}

    void Afficher() {
        Personne::Afficher();
        cout << "Salaire: " << salaire << endl;
    }
};

/*
 * */
class Chef : public Employe {
private:
     string service;

public:
    Chef(const string &n, const string &p, const string &date, int s, const char *srv)
            : Employe(n, p, date, s), service(srv) {}

    void Afficher() {
        Employe::Afficher();
        cout << "Service: " << service << endl;
    }
};


/*
 * */
class Directeur : public Chef {
private:
    const string societe;

public:
    Directeur(const string &n, const string &p, const string &date, int s, const char *srv, const string &soc)
            : Chef(n, p, date, s, (const char *) srv), societe(soc) {}

    void Afficher() {
        Chef::Afficher();
        cout << "Societe: " << societe << endl;
    }
};



#endif //C_EX10_H
