// Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
float simple(int p, float r, int t){
    return (p*r*t)/100 ;
}
float compound(int p,float r,int t){
    return p * pow(1+r/100,t) - p ;
}
int main() {
    int p,t,choice;
    float r;
    cout << "enter principal amount" << endl;
    cin >> p;
    cout << "rate in(%)" << endl;
    cin >> r;
    cout << "time in yrs" << endl;
    cin >> t;
    cout << "enter choice [1 for SI] OR [2 for CI]" << endl;
    cin >> choice;
    if (choice < 1 || choice > 2)
    {
        return 0;
    }
    
    if (choice == 1)
    {
        cout << "The simple intrest amount is "<< simple(p,r,t);
    }else
    cout << "The compound intrest amount is "<< compound(p,r,t);
    
    return 0;
}