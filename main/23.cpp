/*Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void fine(int n){
    if (n <= 7)
    {
      cout << "No fine!\n";  
    }else if (n > 7 && n <= 12)
    {
        cout << "Fine is ₹2/day i.e " << (n-7)*2 ;
    }else if (n > 12 && n <= 17)
    {
        cout << "Fine is ₹4/day i.e " << (n-12)*4 ;
    }else if (n > 17 && n <= 37)
    {
        cout << "Fine is ₹6/day i.e " << (n-17)*6 ;
    }else if (n > 37)
    {
        cout << "membership is cancelled. Pay ₹150 to renew it  "  ;
    }
    
    
}
int main() {
    int n;
    cin >> n;
    fine(n);
    return 0;
}