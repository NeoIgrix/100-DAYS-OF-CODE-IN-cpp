// Write a program to convert temperature from Celsius to Fahrenheit.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
float ctof(float temp){
    return (temp*1.8) + 32 ;
}
float ftoc(float temp){
    return (temp -32) * 5/9 ;
}
int main() {
    float temp;
    cin >> temp;
    int choice;
    cout << "enter your choice 1 for ctof 2 for ftoc\n";
    cin >> choice;
    if (choice == 1){
    cout << "The temp in fahrenheit is : " << ctof(temp);
    }
    else
    cout << "The temp in celcius is : " << ftoc(temp);
    
    return 0;
}