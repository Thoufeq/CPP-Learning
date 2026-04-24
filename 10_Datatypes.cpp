#include <bits/stdc++.h>
using namespace std;

int main() {

    // Integer(whole numbers only || Takes 4 or more bytes in memory)
    int a = -12;
    int b = 12.3; // it truncates the decimal value and gives only integer part
    cout << "Integer : " << a << "  " << b << endl;

    // Double (it involves both numbers aswell as decimal numbers)
    double c = 12.3;
    double d = 12;
    cout << "Double : " << c << " " << d << endl;

    // Character (it involves single charachter)
    char e = 'A';
    char f = '@';
    cout << "Char : " << e << " " << f << endl;

    // Boolean (True or False )
    // We can write conditions in the variable to get boolean value
    bool g = true;
    bool h = 10 > 12;
    cout << "Boolean : " << g << " " << h << endl;

    // String (it is an object(remember its an object) that represents a sequence of text or character datatypes)
    string i = "Hello";
    string j = "I am Mr.";
    cout << i << " World!" << '\n';
    cout << j << "Hoffman" << '\n';
    cout << "I am " << d << " years old." << endl;


    return 0;
}