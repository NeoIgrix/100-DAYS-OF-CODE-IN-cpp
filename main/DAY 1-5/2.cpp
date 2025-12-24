// Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int sum(int a, int b){
    return a+b;
}
int diff(int a , int b){
    return a-b;
}
int prod(int a , int b){
    return a*b;
}
int quo(int a , int b){
    return a / b; // % is for remainder / for div,quoteint
}
int remainder(int a , int b){
    return a%b;
}
int main() {
    int a,b;
    cin >> a >> b;
    cout << " SUM is: "<< sum(a,b) << endl;
    cout << " DIFFERENCE is: "<< diff(a,b) << endl;
    cout << " PRODUCT is: "<< prod(a,b) << endl;
    cout << " QUPOTEINT is: "<< quo(a,b) << endl;
    cout << " Remainder is: "<< remainder(a,b) << endl;
    return 0;
}