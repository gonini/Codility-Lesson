// you can use includes, for example:
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <cstring>
#include <set>

using namespace std;

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
int solution(vector<int> &A);


int main(void) {
    vector<int> A = {2, 1, 1, 2, 3, 1};
    cout << solution(A) << "\n";
}

int solution(vector<int> &A) {
    set<int> s;
    for(auto e: A) {
        s.insert(e);
    }
    return s.size();
}
