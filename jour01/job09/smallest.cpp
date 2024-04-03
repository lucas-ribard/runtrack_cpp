#include <iostream>
using namespace std;

int trouverLePlusPetit(int *arr, int taille) {
    int *ptr = arr; // Pointeur sur le premier élément du tableau
    int min = *ptr;

    for(int i = 1; i < taille; i++) {
        ptr++; 
        if (*ptr < min) {
            min = *ptr; 
        }
    }

    return min;
}

int main() {
    int arr[] = {5, 2, 8, 7, 3 , 10 , 100};
    int taille = sizeof(arr) / sizeof(arr[0]);

    cout << "Le plus petit élément est : " << trouverLePlusPetit(arr, taille) << endl;

    return 0;
}
