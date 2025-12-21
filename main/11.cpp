// Write a program to input an integer and check whether it is even or odd using if–else.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void even(int n){
     if (n % 2 == 0)
     {
        cout << "no is even\n";
     }else
     cout << "no is odd\n";
     
}
int main() {
    int n;
    cin >> n;
    even(n);
    return 0;
}