// Write a program to print the product of even numbers from 1 to n.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void product(int n){
    int p=1;
    for (int i = 2; i <=n; i+=2)
    {
     p*= i ;
    }
    cout << p << endl;
}
int main() {
    int n;
    cin >> n;
    product(n);
    return 0;
}