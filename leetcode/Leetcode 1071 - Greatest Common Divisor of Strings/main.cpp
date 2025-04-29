#include <iostream>

using namespace std;

class Solution {
    public:
        string gcdOfStrings(string str1, string str2) {
           // If concatenating str1 + str2 != str2 + str1 then no common divisor exists
           if(str1 + str2 != str2 + str1)
                return "";

            // Find GCD of lengths using Euclidean algorithm
            int gcdOfLength = gcd(str1.length(), str2.length());

            // Return substring of str1 from 0 to gcd length
            return str1.substr(0, gcdOfLength);
        }
    
        private:
            int gcd(int a, int b) {
                while(b) {
                    a %= b;
                    swap(a,b);
                }

                return a;
            }
};


int main() {
    Solution sol;
    string result = sol.gcdOfStrings("ABABAB", "ABAB");

    cout << result << endl;
    //Epected "AB"
    //Output "ABAB"

    return 0;
}
