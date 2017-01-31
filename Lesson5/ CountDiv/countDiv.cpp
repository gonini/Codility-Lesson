// you can use includes, for example:
#include <algorithm>
#include <vector>
#include <cstring>
#include <cmath>
#include <iostream>
#include <set>
#define MAX 100001

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

using namespace std;

int solution(int A, int B, int K);


int main(void) {
    //cout << solution( 0, 2000000000, 1) << "\n";
    
    cout << -3 / 5 << "\n";
}
int solution(int A, int B, int K) {
    // n mod k == 0 가 되기 위한 조건은
    // n은 k의 배수 or 0
    int ret = 0;
    if(A == 0) {
        ret += 1;
        A += 1;
    }
    ret += (B/K) - ((A-1)/K);
    return ret;
}


