#include <iostream>
using namespace std;

int main() {
    int Number(0);

    cin >> Number;
    if(Number % 2 == 0)
        cout << Number << " is even\n";
    else
        cout << Number << " is odd\n";

    return 0;
} 
