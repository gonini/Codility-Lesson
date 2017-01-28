// you can use includes, for example:
#include <algorithm>
#include <vector>
#include <cstring>
#include <iostream>
#define MAX 100002

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

using namespace std;
int leftSum[MAX];
int rightSum[MAX];

int solution(vector<int> &A);

int main(void) {
    vector<int> a = {3, 1, 2, 4, 3};
    cout << solution(a) << "\n";
}

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    memset(leftSum, 0, sizeof(leftSum));
    memset(rightSum, 0, sizeof(rightSum));
    int r = A.size() - 1;
    leftSum[0] = A[0];
    rightSum[r] = A[r];
    for(int l = 1; l < A.size(); l++) {
        leftSum[l] = leftSum[l-1] + A[l];
        rightSum[r-l] = rightSum[r-l+1] + A[r-l];
    }
    int minimalTape = ~(1<<31);
    for(int P = 1; P < A.size(); P++) {
        minimalTape = min(minimalTape, abs(leftSum[P-1] - rightSum[P]));
    }
    return minimalTape;
}
