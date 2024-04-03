#include <iostream>
using namespace std;

int main() {
    int n (0);
    int m (0);

    cin >> n;
    cin >> m;

    
    cout << "Your first int  n : " << n << ", and you second int  m : "<< m <<"\n";
    
    n = n + m;
    m = n - m;
    n = n - m;
    
    cout << "Your first int  n : " << n << ", and you second int  m : "<< m <<"\n";
    return 0;
} 
