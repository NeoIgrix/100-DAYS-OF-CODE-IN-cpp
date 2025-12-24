/*Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void bill(int u){
     if (u <= 100)
     {
        cout << "bill is: " << 250.0 + (u*5) << endl;// 250 is base charge
     }else if (u <= 200)
     {
        cout << "bill is: " << 500.0 + 250.0 + (u-100)*7 << endl;
     }else if (u <= 300)
     {
        cout << "bill is: " <<500.0 + 700.0 + 250.0 + (u-200)*10 << endl;
     }else
     cout << "bill is: " << 1000 + 1200 + 250.0 + (u-300)*12 << endl;
     
}
int main() {
    int u;
    cout << "enter units consumed: " << endl;
    cin >> u;
    bill(u);
    return 0;
}