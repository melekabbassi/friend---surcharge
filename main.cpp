#include "Matiere.hpp"

int main(){
    Duree D1(23, 50, 30);
    Duree D2(14, 20, 50);
    Duree D3, D4;
    Duree D5(54, 40, 33);
    Duree D6;

    D1.afficher();
    D2.afficher();
    D3.afficher();

    D3 = D1 + D2;
    D3.afficher();

    D4 = D1 - D2;
    D4.afficher();

    cout << "D5-> " <<D5 << endl;

    cout << "D6-> ";
    cin >> D6;
    cout << "D6-> "<< D6;
    return 0;
}


/*  
    Duree D1(23, 50, 30);
    Duree D2(14, 20, 50);
    
    37:70:80
    38,31:20
*/
