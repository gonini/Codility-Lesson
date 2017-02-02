// you can use includes, for example:
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <cstring>

using namespace std;

#define MAX 100001
int prefix[MAX][4];

vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
    
    for(int i = 0; i < S.size(); i++) {
        int factor = 0;
        switch (S[i]) {
            case 'A': factor = 0; break;
            case 'C': factor = 1; break;
            case 'G': factor = 2; break;
            case 'T': factor = 3; break;
        }
        prefix[i][factor] = 1;
    }
    for(int j = 0; j < 4; j++) {
        for(int i = 1; i < S.size(); i++) {
            prefix[i][j] += prefix[i-1][j];
        }
    }
    vector<int> ret;
    for(int i = 0; i < P.size(); i++) {
        int s = P[i];
        int e = Q[i];
        
        for(int j = 0; j < 4; j++) {
            int isExist = 0;
            if(s - 1 >= 0) {
                isExist = prefix[s-1][j];
            }
            isExist = prefix[e][j] - isExist;
            if(isExist) {
                ret.push_back(j+1);
                break;
            }
        }
    }
    
    return ret;
}
