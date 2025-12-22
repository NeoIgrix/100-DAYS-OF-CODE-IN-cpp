// Write a program to find profit or loss percentage given cost price and selling price

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void profit(int cp ,int sp){
     cout << ((sp-cp)*100.0) /cp << "% profit"; // 100.0 remember
}
void loss (int cp,int sp){
     cout << ((cp-sp)*100.0) /cp << "% loss";
}
int main() {
    int cp,sp;
    cin >> cp >> sp;
    if (sp >= cp)
    {
    profit(cp,sp);
    }else
    loss(cp,sp);
    
    return 0;
}