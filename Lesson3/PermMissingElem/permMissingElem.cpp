// you can use includes, for example:
#include <algorithm>
#include <vector>
#include <cstring>
#include <iostream>
#define MAX 100003

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

using namespace std;
bool cache[MAX];
int solution(vector<int> &A);

int main(void) {
    vector<int> a = {2, 3, 1, 5};
    cout << solution(a) << "\n";
}

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int missingNumber = 1;
    memset(cache, false, sizeof(cache));
    for(auto e: A) {
        cache[e] = true;
    }
    for(int i = 1; i <= A.size() + 1; i++) {
        if(!cache[i]) {
            missingNumber = i;
            break;
        }
    }
    return missingNumber;
}
