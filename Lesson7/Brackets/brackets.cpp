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
int solution(string &s);

int cache[MAX];

int main(void) {
    
    string s = "";
    cout << solution(s) << "\n";
}

int solution(string &S) {
    // write your code in C++14 (g++ 6.2.0)
    
    int ret = 1;
    stack<char> s;
    for(int i = 0; i < S.size(); i++) {
        char here = S[i];
        char match = ' ';
        if(here == ')') {
            match = '(';
        }
        if(here == ']') {
            match = '[';
        }
        if(here == '}') {
            match = '{';
        }
        
        if(match == ' ') {
            s.push(here);
        } else {
            if(!s.empty() && s.top() == match) {
                s.pop();
            } else {
                return 0;
            }
        }
    }
    
    if(!s.empty()) {
        ret = 0;
    }
    
    return ret;
}


