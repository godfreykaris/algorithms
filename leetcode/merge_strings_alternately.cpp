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
    int count1 = 0, count2 = 0;
    int end = word1.length();
    for(count1 = 0; count1 < end;) {
        if(count1 >= word2.length())
            break;
           
        auto it = word1.insert(word1.begin() + count2 + 1, word2[count1]);
        count1+=1;
        count2+=2;
        
    }
    
    if (count1 < word2.length()) {
        word1 += word2.substr(count1);
    }

    return word1;
}

int main() {
    Solution sol;
    string result = sol.mergeAlternately("abcd", "pq");
    cout<< result << endl;

    return 0;
}
