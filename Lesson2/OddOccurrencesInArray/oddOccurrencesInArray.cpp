// you can use includes, for example:
#include <algorithm>
#include <vector>
#include <iostream>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

using namespace std;

int solution(vector<int> &A);

int main(void) {

    vector<int> A = {9, 3, 9, 3, 9, 7, 9};
    cout << solution(A);
     
}

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int singleNumber = 0;
    for(auto num: A) {
        singleNumber ^= num;
    }
    return singleNumber;
}
