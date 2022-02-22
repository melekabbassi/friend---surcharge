#include "Duree.hpp"

class Matiere{
    private:
        int code;
        string nom;
        vector<string> Epreuves;
    public:
        Matiere(int, string);
        Matiere();
        void printEp(vector<string> const &Epreuves);
        friend ostream& operator<<(ostream&, const Matiere&);
};

Matiere::Matiere(int code, string nom){
    this->code = code;
    this->nom = nom;
    this->Epreuves = Epreuves;
}

Matiere::Matiere(){
    this->code= 0;
    this->nom="";
}


void Matiere::printEp(vector<string> const &Epreuves){
    for (int i = 0; i < Epreuves.size(); i++) {
        cout << Epreuves.at(i) << ' ';
    }
}


ostream& operator<<(ostream& os, const Matiere& M){
    os << "code: "<< M.code << endl << "Nom: " << M.nom << endl << "Epreuve: ";
    return os;
}