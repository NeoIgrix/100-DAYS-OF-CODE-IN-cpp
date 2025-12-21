// Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void convert(int time){
    int hour = time / 3600 ;
    int min = (time%3600) / 60 ;// remaining seconds by 60
    int sec = (time%3600) % 60 ; // remaining sec % 60
    cout << hour << ":" << min << ":" << sec ;
}
int main() {
    int time;
    cout << "enter time in seconds:";
    cin >> time;
    convert(time);
    return 0;
}