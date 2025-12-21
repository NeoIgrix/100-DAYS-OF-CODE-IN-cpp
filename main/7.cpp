// Write a program to swap two numbers without using a third variable.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void swap(int &a,int &b){
    a = a+b;
    b = a-b;
    a = a-b;
}
int main() {
    int x ,y;
    cin >> x >> y ;
    cout << x << " " << y << endl;
    swap(x,y);
    cout << x << " " << y;
    return 0;
}
