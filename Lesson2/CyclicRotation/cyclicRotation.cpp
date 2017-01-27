// you can use includes, for example:
#include <algorithm>
#include <vector>
#include <iostream>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

using namespace std;

vector<int> solution(vector<int> &A, int K);

int main(void) {

    vector<int> A = {3, 8, 9, 7, 6};
    for(auto e : solution(A, 3)) {
        cout << e << " ";
    }
}

vector<int> solution(vector<int> &A, int K) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> rotationArr = A;
    if(K == 0 || rotationArr.size() <= 1) {
        return rotationArr;
    }
    int shift = K % A.size();
    while(shift--) {
        rotationArr.insert(rotationArr.begin(), rotationArr.back());
        rotationArr.pop_back();
    }
    return rotationArr;
}
