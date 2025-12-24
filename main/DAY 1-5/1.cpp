// Write a program to input two numbers and display their sum.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

float sum(float a, float b){
    return a+b;
}
int main() {
    float a,b;
    cin >> a >> b;
    cout << sum(a,b);
    return 0;
}
/*#include <iostream>
using namespace std;

void sum(float a, float b) {
    cout << a + b;
}

int main() {
    float a, b;
    cin >> a >> b;
    sum(a, b);
    return 0;
}*/

