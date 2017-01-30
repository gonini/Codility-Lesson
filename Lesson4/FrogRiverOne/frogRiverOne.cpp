// you can use includes, for example:
#include <algorithm>
#include <vector>
#include <cstring>
#include <iostream>
#include <set>
#define MAX 100001

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
int isDiscover[MAX];

using namespace std;

int solution(int X, vector<int> &A);

int main(void) {
    vector<int> A = {1, 3, 1, 4, 2, 3, 5, 4};
    cout << solution(5, A) << "\n";
}

int solution(int X, vector<int> &A) {
    memset(isDiscover, false, sizeof(isDiscover));
    int arrival = (X*(X+1))/2;
    int curLeaves = 0;
    for(int i = 0; i < A.size(); i++) {
        if((A[i] < X + 1) && !isDiscover[A[i]]) {
            curLeaves += A[i];
            isDiscover[A[i]] = true;
            if(curLeaves == arrival) {
                return i;
            }
        }
    }
    return -1;
}
