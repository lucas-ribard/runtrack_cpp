/*
Les années sont bissextiles si elles sont multiples de quatre, mais pas si elles sont multiples de cent,
 à l'exception des années multiples de quatre cents qui,
  elles, sont également bissextiles. Ainsi, les années 2020, 2024 et 2028 sont bissextiles, 
  de même que 2000 ou 2400, mais pas 1900, 2100, 2200 et 2300. 
*/

#include <iostream>
using namespace std;

int main() {
  int year;
    cout << "Enter a year: ";
    cin >> year;

    if(year % 4 == 0) {
        if(year % 100 == 0) {
            if(year % 400 == 0)
                cout << year << " is a leap year.";
            else
                cout << year << " is not a leap year.";
        }
        else
            cout << year << " is a leap year.";
    }
    else
        cout << year << " is not a leap year.";

  return 0;
} 