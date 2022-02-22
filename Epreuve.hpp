#include "Duree.hpp"

class Epreuve{
    private:
        string type;
        Duree D;
    public:
        Epreuve(string, Duree);
        Epreuve();
};

Epreuve::Epreuve(string type, Duree D){
    this->type = type;
    this->D = D;
}

Epreuve::Epreuve(){
    this->type = "";
    this->D = D;
}
