#include "Epreuve.hpp"

class Matiere{
    private:
        int code;
        string nom;
        vector<Epreuve> Epreuves;
    public:
        Matiere(int, string);
        Matiere();
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


ostream& operator<<(ostream& os, const Matiere& M){
    os << "code: "<< M.code << endl << "Nom: " << M.nom << endl << "Epreuve: ";
    return os;
}