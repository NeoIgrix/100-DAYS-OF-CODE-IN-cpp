// Write a program to find the 1’s complement of a binary number and print it.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int reverse(int n)
{
    int r = 0;
    while (n != 0)
    {
        int ld = n % 10;
        r = (r * 10) + ld;
        n /= 10;
    }
    return r;
}
int binary(int n)
{
    int binrev = 0;
    while (n != 0)
    {
        int ld = n % 2;
        binrev = (binrev * 10) + ld;
        n /= 2;
    }
    return reverse(binrev);
}
void compliment(int bin)
{
  while (bin != 0) {
        int ld = bin % 10;
        if (ld == 0)
            cout << 1;
        else
            cout << 0;
        bin /= 10;
  }
}
int main()
{
    int n;
    cin >> n;
    int bin = binary(n);
    cout << "Binary: " << bin << endl;
    cout << "1's Complement: ";
    compliment(bin);
    return 0;
}
/*#include <iostream>//faster method do it agian when on strings
using namespace std;

void onesComplement(string bin) {
    for (int i = 0; i < bin.length(); i++) {
        if (bin[i] == '0')
            cout << '1';
        else if (bin[i] == '1')
            cout << '0';
    }
}

int main() {
    string bin;
    cin >> bin;
    onesComplement(bin);
    return 0;
}
*/