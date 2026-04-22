#include <bits/stdc++.h>
using namespace std;

int main() {
    // 1. '\n' (The Newline Character)
    // When you use '\n', you are simply inserting a character into the output stream.
    // How it works: It tells the computer, "Hey, put a newline here when you get around to printing the next batch of data."
    // Performance: It is very fast. The computer waits until it has a significant amount of data (a "buffer") before it actually talks to the screen or a file. This is like waiting until you have a full bag of trash before taking it to the curb.

    // 2. std::endl (End Line)
    // std::endl does two things: it inserts a newline character AND it "flushes the buffer."
    // How it works: It tells the computer, "Put a newline here, and immediately push everything in the buffer to the screen right now!"
    // Performance: It is much slower. If you use endl inside a loop that runs 100,000 times, your program will be significantly slower because you are forcing the hardware to update the screen or write to the disk constantly. This is like walking to the curb every time you throw away a single gum wrapper.
}
