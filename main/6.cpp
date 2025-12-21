// Write a program to swap two numbers using a third variable.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void swap(int &x , int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main() {
    int x ,y;
    cin >> x >> y ;
    swap(x,y);
    cout << x << " " << y;
    return 0;
}