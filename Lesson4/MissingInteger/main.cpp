// you can use includes, for example:
#include <algorithm>
#include <vector>
#include <cstring>
#include <iostream>
#include <set>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

using namespace std;

int solution(vector<int> &A);


int main(void) {
    vector<int> A = {1, 3, 6, 4, 1, 2};
    cout <<  solution(A) << "\n";
}

int solution(vector<int> &A) {
    set<int> s;
    for(auto e: A) {
        if(e > 0) {
            s.insert(e);
        }
    }
    int notOccur = 1, prev = 0;
    for(auto e: s) {
        if(prev + 1 != e) {
            notOccur = prev + 1;
            break;
        } else {
            prev += 1;
        }
     }
    if (prev >= notOccur) {
        notOccur = prev + 1;
    }
    return notOccur;
}
