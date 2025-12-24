// Write a program to check if a number is an Armstrong number.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int count(int n)
{
    int c = 0;
    while (n != 0)
    {
        n /= 10;
        c++;
    }
    return c;
}
void armstrong(int n)
{
    int original = n;
    int sum = 0;
    int digits = count(n);
    while (n != 0)
    {
        int digit = n % 10; // for extracting each digit
        // sum+= pow(digit,digits);
        int p = 1; // <-- start power = 1
        for (int i = 0; i < digits; i++)
            p *= digit; // <-- digit multiplied 'digits' times

        sum += p;
        n /= 10;
    }
    if (sum == original)
    {
        cout << "armstrong\n";
    }
    else
        cout << "invalid";
}
int main()
{
    int n;
    cin >> n;
    armstrong(n);
    return 0;
}