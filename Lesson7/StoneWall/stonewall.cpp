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
#define MAX 41

using namespace std;
int solution(vector<int> &H);

int cache[MAX];

int main(void) {
}

int solution(vector<int> &H) {
    // write your code in C++14 (g++ 6.2.0)
    stack<int> s;
    int cnt = 0;
    for(auto e: H) {
        while(!s.empty() && s.top() > e) {
            s.pop();
        }
        if(s.empty() || s.top() < e) {
            s.push(e);
            cnt += 1;
        }
    }
    return cnt;
}


