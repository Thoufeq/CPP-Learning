#include <bits/stdc++.h>
using namespace std;

int main() {

    // Signed integer same as normal integer (int) 
    // 4 Bytes
    signed int i {-100}; // Range -2,147,483,648 to 2,147,483,647 (2^31 - 1).
    signed int j {10};

    // Unsigned integer
    // 4 Bytes
    unsigned int a {1100}; // (COMPILER ERROR) Range 0 to 2^32-1.
    unsigned int b {100};

    // Short integer 
    // 2 Bytes
    short int x {32000}; // Range -32,768 to 32,767.

    // Short unsigned integer  
    // 2 Bytes
    unsigned short int y {1222}; // Range 0 to 32,767.


    // Long Integer
    // 4 or 8 Bytes
    long long_var {88};
    long int long_int {33};
    signed long signed_long {44}; 
    signed long int signed_long_int {44};
    unsigned long int unsigned_long_int{44};


    // Long Long Integer 
    // 8 Bytes
    long long long_long {888};// Range -2^{63} to 2^{63}-1
    long long int long_long_int {999}; // Range -2^{63} to 2^{63}-1
    signed long long signed_long_long {444}; 
    signed long long int signed_long_long_int{1234};
    unsigned long long int unsigned_long_long_int{1234}; // Range 0 to 2^{64}-1

    cout << sizeof(i) << '\n' << sizeof(a) << '\n' << sizeof(x) << '\n' << sizeof(y) << '\n' << sizeof(unsigned_long_int) << '\n' << sizeof(long_long)  << endl; 


}