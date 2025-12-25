// Write a program to find the HCF (GCD) of two numbers.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void hcf(int a, int b){
    int h = 1;
    for (int i = 1; i <=min(a,b); i++)
    {
        if (a%i == 0 && b%i == 0)
        {
          h = i;
        }
        
    }
    cout << h << endl;
}
int main() {
    int a,b ;
    cin >> a >> b;
    hcf(a,b);
    return 0;
}