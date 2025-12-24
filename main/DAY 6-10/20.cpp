// Write a program to display the day of the week based on a number (1–7) using switch-case

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void day(int n){
     switch (n)
     {
     case 1:
        cout << "Monday" << endl;
        break;
     case 2:
        cout << "tuesday" << endl;
        break;
     case 3:
        cout << "wednesday" << endl;
        break;
     case 4:
        cout << "thursday" << endl;
        break;         
     case 5:
        cout << "friday" << endl;
        break;
     case 6:
        cout << "saturday" << endl;
        break;
     case 7:
        cout << "sunday" << endl;
        break;   

     default:
     cout << "invalid" << endl;
        break;
     }
}
int main() {
    int n;
    cin >> n;
    day(n);
    return 0;
}