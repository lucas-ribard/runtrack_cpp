#include <iostream>
using namespace std;

int main() {
    int prixHT (0);
    int quantité (0);
    int taxe (0);
    cout << "Entrez le prix HT en €: ";
    cin >> prixHT;
    cout << "Entrez la quantité en kilo : ";
    cin >> quantité;
    cout << "Entrez la taxe en % : ";
    cin >> taxe;

    cout << "Le prix TTC est de " << (prixHT * quantité) + ((prixHT * quantité)* taxe /100) << " €\n";

    return 0;
} 
