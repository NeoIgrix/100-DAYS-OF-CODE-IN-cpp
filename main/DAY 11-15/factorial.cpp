// Write a program to calculate the factorial of a number
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void factorial(int n){
    unsigned long long factor = 1;
    for (int i = 1; i <=n; i++)
    {
       factor*=i; 
    }
    cout << factor << endl;
}
int main() {
    int n;
    cin >>n;
    factorial(n);
    return 0;
}