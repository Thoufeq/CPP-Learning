#include <bits/stdc++.h>
using namespace std;

int main() {

    /*
        1. All data is represented by a bunch of grouped cells of 0's and 1's in memory
        2. As the range of your data grows, so will the number of digits you need to represent the data in memory
        3. Hexadecimal system makes it a little easier for humans to handle streams of data with 1's and 0's
        4. Octal has the same goal as Hexadecimal, but it's almost no longer used in modern times. It's just mentioned here for your awareness
    */

    int num1 = 15; // Decimal
    int num2 = 017; // Octal 
    int num3 = 0x0F; // HexaDecimal (0x at beginning to indicate that its Hexadecimal)
    int num4 = 0b00001111; // Binary (ob at beginning to indicate that its Hexadecimal)
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    cout << num4 << endl;

}