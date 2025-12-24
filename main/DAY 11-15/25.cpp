// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void cal(char op,float a,float b){
     switch (op)
     {
     case '+' :
        cout << a+b << endl;
        break;
     case '-' :
        cout << a-b << endl;
        break;
     case '*' :
        cout << a*b << endl;
        break;
     case '/':
    if (b == 0)
        cout << "Error: division by zero";
    else
        cout << a / b;
    break;

           
     default:
     cout << "invalid" << endl;
        break;
     }
}
int main() {
    float a,b;
    cin >> a >> b;
    char op;
    cout << "select operator[+,-,*,/]" << endl;
    cin >> op;
    cal(op,a,b);
    return 0;
}