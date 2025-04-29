/************************* Problem LeetCode - 1768 *************
You are given two strings word1 and word2. Merge the strings by adding letters 
in alternating order, starting with word1. If a string is longer than the other, 
append the additional letters onto the end of the merged string.

Return the merged string.
***********************************************/
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
    public:
        string mergeAlternately(string word1, string word2); 
};

string Solution::mergeAlternately(string word1, string word2) {
    string result;
        // Pre-allocate capacity to avoid reallocations
        result.reserve(word1.length() + word2.length());
        
        // Merge alternately until one string is exhausted
        size_t i = 0;
        while (i < word1.length() && i < word2.length()) {
            result += word1[i];
            result += word2[i];
            ++i;
        }
        
        // Append remaining characters from word1, if any
        result.append(word1, i);
        // Append remaining characters from word2, if any
        result.append(word2, i);
        
        return result;
}

int main() {
    Solution sol;
    string result = sol.mergeAlternately("abcd", "pq");
    cout<< result << endl;

    return 0;
}
