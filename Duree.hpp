#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

class Duree{
private:
    int H;
    int M;
    int S;
public:
    Duree(int, int, int);
    Duree();
    void afficher();
    Duree add(Duree);
    friend Duree ajouter(Duree, Duree);
    friend Duree operator+(const Duree&, const Duree&);
    friend Duree operator-(const Duree&, const Duree&);
    friend ostream& operator<<(ostream&, const Duree&);
    friend istream& operator>>(istream&, Duree&);
};

Duree::Duree(int H, int M, int S){
    this->H = H;
    this->M = M;
    this->S = S;
}

Duree::Duree(){
    this->H = 0;
    this->M = 0;
    this->S = 0;
}

void Duree::afficher(){
    cout << this->H << ':' << this->M << ':' << this->S << endl;
}

Duree Duree::add(Duree D1){
    Duree new_D;

    new_D.S = S + D1.S;
    new_D.M = M + D1.M + (new_D.S/60);
    new_D.H = H + D1.H + (new_D.M/60);
    new_D.M %= 60;
    new_D.S %= 60;

    return new_D;
}

Duree ajouter(Duree D1, Duree D2){
    Duree new_D;

    new_D.S = D1.S + D2.S;
    new_D.M = D1.M + D2.M + (new_D.S/60);
    new_D.H = D1.H + D2.H + (new_D.M/60);
    new_D.M %= 60;
    new_D.S %= 60;

    return new_D;
}

Duree operator+(const Duree& D1, const Duree& D2){
    Duree new_D;

    new_D.S = D1.S + D2.S;
    new_D.M = D1.M + D2.M + (new_D.S/60);
    new_D.H = D1.H + D2.H + (new_D.M/60);
    new_D.M %= 60;
    new_D.S %= 60;

    return new_D;
}

Duree operator-(const Duree& D1, const Duree& D2){
    Duree new_D;

    new_D.S = abs(D1.S - D2.S);
    new_D.M = abs(D1.M - D2.M) + (new_D.S/60);
    new_D.H = abs(D1.H - D2.H) + (new_D.M/60);
    new_D.M %= 60;
    new_D.S %= 60;

    return new_D;
}

ostream& operator<<(ostream& os, const Duree& D){
    os << D.H << ':' << D.M << ':' << D.S << endl;
    return os;
}


istream& operator>>(istream& is, Duree& D){
    is >> D.H >> D.M >> D.S;
    return is;
}