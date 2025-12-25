// Write a program to print all factors of a given number.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void factor(int n){
    for (int i = 1; i <= n; i++)
    {
      if (n%i == 0)
      {
        cout << i <<" " ;
      } 
    }
    
}
int main() {
    int n;
    cin >> n;
    factor(n);
    return 0;
}
/*#include <iostream> //faster
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";          // first factor

            if (i != n / i)            // avoid duplicate for perfect squares
                cout << n / i << " ";  // paired factor
        }
    }

    return 0;
}
*/