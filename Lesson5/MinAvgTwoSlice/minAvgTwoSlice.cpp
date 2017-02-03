// you can use includes, for example:
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <cstring>

using namespace std;

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A){
    // prefix 귀찮음에 못이겨 사용하지 않았습니다.
    // write your code in C++14 (g++ 6.2.0)
    int ret = 0;
    float avg = 300000.0;
    for(int i = 0; i < A.size()-1; i++) {
        
        float curAvg = (A[i] + A[i+1]) / 2.0;
        
        if(avg > curAvg) {
            avg = curAvg;
            ret = i;
        }
    }
    
    for(int i = 0; i < A.size()-2; i++) {
        float curAvg = (A[i] + A[i+1] + A[i+2]) / 3.0;
        if(avg > curAvg) {
            avg = curAvg;
            ret = i;
        }
    }
    return ret;
}
