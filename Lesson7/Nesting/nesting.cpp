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
int solution(string &S);

int main(void) {
    
    string S = "())";
    cout << solution(S) << "\n";
}

int solution(string &S) {
    stack<char> s;
    for(int i = 0; i < S.size(); i++) {
        char here = S[i];
        if(here == '(') {
            s.push(here);
        } else {
            if(s.empty()) {
                return 0;
            }
            s.pop();
        }
    }
    if(!s.empty()) {
        return 0;
    }
    return 1;
}


