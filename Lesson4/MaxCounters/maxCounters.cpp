// you can use includes, for example:
#include <algorithm>
#include <vector>
#include <cstring>
#include <iostream>
#include <set>
#define MAX 100001

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

using namespace std;

vector<int> solution(int N, vector<int> &A);


int main(void) {
    vector<int> A = {3, 4, 4, 6, 1, 4, 4};
    for(auto e : solution(5, A)) {
        cout << e << " ";
    }
}
vector<int> solution(int N, vector<int> &A) {
    vector<int> clacRet(N + 1, 0);
    int initNum = 0, maxNum = 0;
    for(auto e: A) {
        if(e == N + 1) {
            initNum = maxNum;
        } else {
            if(clacRet[e] < initNum) {
                clacRet[e] = initNum;
            }
            clacRet[e] += 1;
            maxNum = max(maxNum, clacRet[e]);
        }
    }
    for(int i = 1; i <= N; i++) {
        if(clacRet[i] < initNum) {
            clacRet[i] = initNum;
        }
    }
    clacRet.erase(clacRet.begin());
    return clacRet;
}


