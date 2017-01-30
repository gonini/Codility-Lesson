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

int solution(vector<int> &A);
bool checker[MAX];

int main(void) {
    vector<int> A = {4, 1, 3, 2};
    cout << solution(A) << "\n";
}

int solution(vector<int> &A) {
    memset(checker, false, sizeof(checker));
    for(auto e: A) {
        if(e <= A.size() && !checker[e]) {
            checker[e] = true;
        } else {
            return 0;
        }
    }
    return 1;
}


