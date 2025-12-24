// Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void check(char n){
    if (!isalpha(n)) {                 
        cout << "Not an alphabet" << endl;
        return;
    }
    if (n == 'a'||n == 'e'||n == 'i'||n == 'o'||n == 'u'||n == 'A'||n == 'E'||n == 'I'||n == 'O'||n == 'U')
    {
    cout << "GIVEN CHARACTER IS A VOWEL" << endl;
    }else
    cout << "GIVEN CHARACTER IS A consonant" << endl;
}
int main() {
    char n;
    cin >> n;
    check(n);
    return 0;
}