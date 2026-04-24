#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;  //variable declaration

    // After decl or variable it may contain garbage value.


    x = 23.5; //variable assignment old method



    int y {23}; // new method you will see difference in output
    int arr[] {1,2,3,4};
    vector<int> v {1,2,34,5}; 


    cout << x << " " << y << endl;
    return 0;
}