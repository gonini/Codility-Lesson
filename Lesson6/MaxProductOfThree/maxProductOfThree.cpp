// you can use includes, for example:
#include <algorithm>
#include <vector>

using namespace std;

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
int solution(vector<int> &A);

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    sort(A.begin(), A.end());
    int n = A.size()-1;
    return max(A[0] * A[1] * A[n], A[n] * A[n-1] * A[n-2]);
}
