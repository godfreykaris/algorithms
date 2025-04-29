#include <iostream>

using namespace std;

class Solution {
    public:
        string gcdOfStrings(string str1, string str2) {
            string gcd = "";
            bool repeating = false;
            int gcdIterator = 0;

            
            if(str1.length() > str2.length())
            {
                str1.swap(str2);
            }
            
            for( int i = 0; i < str2.length(); i++)
            {   
                if(i >= str1.length())
                {
                    if(gcdIterator >= gcd.length())
                    {
                        gcdIterator = 0;
                    }

                    if(str2[i] == gcd[gcdIterator]) {
                        gcdIterator++;                  
                    }
                    else
                    {
                        gcd = "";
                        break;
                    }

                    continue;
                }

                if(str1[i] == str2[i]) {
                    gcd += str1[i];                    
                }
                else
                {
                    gcd = "";
                    break;
                }
            }

            return gcd;
        }
};


int main() {
    Solution sol;
    string result = sol.gcdOfStrings("ABABAB", "ABAB");

    cout << result << endl;

    return 0;
}
