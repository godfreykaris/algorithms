/************************* Problem LeetCode - 1768 *************
You are given two strings word1 and word2. Merge the strings by adding letters 
in alternating order, starting with word1. If a string is longer than the other, 
append the additional letters onto the end of the merged string.

Return the merged string.
***********************************************/
#include <string>
#include <iostream>
using namespace std;

class Solution {
    public:
        string mergeAlternately(string word1, string word2); 
};

string Solution::mergeAlternately(string word1, string word2) {
    int count;
    int len1 = word1.length(), len2 = word2.length();
    
    string updated = "";

    for(count = 0; count < len1; count++) {
        if(count >= len2) {
            break;
        }
        if(count < len2) {
            updated = updated + word1[count] + word2[count];
        }        
    }

    if(len1 > len2) {
        updated = updated + word1.substr(count);
    }
    else if(len2 > len1) {
        updated = updated + word2.substr(count);
    }

    return updated;
}

int main() {
    Solution sol;
    string result = sol.mergeAlternately("abcul", "pqr");
    cout<< result << endl;

    return 0;
}
