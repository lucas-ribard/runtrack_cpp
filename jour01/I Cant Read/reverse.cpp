#include <bits/stdc++.h>
using namespace std;
 
// Function to reverse a string
string reverse(string str)
{
    string result;
    for (int i = str.length() - 1; i >= 0; i--)
        result += str[i];
        //cout << str[i];
    return result;
       
}
 
// Driver code
int main(void)
{
    string s = "Reverse this String!";
    string result = reverse(s);
    cout << s << "  Reversed : " << result;
    return (0);
}