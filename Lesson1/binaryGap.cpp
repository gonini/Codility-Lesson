// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

using namespace std;

int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    int longestGap = 0;
    int bitIdx = -1;
    for(int i = 0; i < 32; i++) {
        if((N & (1 << i)) > 0) {
            if(bitIdx > -1) {
                longestGap = max(longestGap, i - bitIdx - 1);
            }
            bitIdx = i;
        }
    }
    return longestGap;
}
