// Write a program to input three numbers and find the largest among them using if–else.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void largest(int n,int a,int b){
    if (n >= a && n >= b)
    {
       cout << "n is largest" << endl; 
    }else if (a >= n && a >= b)
    {
       cout << "a is largest" << endl;
    }else
    cout << "b is largest" << endl;
    
    
}
int main() {
    int n,a,b;
    cin >> n >> a >> b;
    largest(n,a,b);
    return 0;
}