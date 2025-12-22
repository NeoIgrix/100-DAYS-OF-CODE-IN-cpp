// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void classify(int side1 ,int side2, int side3){
     if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) 
     {
        cout << "Not a valid triangle";
     }
     
     else if (side1 == side2 && side1 == side3)
     {
        cout << "equilateral" << endl;
     }else if (side1 == side2 || side1 == side3 || side2 == side3)
     {
        cout << "isoceles" << endl;
     }else
     cout << "scalene" << endl;
     
     
}
int main() {
    int side1,side2,side3;
    cin >> side1 >> side2 >> side3;
    classify(side1,side2,side3);
    return 0;
}