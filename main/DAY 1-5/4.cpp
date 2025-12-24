// Write a program to calculate the area and circumference of a circle given its radius.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const float PI = 3.1415926;

float area(float radius) {
    return PI * radius * radius;
}

float cir(float radius) {
    return 2 * PI * radius;
}
int main() {
    float radius;
    cin >> radius;
    cout << "area is : " << area(radius) << " sq.units\n";
    cout << "circumference is : " << cir(radius) << " unit\n";
    return 0;
}