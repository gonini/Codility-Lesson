// you can use includes, for example:
#include <algorithm>
#include <vector>
#include <cstring>
#include <cmath>
#include <iostream>
#include <set>
#define MAX 1000000000

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

using namespace std;

int solution(vector<int> &A);

int main(void) {
    vector<int> A = {0,0,1,0,1,1};
    cout << solution(A) << "\n";
}

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int westCarCnt = 0;
    for(auto e: A) {
        if(e == 1) {
            westCarCnt += 1;
        }
    }
    int passingCarcnt = 0;
    int preEastCarCnt = 0;
    for(auto e: A) {
        if(e == 0) {
            preEastCarCnt += 1;
        } else {
            long long sum =  abs(preEastCarCnt * westCarCnt + passingCarcnt);
            if(sum > MAX) {
                return -1;
            }
            passingCarcnt = sum;
            preEastCarCnt = 0;
            westCarCnt -= 1;
        }
    }
    return passingCarcnt;
}


