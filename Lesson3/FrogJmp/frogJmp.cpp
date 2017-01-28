// you can use includes, for example:
#include <algorithm>
#include <vector>
#include <iostream>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

using namespace std;

int solution(int X, int Y, int D);

int main(void) {
    cout << solution(10, 85, 30) << "\n";
}

int solution(int X, int Y, int D) {
    // write your code in C++14 (g++ 6.2.0)
    int jumpCount = (Y - X) / D;
    if ((Y - X) % D != 0) {
        jumpCount += 1;
    }
    return jumpCount;
}
