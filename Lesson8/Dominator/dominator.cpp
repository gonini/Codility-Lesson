// you can use includes, for example:
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <cstring>
#include <set>
#include <cmath>
#include <string>
#include <stack>
#include <queue>
using namespace std;
int solution(vector<int> &A);

int main(void) {
    
    vector<int> A = {3, 4, 3, 2, 3, -1, 3, 3};
    cout << solution(A) << "\n";
}

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.empty()) return -1;
    int num = A[0];
    int cnt = 1;
    for(int i = 1; i < A.size(); i++) {
        int here = A[i];
        if(num == here) {
            cnt += 1;
        } else {
            cnt -= 1;
            if(cnt == -1) {
                cnt = 0;
                num = here;
            }
        }
    }
    int domiCnt = 0;
    int domiIndex = 0;
    for(int i = 0; i < A.size(); i++) {
        if(A[i] == num) {
            domiCnt += 1;
            domiIndex = i;
        }
    }
    if(domiCnt <= A.size()/2) {
        return -1;
    }
    return domiIndex;
}

