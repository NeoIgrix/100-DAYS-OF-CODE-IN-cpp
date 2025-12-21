/*Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void grade(int m){
    if (m >=90 && m <=100)
    {
      cout << "GRADE A" << endl;  
    }else if (m >=80 && m <=89)
    {
     cout << "GRADE B" << endl;
    }else if (m >=70 && m <=79)
    {
     cout << "GRADE c" << endl;
    }else if (m >=60 && m <=69)
    {
     cout << "GRADE d" << endl;
    }else
    cout << "GRADE f" << endl;
}
int main() {
    int m;
    cin >> m;
    grade(m);
    return 0;
}