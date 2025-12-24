// Write a program to check if a number is a palindrome.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void palindrome(int n){
    int original = n;//most imp
    int r = 0;
    while(n>0)
    {
    int ld = n % 10 ;
    r= (r*10) + ld ;
    n/=10;
    }
    cout << r ;
    
    if (original == r)
    {
        cout << "  palindrome" << endl;
    }else
    cout << "  invalid";
}
int main() {
    int n;
    cin >>n;
    palindrome(n);
    return 0;
}