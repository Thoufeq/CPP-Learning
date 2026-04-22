#include <bits/stdc++.h>
using namespace std;

int main() {

    /*
        stream                                  Purpose
        std::cout                      Printing data to the console (terminal)
        std::cin                       Reading data from the terminal
        std::cerr                      Printing errors to the console
        std::clog                      Printing log messages to the console
    */
    
    // cout
    cout << "Hello World!" << endl; // it sends the message to the terminal but it prints after the buffer is full. 

    //cerr 
    cerr << "Something went wrong" << endl; // it sends critical data immediately without filling of the buffer.

    //clog
    clog << "System updated at 12:02:02" << endl; // its for tracking system tasks and waits for buffer to fill.
    
    //cin
    int age;
    string name;
    cin >> name >> age; // chaining input stram operators(name and age)
    cout << "Name : " << name << "Age : " << age << endl;
      
    cin.ignore(); // This skips the '\n' sitting in the buffer
    
    //Reading data with spaces.
    string fullname;
    getline(cin, fullname);
    cout << fullname << endl;


    return 0;
}