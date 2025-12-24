// Write a program to print the sum of the first n odd numbers.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void sumodd(int n){
    int s=0;
    for (int i = 1; i <=n; i++)
    {
     s+= (2*i - 1);
    }
    cout << s << endl;
}void sumeven(int n){
    int s=0;
    for (int i = 1; i <=n; i++)
    {
     s+= (2*i);
    }
    cout << s << endl;
}
int main() {
    int n;
    cin >> n;
    int choice;
    cin >> choice;
    if (choice == 1)
    {
        sumodd(n);
    }else
    sumeven(n);
    return 0;
}