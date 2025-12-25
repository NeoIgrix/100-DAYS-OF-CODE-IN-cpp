// Write a program to take a number as input and print its equivalent binary representation.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void reverse(int n){
    int r = 0;
    while(n>0)
    {
    int ld = n % 10 ;
    r= (r*10) + ld ;
    n/=10;
    }
    cout << r ;
}
void binary(int n){
     int binrev = 0; 
    while (n>0)
     {
        int rem = n%2;
        binrev = binrev*10 + rem ;
        n/=2;
     }
     reverse(binrev);
}
int main() {
    int n;
    cin >> n;
    binary(n);
    return 0;
}
/*#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string bin = "";

    if (n == 0) {
        bin = "0";
    }

    while (n != 0) {
        int rem = n % 2;
        bin = char(rem + '0') + bin;  // prepend
        n /= 2;
    }

    cout << bin;
    return 0;
}
*/