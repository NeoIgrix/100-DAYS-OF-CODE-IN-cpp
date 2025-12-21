// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int area(int l , int b){
    return l*b;
}
int perimeter(int l , int b){
    return 2*(l+b);
}
int main() {
    int l ,b ;
    cin >> l >> b;
    cout << "Area is : " << area(l,b) << " sq.units" << endl;
    cout << "perimeter is : " << perimeter(l,b) << " unit" << endl;
    return 0;
}