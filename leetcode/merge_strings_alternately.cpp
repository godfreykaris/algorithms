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
    int count1, count2 = 0;
    int len1 = word1.length(), len2 = word2.length();
    
    string updated = "";

    for(count1 = 0; count1 < len1; count1++) {
        if(count1 < len2) {
            updated = updated + word1[count1] + word2[count1];
        }        
    }

    return updated;
}

int main() {
    Solution sol;
    string result = sol.mergeAlternately("Hello", "Hey");
    cout<< result << endl;

    return 0;
}
