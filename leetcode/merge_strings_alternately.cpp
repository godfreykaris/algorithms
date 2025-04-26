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
    int count1 = 0, count2 = 0;

    int end = word1.length() + 2;
    
    for(count1 = 0; count1 <= end;) {
        if(word2[count1])
        {
            auto it = word1.insert(word1.begin() + count1 + 1, word2[count2]);
            count1+=2;
            count2+=1;
        }
        else {
            count1+=1;
            end++;
        }
        
    }
    
    if (count2 < word2.length())
            word1 += word2.substr(count2);

    return word1;
}

int main() {
    Solution sol;
    string result = sol.mergeAlternately("abcd", "pq");
    cout<< result << endl;

    return 0;
}
