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
int solution(vector<int> &A, vector<int> &B);

int main(void) {
    vector<int> A = {4, 5, 6, 1, 2, 3, 11, 8, 10};
    vector<int> B = {0, 0 ,0, 0, 1, 1, 1, 1, 0};
    cout << solution(A, B) << "\n";
}

int solution(vector<int> &A, vector<int> &B) {
    // write your code in C++14 (g++ 6.2.0)
    stack<int> s;
    int cnt = 0;
    for(int i = 0; i < A.size(); i++) {
        int stream = B[i];
        int size = A[i];
        
        if(stream == 1) {
            s.push(size);
            continue;
        }
        while(!s.empty() && s.top() < size) {
            s.pop();
            
        }
        if(s.empty() && stream == 0){
                cnt += 1;
        }
    }
    return cnt + s.size();
}


