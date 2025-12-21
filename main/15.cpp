// Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void check(char n){
    if (n >= 'A' && n <='Z')
    {
      cout << "UPPERCASE" << endl;
    }else if (n >= 'a' && n <= 'z')
    {
      cout << "lowercase" << endl;
    }else if (n >= '0' && n <= '9')
    {
      cout << "digit" << endl;
    }else
    cout << "spcial ch." << endl;
}
int main() {
    char n;
    cin >> n;
    check(n);
    return 0;
}