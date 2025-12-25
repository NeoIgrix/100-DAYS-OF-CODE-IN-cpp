// Write a program to find the LCM of two numbers.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void lcm(int a, int b){ // lcm = a*b/hcf
    int h = 1;
    for (int i = 1; i <=min(a,b); i++)
    {
        if (a%i == 0 && b%i == 0)
        {
          h = i;
        }
        
    }
    cout << (a*b)/h;
}
int main() {
    int a,b ;
    cin >> a >> b;
    lcm(a,b);
    return 0;
}