#include <iostream>
using namespace std;

int main() {
    float Moyenne(0);
    float NewValue(0);
    int i;
    
    for(i=0;i<5;i=i+1){
        cin >> NewValue;
        Moyenne += NewValue;
    }
    
    cout << Moyenne/5.0;

    return 0;
} 
