#include "Duree.hpp"

class Epreuve{
    private:
        string type;
        Duree D;
    public:
        Epreuve(string, Duree);
        Epreuve();
        friend ostream& operator<<(ostream&, const Epreuve&);
};

Epreuve::Epreuve(string type, Duree D){
    this->type = type;
    this->D = D;
}

Epreuve::Epreuve(){
    this->type = "";
    this->D = D;
}

ostream& operator<<(ostream& os, const Epreuve& E){
    os << E.type << endl << E.D << endl;
    return os;
}