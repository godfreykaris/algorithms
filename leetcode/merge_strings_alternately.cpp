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
    cout<< "Hey" << endl;
    return "Hey";
}

int main() {
    Solution sol;
    sol.mergeAlternately("Hello", "Hey");
    return 0;
}
